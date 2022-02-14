
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int genopt ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,char const*,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (char const*,char*,char*) ;
 char* FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*,int,char*,char*) ;
 int VAR_2 ;
 int FUNC_10 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_11(const char *VAR_3, int VAR_4)
{
 FILE *VAR_5;
 char *VAR_6, *VAR_7, *VAR_8;
 char VAR_9[VAR_1];

 VAR_5 = FUNC_2(VAR_3, "r");
 if (VAR_5 == ((void*)0))
  return (0);
 while ((VAR_6 = FUNC_5(VAR_5)) != (char *)VAR_0) {
  if (VAR_6 == ((void*)0))
   continue;
  if (VAR_6[0] == '#') {
   while (((VAR_6 = FUNC_5(VAR_5)) != (char *)VAR_0) && VAR_6)
    continue;
   continue;
  }
  VAR_7 = FUNC_8(VAR_6);
  VAR_8 = FUNC_5(VAR_5);
  if (VAR_8 == (char *)VAR_0)
   return (1);
  if (VAR_8 == ((void*)0)) {
   if (VAR_4) {
    FUNC_3(VAR_2, "%s: compat file requires two"
        " words per line at %s\n", VAR_3, VAR_7);
    FUNC_0(1);
   }
   char *VAR_10 = FUNC_8(VAR_7);
   (void)FUNC_9(VAR_9, sizeof(VAR_9), "opt_%s.h",
       FUNC_7(VAR_10));
   VAR_8 = VAR_9;
   FUNC_4(VAR_10);
  }
  VAR_8 = FUNC_8(VAR_8);
  if (VAR_4 == 0)
   FUNC_6(VAR_3, VAR_7, VAR_8);
  else
   FUNC_10(VAR_7, VAR_8, VAR_4);
 }
 (void)FUNC_1(VAR_5);
 return (1);
}
