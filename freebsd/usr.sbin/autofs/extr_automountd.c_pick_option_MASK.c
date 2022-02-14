
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int,int) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,char const*,int) ;
 char* FUNC_7 (char**,char*) ;

__attribute__((used)) static char *
FUNC_8(const char *VAR_0, char **VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4;
 char *VAR_5 = ((void*)0);
 bool VAR_6 = 1;

 VAR_2 = *VAR_1;

 VAR_4 = FUNC_0(1, FUNC_5(*VAR_1) + 1);
 if (VAR_4 == ((void*)0))
  FUNC_3(1, "calloc");

 while ((VAR_3 = FUNC_7(VAR_1, ",")) != ((void*)0)) {



  if (FUNC_6(VAR_3, VAR_0, FUNC_5(VAR_0)) == 0) {
   VAR_5 = FUNC_1(VAR_3 + FUNC_5(VAR_0));
  } else {
   if (VAR_6 == 0)
    FUNC_4(VAR_4, ",");
   else
    VAR_6 = 0;
   FUNC_4(VAR_4, VAR_3);
  }
 }

 FUNC_2(VAR_2);
 *VAR_1 = VAR_4;

 return (VAR_5);
}
