
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char code; struct TYPE_3__* h; struct TYPE_3__* v; scalar_t__ is_end; } ;
typedef TYPE_1__ trie_node ;


 int FUNC_0 (char*) ;

void FUNC_1 (trie_node *VAR_0) {
  static char VAR_1[100000];
  static int VAR_2 = 0;
  while (VAR_0) {
    VAR_1[VAR_2++] = VAR_0->code;
    if (VAR_0->is_end) {
      VAR_1[VAR_2] = 0;
      FUNC_0 (VAR_1);
    }
    FUNC_1 (VAR_0->v);
    VAR_2--;
    VAR_0 = VAR_0->h;
  }
}
