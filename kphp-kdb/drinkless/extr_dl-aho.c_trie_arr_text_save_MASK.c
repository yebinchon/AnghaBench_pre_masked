
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int en; char* edges; scalar_t__ is_end; } ;
typedef TYPE_1__ trie_arr_node ;


 TYPE_1__* FUNC_0 (TYPE_1__*,char) ;

void FUNC_1 (trie_arr_node *VAR_0, char *VAR_1, int *VAR_2) {
  static char VAR_3[100000];
  static int VAR_4 = 0;
  int VAR_5;
  if (VAR_0->is_end) {
    VAR_3[VAR_4] = 0;

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
      VAR_1[(*VAR_2)++] = VAR_3[VAR_5];
    }
    VAR_1[(*VAR_2)++] = '\t';
  }

  for (VAR_5 = 0; VAR_5 < VAR_0->en; VAR_5++) {
    VAR_3[VAR_4++] = VAR_0->edges[VAR_5 * 2 + 1];

    FUNC_1 (FUNC_0(VAR_0, VAR_0->edges[2 * VAR_5]), VAR_1, VAR_2);
    VAR_4--;
  }
}
