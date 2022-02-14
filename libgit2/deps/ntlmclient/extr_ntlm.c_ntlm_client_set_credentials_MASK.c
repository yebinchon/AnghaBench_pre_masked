
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * userdomain; int unicode_ctx; int userdomain_utf16_len; int userdomain_utf16; int * username_upper; int username_upper_utf16_len; int username_upper_utf16; int * username; int username_utf16_len; int username_utf16; int * password; } ;
typedef TYPE_1__ ntlm_client ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int *,int *,int ,int *,int ) ;
 void* FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;

int FUNC_8(
 ntlm_client *VAR_0,
 const char *VAR_1,
 const char *VAR_2,
 const char *VAR_3)
{
 FUNC_0(VAR_0);

 FUNC_1(VAR_0);

 if ((VAR_1 && (VAR_0->username = FUNC_4(VAR_1)) == ((void*)0)) ||
  (VAR_2 && (VAR_0->userdomain = FUNC_4(VAR_2)) == ((void*)0)) ||
  (VAR_3 && (VAR_0->password = FUNC_4(VAR_3)) == ((void*)0))) {
  FUNC_2(VAR_0, "out of memory");
  return -1;
 }

 if (VAR_1 && FUNC_6(VAR_0)) {
  if ((VAR_0->username_upper = FUNC_4(VAR_1)) == ((void*)0)) {
   FUNC_2(VAR_0, "out of memory");
   return -1;
  }
  FUNC_7(VAR_0->username_upper);

  if (!FUNC_3(
    &VAR_0->username_utf16,
    &VAR_0->username_utf16_len,
    VAR_0->unicode_ctx,
    VAR_0->username,
    FUNC_5(VAR_0->username)))
   return -1;

  if (!FUNC_3(
    &VAR_0->username_upper_utf16,
    &VAR_0->username_upper_utf16_len,
    VAR_0->unicode_ctx,
    VAR_0->username_upper,
    FUNC_5(VAR_0->username_upper)))
   return -1;
 }

 if (VAR_2 && FUNC_6(VAR_0) && !FUNC_3(
   &VAR_0->userdomain_utf16,
   &VAR_0->userdomain_utf16_len,
   VAR_0->unicode_ctx,
   VAR_0->userdomain,
   FUNC_5(VAR_0->userdomain)))
  return -1;

 return 0;
}
