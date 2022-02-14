
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* cur1; } ;
typedef TYPE_2__ iheap_en_t ;
struct TYPE_5__ {long long item_id; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1 (iheap_en_t *VAR_0, long long VAR_1) {
  while (VAR_0->cur1->item_id < VAR_1) {
    if (!FUNC_0 (VAR_0)) {
      break;
    }
  }
}
