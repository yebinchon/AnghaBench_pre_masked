
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long long item_id; int cur; } ;
typedef TYPE_1__ iheap_en_t ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (iheap_en_t *VAR_3) {
  int VAR_4, VAR_5;
  long long VAR_6 = VAR_3->item_id;
  FUNC_0 (VAR_1 < VAR_2);
  if (!VAR_3->cur) { return; }
  VAR_4 = ++VAR_1;
  while (VAR_4 > 1) {
    VAR_5 = (VAR_4 >> 1);
    if (VAR_0[VAR_5]->item_id <= VAR_6) {
      break;
    }
    VAR_0[VAR_4] = VAR_0[VAR_5];
    VAR_4 = VAR_5;
  }
  VAR_0[VAR_4] = VAR_3;
}
