
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ code; int is_end; struct TYPE_3__* v; struct TYPE_3__* h; } ;
typedef TYPE_1__ trie_node ;
typedef scalar_t__ CHAR ;



int FUNC_0 (trie_node *VAR_0, CHAR *VAR_1) {
  while (1) {
    while (VAR_0 && VAR_0->code != *VAR_1) {
      VAR_0 = VAR_0->h;
    }
    if (VAR_0 == ((void*)0)) {
      return 0;
    }
    VAR_1++;
    if (*VAR_1 == 0) {
      return VAR_0->is_end;
    }
    VAR_0 = VAR_0->v;
  }
}
