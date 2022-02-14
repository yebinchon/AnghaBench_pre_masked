
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*,char const*,char const*) ;
 char* FUNC_1 (char const*,char const*) ;
 int VAR_3 ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int) ;
 char* FUNC_4 (char const*,int) ;
 char* FUNC_5 (int ) ;

char *FUNC_6(const char *VAR_4, int VAR_5)
{
 char *VAR_6 = ((void*)0);

 if (VAR_5 & VAR_0) {
  const char *VAR_7;

  VAR_7 = FUNC_2("GIT_ASKPASS");
  if (!VAR_7)
   VAR_7 = VAR_2;
  if (!VAR_7)
   VAR_7 = FUNC_2("SSH_ASKPASS");
  if (VAR_7 && *VAR_7)
   VAR_6 = FUNC_1(VAR_7, VAR_4);
 }

 if (!VAR_6) {
  const char *VAR_8;

  if (FUNC_3("GIT_TERMINAL_PROMPT", 1)) {
   VAR_6 = FUNC_4(VAR_4, VAR_5 & VAR_1);
   VAR_8 = FUNC_5(VAR_3);
  } else {
   VAR_8 = "terminal prompts disabled";
  }
  if (!VAR_6) {

   FUNC_0("could not read %s%s", VAR_4, VAR_8);
  }
 }
 return VAR_6;
}
