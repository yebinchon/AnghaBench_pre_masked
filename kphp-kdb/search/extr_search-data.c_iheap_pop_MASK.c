
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ item_id; int cur; } ;
typedef TYPE_1__ iheap_en_t ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0 (void) {
  int VAR_2, VAR_3;
  iheap_en_t *VAR_4;

  if (!VAR_1) { return; }
  VAR_4 = VAR_0[1];
  if (!VAR_4->cur) {
    VAR_4 = VAR_0[VAR_1--];
    if (!VAR_1) { return; }
  }

  VAR_2 = 1;
  while (1) {
    VAR_3 = VAR_2*2;
    if (VAR_3 > VAR_1) { break; }
    if (VAR_3 < VAR_1 && VAR_0[VAR_3+1]->item_id < VAR_0[VAR_3]->item_id) { VAR_3++; }
    if (VAR_4->item_id <= VAR_0[VAR_3]->item_id) { break; }
    VAR_0[VAR_2] = VAR_0[VAR_3];
    VAR_2 = VAR_3;
  }
  VAR_0[VAR_2] = VAR_4;
}
