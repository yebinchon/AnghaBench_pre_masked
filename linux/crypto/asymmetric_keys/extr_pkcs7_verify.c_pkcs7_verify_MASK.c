
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkcs7_signed_info {int unsupported_crypto; scalar_t__ blacklisted; struct pkcs7_signed_info* next; } ;
struct pkcs7_message {struct pkcs7_signed_info* signed_infos; int data_type; int have_authattrs; } ;
typedef enum key_being_used_for { ____Placeholder_key_being_used_for } key_being_used_for ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct pkcs7_message*,struct pkcs7_signed_info*) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct pkcs7_message *VAR_5,
   enum key_being_used_for VAR_6)
{
 struct pkcs7_signed_info *VAR_7;
 int VAR_8 = -VAR_2;
 int VAR_9;

 FUNC_0("");

 switch (VAR_6) {
 case 129:
  if (VAR_5->data_type != VAR_3) {
   FUNC_3("Invalid module sig (not pkcs7-data)\n");
   return -VAR_1;
  }
  if (VAR_5->have_authattrs) {
   FUNC_3("Invalid module sig (has authattrs)\n");
   return -VAR_1;
  }
  break;
 case 131:
  if (VAR_5->data_type != VAR_3) {
   FUNC_3("Invalid firmware sig (not pkcs7-data)\n");
   return -VAR_1;
  }
  if (!VAR_5->have_authattrs) {
   FUNC_3("Invalid firmware sig (missing authattrs)\n");
   return -VAR_1;
  }
  break;
 case 130:
  if (VAR_5->data_type != VAR_4) {
   FUNC_3("Invalid kexec sig (not Authenticode)\n");
   return -VAR_1;
  }

  break;
 case 128:
  if (VAR_5->data_type != VAR_3) {
   FUNC_3("Invalid unspecified sig (not pkcs7-data)\n");
   return -VAR_1;
  }
  break;
 default:
  return -VAR_0;
 }

 for (VAR_7 = VAR_5->signed_infos; VAR_7; VAR_7 = VAR_7->next) {
  VAR_9 = FUNC_2(VAR_5, VAR_7);
  if (VAR_7->blacklisted) {
   if (VAR_8 == -VAR_2)
    VAR_8 = -VAR_1;
   continue;
  }
  if (VAR_9 < 0) {
   if (VAR_9 == -VAR_2) {
    VAR_7->unsupported_crypto = 1;
    continue;
   }
   FUNC_1(" = %d", VAR_9);
   return VAR_9;
  }
  VAR_8 = 0;
 }

 FUNC_1(" = %d", VAR_8);
 return VAR_8;
}
