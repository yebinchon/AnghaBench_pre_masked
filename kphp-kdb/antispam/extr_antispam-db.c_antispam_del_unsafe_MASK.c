
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ patterns_cnt; scalar_t__ deg; scalar_t__ ch; struct TYPE_8__* next; int p_ch; struct TYPE_8__* parent; } ;
typedef TYPE_1__ trie_node_t ;
struct TYPE_9__ {TYPE_1__* trie_node; } ;
typedef TYPE_2__ pattern_t ;
typedef scalar_t__* list_pattern_link_t ;
typedef int hash_t ;
typedef scalar_t__ byte ;


 int FUNC_0 (TYPE_2__) ;
 int FUNC_1 (int) ;
 scalar_t__* FUNC_2 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__*,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__* FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static inline void FUNC_8 (int VAR_2, pattern_t* VAR_3) {
  trie_node_t *VAR_4 = VAR_3->trie_node;
  --VAR_4->patterns_cnt;

  hash_t VAR_5 = FUNC_0 (*VAR_3);
  list_pattern_link_t VAR_6 = FUNC_6 (VAR_1, VAR_5);
  FUNC_1 (VAR_6 && FUNC_4 (VAR_6, VAR_3));
  if (*VAR_6 == 0) {
    FUNC_1 (FUNC_5 (VAR_1, VAR_5));
  }
  FUNC_1 (FUNC_3 (VAR_0, VAR_2));

  while (VAR_4->parent != 0 && VAR_4->deg == 0 && VAR_4->patterns_cnt == 0) {
    trie_node_t *VAR_7 = VAR_4->parent;
    *FUNC_2 (VAR_7, VAR_4->p_ch) = 0;
    if (--VAR_7->deg == 1) {
      trie_node_t *VAR_8, **VAR_9 = (trie_node_t **)VAR_7->next;
      byte VAR_10 = 0;
      while (!*VAR_9) {
        VAR_9++;
        VAR_10++;
      }
      VAR_8 = *VAR_9;
      FUNC_7 (VAR_7->next, sizeof (trie_node_t *) * 256);
      VAR_7->next = VAR_8, VAR_7->ch = VAR_10;
    }
    FUNC_7 (VAR_4, sizeof (trie_node_t));
    VAR_4 = VAR_7;
  }
}
