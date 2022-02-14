
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* q_prev; int * std_val; } ;
typedef TYPE_1__ event ;


 int VAR_0 ;
 int* FUNC_0 (int *,int ) ;
 int* FUNC_1 (int *,long long) ;
 int * VAR_1 ;
 int * VAR_2 ;
 scalar_t__* VAR_3 ;

void FUNC_2 (event *VAR_4, int VAR_5) {
  int VAR_6;
  for (VAR_6 = 1; VAR_6 < VAR_0; VAR_6 += 1 + VAR_3[VAR_6]) {
    if (VAR_3[VAR_6]) {
      int *VAR_7 = FUNC_1 (&VAR_2[VAR_6], *(long long *)&VAR_4->std_val[VAR_6]);
      VAR_4->q_prev[VAR_6] = *VAR_7;
      *VAR_7 = VAR_5;
    } else {
      int *VAR_8 = FUNC_0 (&VAR_1[VAR_6], VAR_4->std_val[VAR_6]);
      VAR_4->q_prev[VAR_6] = *VAR_8;
      *VAR_8 = VAR_5;
    }
  }
}
