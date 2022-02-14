
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p_ch; struct TYPE_4__* parent; } ;
typedef TYPE_1__ trie_node_t ;
struct TYPE_5__ {int ip; int uahash; scalar_t__ flags; TYPE_1__* trie_node; } ;
typedef TYPE_2__ pattern_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int ,int) ;
 int FUNC_2 (char*,char*,int,int,int,unsigned short) ;

bool FUNC_3 (int VAR_4, char *VAR_5 ) {
  pattern_t *VAR_6 = FUNC_1 (VAR_3, VAR_4);
  if (VAR_6 == 0) {
    return VAR_0;
  }
  trie_node_t *VAR_7 = VAR_6->trie_node;

  int VAR_8 = 0;
  trie_node_t const *VAR_9 = VAR_7;
  for (; VAR_9->parent != 0; VAR_9 = VAR_9->parent) {
    ++VAR_8;
  }
  FUNC_0 (VAR_8 + 40 <= VAR_1);

  VAR_5 += FUNC_2 (VAR_5, "%d,%u,%u,%hu,", VAR_4, VAR_6->ip, VAR_6->uahash, (unsigned short)VAR_6->flags);

  VAR_5 += VAR_8;
  *VAR_5-- = 0;
  for (VAR_9 = VAR_7; VAR_9->parent != 0; VAR_9 = VAR_9->parent) {
    *VAR_5-- = VAR_9->p_ch;
  }
  return VAR_2;
}
