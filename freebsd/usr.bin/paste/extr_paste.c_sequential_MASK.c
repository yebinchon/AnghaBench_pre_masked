
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wint_t ;
typedef int FILE ;


 char VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 char FUNC_2 (int *) ;
 int FUNC_3 (char) ;
 int * VAR_3 ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(char **VAR_4)
{
 FILE *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 wint_t VAR_9;
 char *VAR_10;

 VAR_7 = 0;
 for (; (VAR_10 = *VAR_4); ++VAR_4) {
  if (VAR_10[0] == '-' && !VAR_10[1])
   VAR_5 = VAR_3;
  else if (!(VAR_5 = FUNC_1(VAR_10, "r"))) {
   FUNC_4("%s", VAR_10);
   VAR_7 = 1;
   continue;
  }
  VAR_6 = VAR_8 = 0;
  while ((VAR_9 = FUNC_2(VAR_5)) != VAR_0) {
   if (VAR_8) {
    VAR_8 = 0;
    if (VAR_1[VAR_6] != '\0')
     FUNC_3(VAR_1[VAR_6]);
    if (++VAR_6 == VAR_2)
     VAR_6 = 0;
   }
   if (VAR_9 != '\n')
    FUNC_3(VAR_9);
   else
    VAR_8 = 1;
  }
  if (VAR_8)
   FUNC_3('\n');
  if (VAR_5 != VAR_3)
   (void)FUNC_0(VAR_5);
 }

 return (VAR_7 != 0);
}
