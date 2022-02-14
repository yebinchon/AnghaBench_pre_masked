
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct public_key_signature {int dummy; } ;
struct pkcs7_signed_info {TYPE_2__* sig; struct pkcs7_signed_info* next; scalar_t__ index; int authattrs; } ;
struct pkcs7_parse_context {char* raw_issuer; struct pkcs7_signed_info* sinfo; struct pkcs7_signed_info** ppsinfo; scalar_t__ sinfo_index; int raw_skid_size; int raw_skid; int raw_issuer_size; int raw_serial_size; int raw_serial; int expect_skid; TYPE_1__* msg; } ;
struct asymmetric_key_id {int data; int len; } ;
struct TYPE_4__ {struct asymmetric_key_id** auth_ids; } ;
struct TYPE_3__ {scalar_t__ data_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct asymmetric_key_id*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct asymmetric_key_id*) ;
 struct asymmetric_key_id* FUNC_2 (int ,int ,char*,int ) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (char*) ;

int FUNC_6(void *VAR_4, size_t VAR_5,
      unsigned char VAR_6,
      const void *VAR_7, size_t VAR_8)
{
 struct pkcs7_parse_context *VAR_9 = VAR_4;
 struct pkcs7_signed_info *VAR_10 = VAR_9->sinfo;
 struct asymmetric_key_id *VAR_11;

 if (VAR_9->msg->data_type == VAR_3 && !VAR_10->authattrs) {
  FUNC_5("Authenticode requires AuthAttrs\n");
  return -VAR_0;
 }


 if (!VAR_9->expect_skid) {
  VAR_11 = FUNC_2(VAR_9->raw_serial,
       VAR_9->raw_serial_size,
       VAR_9->raw_issuer,
       VAR_9->raw_issuer_size);
 } else {
  VAR_11 = FUNC_2(VAR_9->raw_skid,
       VAR_9->raw_skid_size,
       "", 0);
 }
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 FUNC_4("SINFO KID: %u [%*phN]\n", VAR_11->len, VAR_11->len, VAR_11->data);

 VAR_10->sig->auth_ids[0] = VAR_11;
 VAR_10->index = ++VAR_9->sinfo_index;
 *VAR_9->ppsinfo = VAR_10;
 VAR_9->ppsinfo = &VAR_10->next;
 VAR_9->sinfo = FUNC_3(sizeof(struct pkcs7_signed_info), VAR_2);
 if (!VAR_9->sinfo)
  return -VAR_1;
 VAR_9->sinfo->sig = FUNC_3(sizeof(struct public_key_signature),
      VAR_2);
 if (!VAR_9->sinfo->sig)
  return -VAR_1;
 return 0;
}
