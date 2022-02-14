
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_1 ;

int
FUNC_2(FILE *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;

 while(--VAR_3 > 0) {
  VAR_6 = VAR_4;
  while ((VAR_5 = FUNC_1(VAR_2)) != VAR_0) {
   if ((VAR_5 == '\n') && (--VAR_6 == 0))
    break;
  }
  if (VAR_5 == VAR_0) {
   if (VAR_2 != VAR_1)
    (void)FUNC_0(VAR_2);
   return(1);
  }
 }
 return(0);
}
