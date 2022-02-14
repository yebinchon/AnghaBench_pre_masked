
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int code; int is_end; struct TYPE_4__* h; struct TYPE_4__* v; scalar_t__ cnt; } ;
typedef TYPE_1__ trie_node ;
struct TYPE_5__ {int* edges; int en; int is_end; } ;
typedef TYPE_2__ trie_arr_node ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int*,int,int,int ) ;

size_t FUNC_2 (trie_node *VAR_1, char *VAR_2, int VAR_3) {
  char *VAR_4 = VAR_2;

  size_t VAR_5 = sizeof (int) * 3;

  int VAR_6 = 0;
  trie_node *VAR_7 = VAR_1;

  trie_arr_node *VAR_8 = (trie_arr_node *)VAR_4;
  FUNC_0 (VAR_5 == (char *)&VAR_8->edges - (char *)VAR_8);

  while (VAR_7 != ((void*)0)) {
    VAR_6 += !!VAR_7->cnt;
    VAR_7 = VAR_7->h;
  }

  VAR_5 += sizeof (int) * 2 * VAR_6;
  VAR_2 += VAR_5;

  VAR_7 = VAR_1;
  int VAR_9 = 0;
  while (VAR_7 != ((void*)0)) {
    if (VAR_7->cnt) {
      VAR_8->edges[VAR_9 * 2 + 1] = VAR_7->code;
      VAR_8->edges[VAR_9 * 2] = VAR_2 - VAR_4;
      VAR_2 += FUNC_2 (VAR_7->v, VAR_2, VAR_7->is_end);
      VAR_9++;
    }

    VAR_7 = VAR_7->h;
  }

  FUNC_1 (VAR_8->edges, VAR_6, sizeof (int) * 2, VAR_0);

  VAR_8->en = VAR_6;
  VAR_8->is_end = VAR_3;

  return VAR_2 - VAR_4;
}
