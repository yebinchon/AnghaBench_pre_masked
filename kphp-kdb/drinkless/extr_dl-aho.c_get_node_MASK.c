
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cnt; scalar_t__ code; scalar_t__ is_end; int * h; struct TYPE_5__* v; } ;
typedef TYPE_1__ trie_node ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;

trie_node *FUNC_2 (void) {
  if (VAR_1 == 0) {
    int VAR_2 = 10000;
    VAR_0 = FUNC_1 (sizeof (trie_node) * VAR_2);
    FUNC_0 (VAR_0 != ((void*)0));
    VAR_1 += VAR_2;

    int VAR_3;
    for (VAR_3 = 0; VAR_3 + 1 < VAR_2; VAR_3++) {
      VAR_0 [VAR_3].v = &VAR_0 [VAR_3 + 1];
    }
    VAR_0 [VAR_2 - 1].v = ((void*)0);
  }
  VAR_1--;

  trie_node *VAR_4 = VAR_0;
  VAR_0 = VAR_0->v;

  VAR_4->v = ((void*)0);
  VAR_4->h = ((void*)0);
  VAR_4->is_end = 0;
  VAR_4->code = 0;
  VAR_4->cnt = 0;

  return VAR_4;
}
