
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,...) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_0, const char *VAR_1, int VAR_2,
       char VAR_3, char * VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_0 == ((void*)0))
  FUNC_5("error: The %s requires a string argument", VAR_1);
 else if ((VAR_5 = FUNC_4(VAR_0)) <= VAR_2) {
  if (VAR_3 == 'd')
   VAR_6 = FUNC_2(VAR_0);
  else
   VAR_6 = FUNC_1(VAR_0);
  if (VAR_6) {
   FUNC_3(VAR_4, VAR_0, VAR_5);
   if (VAR_6 == 2)
    FUNC_0(VAR_4, VAR_5);
   return 1;
  } else
   FUNC_5("error: The %s must be composed of "
         "%c-characters", VAR_1, VAR_3);
 } else
  FUNC_5("error: The %s must be at most 32 characters long",
      VAR_1);
 return 0;
}
