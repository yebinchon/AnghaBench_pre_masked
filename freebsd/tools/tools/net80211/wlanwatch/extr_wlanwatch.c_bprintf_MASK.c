
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char,int *) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_0, int VAR_1, char *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;

 if (VAR_1 == 0)
  return;
 while ((VAR_3 = *VAR_2++) != 0) {
  if (VAR_1 & (1 << (VAR_3-1))) {
   if (VAR_4 == 0)
    VAR_3 = '<';
   else
    VAR_3 = ',';
   (void) FUNC_0(VAR_3, VAR_0);
   VAR_4 = 1;
   for (; (VAR_3 = *VAR_2) > 32; VAR_2++)
    (void) FUNC_0(VAR_3, VAR_0);
  } else
   while (*VAR_2 > 32)
    VAR_2++;
 }
 if (VAR_4)
  FUNC_0('>', VAR_0);
}
