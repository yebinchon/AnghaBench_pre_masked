
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (int) ;
 scalar_t__ VAR_1 ;

int
FUNC_7(FILE *VAR_2, const char *VAR_3, off_t VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 char *VAR_8, *VAR_9, *VAR_10;
 int VAR_11;
 char *VAR_12;

 if ((VAR_12 = VAR_9 = FUNC_6(VAR_4)) == ((void*)0))
  FUNC_1(1, "malloc");

 for (VAR_11 = 0, VAR_8 = VAR_9 + VAR_4; (VAR_5 = FUNC_4(VAR_2)) != VAR_0;) {
  *VAR_9 = VAR_5;
  if (++VAR_9 == VAR_8) {
   VAR_11 = 1;
   VAR_9 = VAR_12;
  }
 }
 if (FUNC_2(VAR_2)) {
  FUNC_5(VAR_3);
  FUNC_3(VAR_12);
  return 1;
 }

 if (VAR_1) {
  for (VAR_10 = VAR_9 - 1, VAR_6 = 0; VAR_10 >= VAR_12; --VAR_10, ++VAR_6)
   if (*VAR_10 == '\n' && VAR_6) {
    FUNC_0(VAR_10 + 1, VAR_6);
    VAR_6 = 0;
  }
  if (VAR_11) {
   VAR_7 = VAR_6;
   for (VAR_10 = VAR_8 - 1, VAR_6 = 0; VAR_10 >= VAR_9; --VAR_10, ++VAR_6)
    if (*VAR_10 == '\n') {
     if (VAR_6) {
      FUNC_0(VAR_10 + 1, VAR_6);
      VAR_6 = 0;
     }
     if (VAR_7) {
      FUNC_0(VAR_12, VAR_7);
      VAR_7 = 0;
     }
    }
   if (VAR_6)
    FUNC_0(VAR_10 + 1, VAR_6);
   if (VAR_7)
    FUNC_0(VAR_12, VAR_7);
  }
 } else {
  if (VAR_11 && (VAR_6 = VAR_8 - VAR_9))
   FUNC_0(VAR_9, VAR_6);
  VAR_6 = VAR_9 - VAR_12;
  if (VAR_6)
   FUNC_0(VAR_12, VAR_6);
 }

 FUNC_3(VAR_12);
 return 0;
}
