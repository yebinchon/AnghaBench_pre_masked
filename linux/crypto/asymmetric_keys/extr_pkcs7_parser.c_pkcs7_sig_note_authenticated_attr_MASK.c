
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pkcs7_signed_info {size_t msgdigest_len; int aa_set; void const* msgdigest; int signing_time; int index; } ;
struct pkcs7_parse_context {int last_oid; TYPE_1__* msg; struct pkcs7_signed_info* sinfo; } ;
typedef enum OID { ____Placeholder_OID } OID ;
struct TYPE_2__ {int data_type; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;




 int FUNC_0 (int ,int *) ;
 int FUNC_1 (void const*,size_t) ;
 int FUNC_2 (char*,unsigned char,size_t,unsigned int,void const*) ;
 int FUNC_3 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,size_t,unsigned char,void const*,size_t) ;

int FUNC_5(void *VAR_10, size_t VAR_11,
          unsigned char VAR_12,
          const void *VAR_13, size_t VAR_14)
{
 struct pkcs7_parse_context *VAR_15 = VAR_10;
 struct pkcs7_signed_info *VAR_16 = VAR_15->sinfo;
 enum OID VAR_17;

 FUNC_2("AuthAttr: %02x %zu [%*ph]\n", VAR_12, VAR_14, (unsigned)VAR_14, VAR_13);

 switch (VAR_15->last_oid) {
 case 133:
  if (FUNC_0(VAR_4, &VAR_16->aa_set))
   goto repeated;
  VAR_17 = FUNC_1(VAR_13, VAR_14);
  if (VAR_17 != VAR_15->msg->data_type) {
   FUNC_3("Mismatch between global data type (%d) and sinfo %u (%d)\n",
    VAR_15->msg->data_type, VAR_16->index,
    VAR_17);
   return -VAR_1;
  }
  return 0;

 case 129:
  if (FUNC_0(VAR_8, &VAR_16->aa_set))
   goto repeated;



  return FUNC_4(&VAR_16->signing_time,
     VAR_11, VAR_12, VAR_13, VAR_14);

 case 132:
  if (FUNC_0(VAR_5, &VAR_16->aa_set))
   goto repeated;
  if (VAR_12 != VAR_0)
   return -VAR_1;
  VAR_16->msgdigest = VAR_13;
  VAR_16->msgdigest_len = VAR_14;
  return 0;

 case 128:
  if (FUNC_0(VAR_9, &VAR_16->aa_set))
   goto repeated;
  if (VAR_15->msg->data_type != VAR_3) {
   FUNC_3("S/MIME Caps only allowed with Authenticode\n");
   return -VAR_2;
  }
  return 0;







 case 131:
  if (FUNC_0(VAR_6, &VAR_16->aa_set))
   goto repeated;
  goto authenticode_check;
 case 130:
  if (FUNC_0(VAR_7, &VAR_16->aa_set))
   goto repeated;
 authenticode_check:
  if (VAR_15->msg->data_type != VAR_3) {
   FUNC_3("Authenticode AuthAttrs only allowed with Authenticode\n");
   return -VAR_2;
  }

  return 0;
 default:
  return 0;
 }

repeated:

 FUNC_3("Repeated/multivalue AuthAttrs not permitted\n");
 return -VAR_2;
}
