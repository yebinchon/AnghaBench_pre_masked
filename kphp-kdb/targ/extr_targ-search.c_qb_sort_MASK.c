
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int max_res; int complexity; } ;
typedef TYPE_1__ query_t ;



void FUNC_0 (query_t **VAR_0, int VAR_1) {
  if (VAR_1 <= 0) { return; }
  query_t *VAR_2;
  int VAR_3 = 0, VAR_4 = VAR_1;
  unsigned VAR_5 = VAR_0[VAR_1 >> 1]->max_res;
  int VAR_6 = VAR_0[VAR_1 >> 1]->complexity;
  do {
    while ((unsigned) VAR_0[VAR_3]->max_res < VAR_5 || ((unsigned) VAR_0[VAR_3]->max_res == VAR_5 && VAR_0[VAR_3]->complexity < VAR_6)) {
      VAR_3++;
    }
    while ((unsigned) VAR_0[VAR_4]->max_res > VAR_5 || ((unsigned) VAR_0[VAR_4]->max_res == VAR_5 && VAR_0[VAR_4]->complexity > VAR_6)) {
      VAR_4--;
    }
    if (VAR_3 <= VAR_4) {
      VAR_2 = VAR_0[VAR_3]; VAR_0[VAR_3++] = VAR_0[VAR_4]; VAR_0[VAR_4--] = VAR_2;
    }
  } while (VAR_3 <= VAR_4);
  FUNC_0 (VAR_0, VAR_4);
  FUNC_0 (VAR_0 + VAR_3, VAR_1 - VAR_3);
}
