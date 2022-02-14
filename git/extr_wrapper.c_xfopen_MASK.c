
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ VAR_1 ;
 int * FUNC_2 (char const*,char const*) ;

FILE *FUNC_3(const char *VAR_2, const char *VAR_3)
{
 for (;;) {
  FILE *VAR_4 = FUNC_2(VAR_2, VAR_3);
  if (VAR_4)
   return VAR_4;
  if (VAR_1 == VAR_0)
   continue;

  if (*VAR_3 && VAR_3[1] == '+')
   FUNC_1(FUNC_0("could not open '%s' for reading and writing"), VAR_2);
  else if (*VAR_3 == 'w' || *VAR_3 == 'a')
   FUNC_1(FUNC_0("could not open '%s' for writing"), VAR_2);
  else
   FUNC_1(FUNC_0("could not open '%s' for reading"), VAR_2);
 }
}
