
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int words; TYPE_2__** E; } ;
typedef TYPE_1__ searchy_iheap_phrase_t ;
struct TYPE_7__ {long long item_id; } ;
typedef TYPE_2__ iheap_en_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_2__*,long long) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline int FUNC_2 (long long VAR_1, int VAR_2, int VAR_3) {
  int VAR_4;
  for (VAR_4 = VAR_2; VAR_4 < VAR_3; VAR_4++) {
    int VAR_5;
    searchy_iheap_phrase_t *VAR_6 = &VAR_0[VAR_4];
    for (VAR_5 = 0; VAR_5 < VAR_6->words; VAR_5++) {
      iheap_en_t *VAR_7 = VAR_6->E[VAR_5];
      if (VAR_7->item_id < VAR_1) {
        FUNC_0 (VAR_7, VAR_1);
      }
      if (VAR_7->item_id > VAR_1) {
        goto next_phrase;
      }
    }
    if (VAR_6->words < 2 || FUNC_1 (VAR_6) <= 0) {
      return 1;
    }
    next_phrase:;
  }
  return 0;
}
