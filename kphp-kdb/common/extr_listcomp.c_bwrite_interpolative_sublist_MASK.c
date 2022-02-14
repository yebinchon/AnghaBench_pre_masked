
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitwriter {int dummy; } ;


 int FUNC_0 (struct bitwriter*,int const,int const) ;

void FUNC_1 (struct bitwriter *VAR_0, int *VAR_1, int VAR_2, int VAR_3) {
  if (VAR_3 - VAR_2 <= 1) { return; }
  const int VAR_4 = (VAR_2 + VAR_3) >> 1,
            VAR_5 = VAR_1[VAR_3] - (VAR_3 - VAR_4),
            VAR_6 = VAR_1[VAR_2] + (VAR_4 - VAR_2),
             VAR_7 = VAR_1[VAR_4] - VAR_6,
             VAR_8 = VAR_5 - VAR_6 + 1;
  FUNC_0 (VAR_0, VAR_7, VAR_8);
  FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_4);
  FUNC_1 (VAR_0, VAR_1, VAR_4, VAR_3);
}
