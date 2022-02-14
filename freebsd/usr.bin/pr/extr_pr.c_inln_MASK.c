
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int *) ;

int
FUNC_2(FILE *VAR_3, char *VAR_4, int VAR_5, int *VAR_6, int VAR_7, int *VAR_8)
{
 int VAR_9;
 int VAR_10 = VAR_2;
 int VAR_11 = VAR_0;
 char *VAR_12;
 int VAR_13 = (int)VAR_1;

 VAR_12 = VAR_4;

 if (VAR_10) {



  while ((--VAR_5 >= 0) && ((VAR_11 = FUNC_0(VAR_3)) != VAR_0)) {



   if (VAR_11 == VAR_13) {



    VAR_9 = (VAR_12 - VAR_4) + *VAR_6;
    VAR_9 = VAR_10 - (VAR_9 % VAR_10);




    if ((VAR_9 > VAR_5) && (FUNC_1(VAR_11, VAR_3) == VAR_0))
     return(1);




    while ((--VAR_9 >= 0) && (--VAR_5 >= 0))
     *VAR_12++ = ' ';
    continue;
   }
   if (VAR_11 == '\n')
    break;
   *VAR_12++ = VAR_11;
  }
 } else {



  while ((--VAR_5 >= 0) && ((VAR_11 = FUNC_0(VAR_3)) != VAR_0)) {
   if (VAR_11 == '\n')
    break;
   *VAR_12++ = VAR_11;
  }
 }
 VAR_9 = VAR_12 - VAR_4;
 if (VAR_11 == VAR_0) {
  *VAR_8 = 0;
  *VAR_6 = 0;
  if (!VAR_9)
   return(-1);
  return(VAR_9);
 }
 if (VAR_11 == '\n') {



  *VAR_8 = 0;
  *VAR_6 = 0;
  return(VAR_9);
 }




 if (VAR_7) {



  while ((VAR_11 = FUNC_0(VAR_3)) != VAR_0) {
   if (VAR_11 == '\n')
    break;
  }
  *VAR_6 = 0;
  *VAR_8 = 0;
 } else {



  *VAR_6 += VAR_9;
  *VAR_8 = 1;
 }

 return(VAR_9);
}
