
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int en; char* edges; scalar_t__ is_end; } ;
typedef TYPE_1__ trie_arr_node ;


 TYPE_1__* FUNC_0 (TYPE_1__*,char) ;
 int FUNC_1 (char*) ;

void FUNC_2 (trie_arr_node *VAR_0) {
  static char VAR_1[100000];
  static int VAR_2 = 0;
  int VAR_3;
  if (VAR_0->is_end) {
    VAR_1[VAR_2] = 0;
    FUNC_1 (VAR_1);
  }

  for (VAR_3 = 0; VAR_3 < VAR_0->en; VAR_3++) {
    VAR_1[VAR_2++] = VAR_0->edges[VAR_3 * 2 + 1];

    FUNC_2 (FUNC_0(VAR_0, VAR_0->edges[2 * VAR_3]));
    VAR_2--;
  }
}
