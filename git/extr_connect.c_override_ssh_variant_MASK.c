
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ssh_variant { ____Placeholder_ssh_variant } ssh_variant ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char const**) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static void FUNC_3(enum ssh_variant *VAR_6)
{
 const char *VAR_7 = FUNC_0("GIT_SSH_VARIANT");

 if (!VAR_7 && FUNC_1("ssh.variant", &VAR_7))
  return;

 if (!FUNC_2(VAR_7, "auto"))
  *VAR_6 = VAR_0;
 else if (!FUNC_2(VAR_7, "plink"))
  *VAR_6 = VAR_1;
 else if (!FUNC_2(VAR_7, "putty"))
  *VAR_6 = VAR_2;
 else if (!FUNC_2(VAR_7, "tortoiseplink"))
  *VAR_6 = VAR_5;
 else if (!FUNC_2(VAR_7, "simple"))
  *VAR_6 = VAR_3;
 else
  *VAR_6 = VAR_4;
}
