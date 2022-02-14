
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ code; struct TYPE_4__* v; scalar_t__ is_end; int cnt; struct TYPE_4__* h; } ;
typedef TYPE_1__ trie_node ;
typedef scalar_t__ CHAR ;


 int FUNC_0 (TYPE_1__*,scalar_t__*) ;

void FUNC_1 (trie_node *VAR_0, CHAR *VAR_1) {
  if (!FUNC_0 (VAR_0, VAR_1)) {
    return;
  }

  while (1) {
    while (VAR_0 && VAR_0->code != *VAR_1) {
      VAR_0 = VAR_0->h;
    }
    VAR_1++;
    VAR_0->cnt--;
    if (*VAR_1 == 0) {
      VAR_0->is_end = 0;
      break;
    }

    VAR_0 = VAR_0->v;
  }
}
