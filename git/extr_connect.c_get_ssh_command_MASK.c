
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char const**) ;

__attribute__((used)) static const char *FUNC_2(void)
{
 const char *VAR_0;

 if ((VAR_0 = FUNC_0("GIT_SSH_COMMAND")))
  return VAR_0;

 if (!FUNC_1("core.sshcommand", &VAR_0))
  return VAR_0;

 return ((void*)0);
}
