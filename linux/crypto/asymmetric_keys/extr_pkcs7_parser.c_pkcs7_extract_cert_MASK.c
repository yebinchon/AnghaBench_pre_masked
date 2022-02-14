
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct x509_certificate {unsigned char index; struct x509_certificate* next; TYPE_1__* id; scalar_t__ subject; } ;
struct pkcs7_parse_context {unsigned char x509_index; struct x509_certificate** ppcerts; scalar_t__ data; } ;
struct TYPE_2__ {unsigned char len; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct x509_certificate*) ;
 int FUNC_1 (struct x509_certificate*) ;
 int FUNC_2 (char*,unsigned char,scalar_t__) ;
 struct x509_certificate* FUNC_3 (void const*,size_t) ;

int FUNC_4(void *VAR_4, size_t VAR_5,
         unsigned char VAR_6,
         const void *VAR_7, size_t VAR_8)
{
 struct pkcs7_parse_context *VAR_9 = VAR_4;
 struct x509_certificate *VAR_10;

 if (VAR_6 != ((VAR_2 << 6) | VAR_0 | VAR_1)) {
  FUNC_2("Cert began with tag %02x at %lu\n",
    VAR_6, (unsigned long)VAR_9 - VAR_9->data);
  return -VAR_3;
 }






 VAR_7 -= VAR_5;
 VAR_8 += VAR_5;

 if (((u8*)VAR_7)[1] == 0x80)
  VAR_8 += 2;

 VAR_10 = FUNC_3(VAR_7, VAR_8);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_10->index = ++VAR_9->x509_index;
 FUNC_2("Got cert %u for %s\n", VAR_10->index, VAR_10->subject);
 FUNC_2("- fingerprint %*phN\n", VAR_10->id->len, VAR_10->id->data);

 *VAR_9->ppcerts = VAR_10;
 VAR_9->ppcerts = &VAR_10->next;
 return 0;
}
