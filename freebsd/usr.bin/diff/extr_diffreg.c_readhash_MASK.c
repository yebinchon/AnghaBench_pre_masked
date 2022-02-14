
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static int
FUNC_3(FILE *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = 1;
 VAR_8 = 0;
 if ((VAR_5 & (VAR_0|VAR_1)) == 0) {
  if (VAR_5 & VAR_2)
   for (VAR_6 = 0; (VAR_7 = FUNC_1(VAR_4)) != '\n'; VAR_6++) {
    if (VAR_5 & VAR_3 && VAR_7 == '\r') {
     VAR_7 = FUNC_1(VAR_4);
     if (VAR_7 == '\n')
      break;
     FUNC_2(VAR_7, VAR_4);
    }
    if (VAR_7 == 128) {
     if (VAR_6 == 0)
      return (0);
     break;
    }
    VAR_9 = VAR_9 * 127 + FUNC_0(VAR_7);
   }
  else
   for (VAR_6 = 0; (VAR_7 = FUNC_1(VAR_4)) != '\n'; VAR_6++) {
    if (VAR_5 & VAR_3 && VAR_7 == '\r') {
     VAR_7 = FUNC_1(VAR_4);
     if (VAR_7 == '\n')
      break;
     FUNC_2(VAR_7, VAR_4);
    }
    if (VAR_7 == 128) {
     if (VAR_6 == 0)
      return (0);
     break;
    }
    VAR_9 = VAR_9 * 127 + VAR_7;
   }
 } else {
  for (VAR_6 = 0;;) {
   switch (VAR_7 = FUNC_1(VAR_4)) {
   case '\r':
   case '\t':
   case '\v':
   case '\f':
   case ' ':
    VAR_8++;
    continue;
   default:
    if (VAR_8 && (VAR_5 & VAR_1) == 0) {
     VAR_6++;
     VAR_8 = 0;
    }
    VAR_9 = VAR_9 * 127 + FUNC_0(VAR_7);
    VAR_6++;
    continue;
   case 128:
    if (VAR_6 == 0)
     return (0);

   case '\n':
    break;
   }
   break;
  }
 }




 return (VAR_9 == 0 ? 1 : VAR_9);
}
