
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkcs7_parse_context {scalar_t__ last_oid; scalar_t__ data; } ;
typedef int buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void const*,size_t) ;
 int FUNC_1 (char*,scalar_t__,char*) ;
 int FUNC_2 (void const*,size_t,char*,int) ;

int FUNC_3(void *VAR_1, size_t VAR_2,
     unsigned char VAR_3,
     const void *VAR_4, size_t VAR_5)
{
 struct pkcs7_parse_context *VAR_6 = VAR_1;

 VAR_6->last_oid = FUNC_0(VAR_4, VAR_5);
 if (VAR_6->last_oid == VAR_0) {
  char VAR_7[50];
  FUNC_2(VAR_4, VAR_5, VAR_7, sizeof(VAR_7));
  FUNC_1("PKCS7: Unknown OID: [%lu] %s\n",
         (unsigned long)VAR_4 - VAR_6->data, VAR_7);
 }
 return 0;
}
