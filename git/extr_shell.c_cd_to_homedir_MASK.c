
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
 const char *VAR_0 = FUNC_2("HOME");
 if (!VAR_0)
  FUNC_1("could not determine user's home directory; HOME is unset");
 if (FUNC_0(VAR_0) == -1)
  FUNC_1("could not chdir to user's home directory");
}
