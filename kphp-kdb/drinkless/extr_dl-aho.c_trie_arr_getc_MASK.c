
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int en; scalar_t__* edges; } ;
typedef TYPE_1__ trie_arr_node ;
typedef scalar_t__ CHAR ;



int FUNC_0 (trie_arr_node *VAR_0, CHAR VAR_1) {
  int VAR_2 = VAR_0->en;
  if (VAR_2 > 5) {
    int VAR_3 = 0, VAR_4 = VAR_2;

    while (VAR_3 + 1 < VAR_4) {
      int VAR_5 = (VAR_3 + VAR_4) / 2;
      if (VAR_0->edges[VAR_5 * 2 + 1] <= VAR_1) {
        VAR_3 = VAR_5;
      } else {
        VAR_4 = VAR_5;
      }
    }

    return VAR_0->edges[VAR_3 * 2 + 1] == VAR_1 ? VAR_0->edges[VAR_3 * 2] : 0;
  }

  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
    if (VAR_0->edges[2 * VAR_6 + 1] == VAR_1) {
      return VAR_0->edges[2 * VAR_6];
    }
  }
  return 0;
}
