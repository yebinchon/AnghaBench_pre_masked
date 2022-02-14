
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* head; int* value; int* prev; } ;
typedef TYPE_1__ buckets_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (buckets_t *VAR_0, int *VAR_1, int VAR_2, int *VAR_3, int VAR_4) {
  int VAR_5, VAR_6, VAR_7;
  for (VAR_5 = -1; VAR_5 < VAR_2; VAR_5++) {
    VAR_0->head[VAR_5] = -1;
  }
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
    VAR_6 = VAR_1[VAR_7] + VAR_4;
    VAR_5 = (VAR_6 < VAR_2) ? VAR_3[VAR_6] : -1;
    VAR_0->value[VAR_7] = VAR_1[VAR_7];
    VAR_0->prev[VAR_7] = VAR_0->head[VAR_5];
    VAR_0->head[VAR_5] = VAR_7;
  }
  VAR_7 = VAR_2 - 1;
  for (VAR_5 = VAR_2 - 1; VAR_5 >= -1; VAR_5--) {
    for (VAR_6 = VAR_0->head[VAR_5]; VAR_6 >= 0; VAR_6 = VAR_0->prev[VAR_6]) {
      VAR_1[VAR_7] = VAR_0->value[VAR_6];
      VAR_7--;
    }
  }
  FUNC_0 (VAR_7 == -1);
}
