
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int FILE ;


 size_t VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char**,size_t*,char,int *) ;
 char** FUNC_6 (char**,size_t) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_2)
{
 FILE *VAR_3;
 char *VAR_4 = ((void*)0);
 size_t VAR_5 = 0;
 ssize_t VAR_6;

 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = FUNC_3(VAR_2, "r");
 if (VAR_3 == ((void*)0))
  FUNC_1(2, "%s", VAR_2);

 while ((VAR_6 = FUNC_5(&VAR_4, &VAR_5, '\0', VAR_3)) != -1) {
  if (*VAR_4 != '\0') {
   if (VAR_0 == (size_t) - 1)
    VAR_0 = 0;
   ++VAR_0;
   VAR_1 = FUNC_6(VAR_1,
       VAR_0 * sizeof(char *));
   if (VAR_1 == ((void*)0))
    FUNC_1(2, ((void*)0));
   VAR_1[VAR_0 - 1] = VAR_4;
  } else {
   FUNC_4(VAR_4);
  }
  VAR_4 = ((void*)0);
  VAR_5 = 0;
 }
 if (FUNC_2(VAR_3))
  FUNC_1(2, "%s: getdelim", VAR_2);

 FUNC_0(VAR_3, VAR_2);
}
