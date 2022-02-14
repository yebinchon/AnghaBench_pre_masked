
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ is_end; scalar_t__ suff; } ;
typedef TYPE_1__ trie_arr_node ;
typedef scalar_t__ CHAR ;


 TYPE_1__* FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;

int FUNC_2 (trie_arr_node *VAR_0, CHAR *VAR_1) {
  int VAR_2 = 0;
  while (*VAR_1) {
    while (VAR_0->suff && !FUNC_1 (VAR_0, *VAR_1)) {
      VAR_0 = FUNC_0 (VAR_0, VAR_0->suff);
    }
    VAR_0 = FUNC_0 (VAR_0, FUNC_1 (VAR_0, *VAR_1));
    VAR_1++;
    VAR_2++;
    if (VAR_0->is_end) {
      return VAR_2;
    }
  }
  return 0;
}
