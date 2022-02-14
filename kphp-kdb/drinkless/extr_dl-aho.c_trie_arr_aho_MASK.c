
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int suff; int en; int* edges; int is_end; } ;
typedef TYPE_1__ trie_arr_node ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2 (trie_arr_node *VAR_1) {

  size_t VAR_2[100000];
  int VAR_3 = 0, VAR_4 = 0;

  VAR_1->suff = 0;
  VAR_2[VAR_4++] = 0;

  while (VAR_3 < VAR_4) {
    int VAR_5 = VAR_2[VAR_3++];

    trie_arr_node *VAR_6 = FUNC_0 (VAR_1, VAR_5);

    int VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_6->en; VAR_7++) {
      int VAR_8 = VAR_6->edges[2 * VAR_7 + 1];
      trie_arr_node *VAR_9 = FUNC_0 (VAR_6, VAR_6->edges[2 * VAR_7]), *VAR_10 = VAR_6;
      VAR_2[VAR_4++] = VAR_6->edges[2 * VAR_7] + VAR_5;
      int VAR_11 = 0;
      do {
        VAR_11 += VAR_10->suff;
        VAR_10 = FUNC_0 (VAR_10, VAR_10->suff);
      } while (VAR_10->suff && !FUNC_1 (VAR_10, VAR_8));
      int VAR_12 = 0;
      if (VAR_10 != VAR_6) {
       VAR_12 = FUNC_1 (VAR_10, VAR_8);
      }
      VAR_9->suff = -VAR_6->edges[2 * VAR_7] + VAR_11 + VAR_12;
      VAR_9->is_end |= FUNC_0(VAR_9, VAR_9->suff)->is_end;
    }
  }

}
