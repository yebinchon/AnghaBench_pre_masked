
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x509_parse_context {scalar_t__ last_oid; unsigned char const* raw_akid; size_t raw_akid_size; TYPE_1__* cert; } ;
struct asymmetric_key_id {int data; int len; } ;
struct TYPE_2__ {size_t raw_skid_size; unsigned char const* raw_skid; struct asymmetric_key_id* skid; } ;


 unsigned char const VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct asymmetric_key_id*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct asymmetric_key_id*) ;
 struct asymmetric_key_id* FUNC_2 (unsigned char const*,size_t,char*,int ) ;
 int FUNC_3 (char*,scalar_t__,...) ;

int FUNC_4(void *VAR_4, size_t VAR_5,
      unsigned char VAR_6,
      const void *VAR_7, size_t VAR_8)
{
 struct x509_parse_context *VAR_9 = VAR_4;
 struct asymmetric_key_id *VAR_10;
 const unsigned char *VAR_11 = VAR_7;

 FUNC_3("Extension: %u\n", VAR_9->last_oid);

 if (VAR_9->last_oid == VAR_3) {

  if (VAR_9->cert->skid || VAR_8 < 3)
   return -VAR_1;
  if (VAR_11[0] != VAR_0 || VAR_11[1] != VAR_8 - 2)
   return -VAR_1;
  VAR_11 += 2;
  VAR_8 -= 2;

  VAR_9->cert->raw_skid_size = VAR_8;
  VAR_9->cert->raw_skid = VAR_11;
  VAR_10 = FUNC_2(VAR_11, VAR_8, "", 0);
  if (FUNC_0(VAR_10))
   return FUNC_1(VAR_10);
  VAR_9->cert->skid = VAR_10;
  FUNC_3("subjkeyid %*phN\n", VAR_10->len, VAR_10->data);
  return 0;
 }

 if (VAR_9->last_oid == VAR_2) {

  VAR_9->raw_akid = VAR_11;
  VAR_9->raw_akid_size = VAR_8;
  return 0;
 }

 return 0;
}
