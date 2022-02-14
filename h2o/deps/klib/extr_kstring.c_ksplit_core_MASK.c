
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;

int FUNC_3(char *VAR_1, int VAR_2, int *VAR_3, int **VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, *VAR_10, VAR_11;
 VAR_6 = 0; VAR_7 = *VAR_3; VAR_10 = *VAR_4;
 VAR_11 = FUNC_2(VAR_1);
 for (VAR_5 = 0, VAR_8 = VAR_9 = 0; VAR_5 <= VAR_11; ++VAR_5) {
  if (VAR_2 == 0) {
   if (FUNC_1(VAR_1[VAR_5]) || VAR_1[VAR_5] == 0) {
    if (FUNC_0(VAR_8)) do { if (VAR_4) { VAR_1[VAR_5] = 0; if (VAR_6 == VAR_7) { int *VAR_12; VAR_7 = VAR_7? VAR_7<<1 : 2; if ((VAR_12 = (int*)realloc(VAR_10, sizeof(int) * VAR_7))) { VAR_10 = VAR_12; } else { FUNC_0(VAR_10); *VAR_4 = ((void*)0); return 0; } } VAR_10[VAR_6++] = VAR_9; } else ++VAR_6; } while (0);
   } else {
    if (FUNC_1(VAR_8) || VAR_8 == 0) VAR_9 = VAR_5;
   }
  } else {
   if (VAR_1[VAR_5] == VAR_2 || VAR_1[VAR_5] == 0) {
    if (VAR_8 != 0 && VAR_8 != VAR_2) do { if (VAR_4) { VAR_1[VAR_5] = 0; if (VAR_6 == VAR_7) { int *VAR_13; VAR_7 = VAR_7? VAR_7<<1 : 2; if ((VAR_13 = (int*)FUNC_0(VAR_10, sizeof(int) * VAR_7))) { VAR_10 = VAR_13; } else { FUNC_0(VAR_10); *VAR_4 = ((void*)0); return 0; } } VAR_10[VAR_6++] = VAR_9; } else ++VAR_6; } while (0);
   } else {
    if (VAR_8 == VAR_2 || VAR_8 == 0) VAR_9 = VAR_5;
   }
  }
  VAR_8 = VAR_1[VAR_5];
 }
 *VAR_3 = VAR_7; *VAR_4 = VAR_10;
 return VAR_6;
}
