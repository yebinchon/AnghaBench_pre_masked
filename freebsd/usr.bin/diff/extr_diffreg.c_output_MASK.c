
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int *,char*,int *,int,int,int,int,int*) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int* VAR_10 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(char *VAR_11, FILE *VAR_12, char *VAR_13, FILE *VAR_14, int VAR_15)
{
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

 FUNC_5(VAR_12);
 FUNC_5(VAR_14);
 VAR_16 = VAR_10[0];
 VAR_6[0] = 0;
 VAR_6[VAR_16 + 1] = VAR_10[1] + 1;
 if (VAR_9 != VAR_1) {
  for (VAR_17 = 1; VAR_17 <= VAR_16; VAR_17 = VAR_18 + 1) {
   while (VAR_17 <= VAR_16 && VAR_6[VAR_17] == VAR_6[VAR_17 - 1] + 1)
    VAR_17++;
   VAR_19 = VAR_6[VAR_17 - 1] + 1;
   VAR_18 = VAR_17 - 1;
   while (VAR_18 < VAR_16 && VAR_6[VAR_18 + 1] == 0)
    VAR_18++;
   VAR_20 = VAR_6[VAR_18 + 1] - 1;
   VAR_6[VAR_18] = VAR_20;
   FUNC_0(VAR_11, VAR_12, VAR_13, VAR_14, VAR_17, VAR_18, VAR_19, VAR_20, &VAR_15);
  }
 } else {
  for (VAR_17 = VAR_16; VAR_17 >= 1; VAR_17 = VAR_18 - 1) {
   while (VAR_17 >= 1 && VAR_6[VAR_17] == VAR_6[VAR_17 + 1] - 1 && VAR_6[VAR_17] != 0)
    VAR_17--;
   VAR_19 = VAR_6[VAR_17 + 1] - 1;
   VAR_18 = VAR_17 + 1;
   while (VAR_18 > 1 && VAR_6[VAR_18 - 1] == 0)
    VAR_18--;
   VAR_20 = VAR_6[VAR_18 - 1] + 1;
   VAR_6[VAR_18] = VAR_20;
   FUNC_0(VAR_11, VAR_12, VAR_13, VAR_14, VAR_18, VAR_17, VAR_20, VAR_19, &VAR_15);
  }
 }
 if (VAR_16 == 0)
  FUNC_0(VAR_11, VAR_12, VAR_13, VAR_14, 1, 0, 1, VAR_10[1], &VAR_15);
 if (VAR_9 == VAR_3 || VAR_9 == VAR_2) {
  for (;;) {

   if ((VAR_17 = FUNC_4(VAR_12)) == VAR_5)
    return;
   FUNC_1("%c", VAR_17);
  }

 }
 if (VAR_7 != 0) {
  if (VAR_9 == VAR_0)
   FUNC_2(VAR_12, VAR_14, VAR_15);
  else if (VAR_9 == VAR_4)
   FUNC_3(VAR_12, VAR_14, VAR_15);
 }
}
