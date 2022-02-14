
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ch; scalar_t__ deg; struct TYPE_5__* parent; int p_ch; scalar_t__ patterns_cnt; scalar_t__ used; scalar_t__ next; } ;
typedef TYPE_1__ trie_node_t ;
typedef int byte ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static trie_node_t *FUNC_1 (byte VAR_0, trie_node_t *VAR_1) {
  trie_node_t *VAR_2 = FUNC_0 (sizeof (trie_node_t));
  if (VAR_1 != 0) {
    VAR_1->deg++;
  }
  VAR_2->ch = 1;
  VAR_2->next = 0;
  VAR_2->used = 0;
  VAR_2->patterns_cnt = 0;
  VAR_2->p_ch = VAR_0;
  VAR_2->parent = VAR_1;
  VAR_2->deg = 0;
  return VAR_2;
}
