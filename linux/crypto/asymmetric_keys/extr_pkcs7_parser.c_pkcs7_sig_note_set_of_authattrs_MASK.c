
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pkcs7_signed_info {size_t authattrs_len; void const* authattrs; int aa_set; } ;
struct pkcs7_parse_context {TYPE_1__* msg; struct pkcs7_signed_info* sinfo; } ;
struct TYPE_2__ {scalar_t__ data_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int *) ;

int FUNC_2(void *VAR_5, size_t VAR_6,
        unsigned char VAR_7,
        const void *VAR_8, size_t VAR_9)
{
 struct pkcs7_parse_context *VAR_10 = VAR_5;
 struct pkcs7_signed_info *VAR_11 = VAR_10->sinfo;

 if (!FUNC_1(VAR_2, &VAR_11->aa_set) ||
     !FUNC_1(VAR_3, &VAR_11->aa_set)) {
  FUNC_0("Missing required AuthAttr\n");
  return -VAR_0;
 }

 if (VAR_10->msg->data_type != VAR_1 &&
     FUNC_1(VAR_4, &VAR_11->aa_set)) {
  FUNC_0("Unexpected Authenticode AuthAttr\n");
  return -VAR_0;
 }


 VAR_11->authattrs = VAR_8 - (VAR_6 - 1);
 VAR_11->authattrs_len = VAR_9 + (VAR_6 - 1);
 return 0;
}
