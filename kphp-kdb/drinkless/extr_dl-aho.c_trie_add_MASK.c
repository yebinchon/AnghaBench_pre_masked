
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ code; int is_end; struct TYPE_5__* v; int cnt; struct TYPE_5__* h; } ;
typedef TYPE_1__ trie_node ;
typedef scalar_t__ CHAR ;


 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__*) ;

void FUNC_2 (trie_node **VAR_0, CHAR *VAR_1) {
  if (FUNC_1 (*VAR_0, VAR_1)) {
    return;
  }

  while (1) {

    while (*VAR_0 && (*VAR_0)->code != *VAR_1) {
      VAR_0 = &(*VAR_0)->h;
    }
    if (*VAR_0 == ((void*)0)) {
      *VAR_0 = FUNC_0();
      (*VAR_0)->code = *VAR_1;
    }
    VAR_1++;
    (*VAR_0)->cnt++;
    if (*VAR_1 == 0) {
      (*VAR_0)->is_end = 1;
      break;
    }
    VAR_0 = &(*VAR_0)->v;
  }
}
