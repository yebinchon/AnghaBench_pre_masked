
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitwriter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bitwriter*,int,int) ;

void FUNC_2 (struct bitwriter *VAR_1, int *VAR_2, int VAR_3) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    FUNC_0 (VAR_2[VAR_4] >= 0 && VAR_2[VAR_4] <= VAR_0);
    FUNC_1 (VAR_1, VAR_2[VAR_4], 4);
  }
}
