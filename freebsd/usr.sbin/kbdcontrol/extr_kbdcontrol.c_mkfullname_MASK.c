
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static char *
FUNC_5(const char *VAR_0, const char *VAR_1, const char *VAR_2)
{
 static char *VAR_3 = ((void*)0);
 static int VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_0) + FUNC_4(VAR_1) + FUNC_4(VAR_2) + 1;
 if (VAR_5 > VAR_4) {
  if (VAR_3)
   VAR_3 = (char *)FUNC_1(VAR_3, VAR_5);
  else
   VAR_3 = (char *)FUNC_0(VAR_5);
 }
 if (!VAR_3) {
  VAR_4 = 0;
  return(((void*)0));
 }

 VAR_4 = VAR_5;
 FUNC_3(VAR_3, VAR_0);
 FUNC_2(VAR_3, VAR_1);
 FUNC_2(VAR_3, VAR_2);
 return(VAR_3);
}
