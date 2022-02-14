
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * password_utf16; int * userdomain_utf16; int * username_upper_utf16; int * username_utf16; int * password; int * userdomain; int * username_upper; int * username; int password_utf16_len; } ;
typedef TYPE_1__ ntlm_client ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(ntlm_client *VAR_0)
{
 if (VAR_0->password)
  FUNC_1(VAR_0->password, FUNC_2(VAR_0->password));

 if (VAR_0->password_utf16)
  FUNC_1(VAR_0->password_utf16, VAR_0->password_utf16_len);

 FUNC_0(VAR_0->username);
 FUNC_0(VAR_0->username_upper);
 FUNC_0(VAR_0->userdomain);
 FUNC_0(VAR_0->password);

 FUNC_0(VAR_0->username_utf16);
 FUNC_0(VAR_0->username_upper_utf16);
 FUNC_0(VAR_0->userdomain_utf16);
 FUNC_0(VAR_0->password_utf16);

 VAR_0->username = ((void*)0);
 VAR_0->username_upper = ((void*)0);
 VAR_0->userdomain = ((void*)0);
 VAR_0->password = ((void*)0);

 VAR_0->username_utf16 = ((void*)0);
 VAR_0->username_upper_utf16 = ((void*)0);
 VAR_0->userdomain_utf16 = ((void*)0);
 VAR_0->password_utf16 = ((void*)0);
}
