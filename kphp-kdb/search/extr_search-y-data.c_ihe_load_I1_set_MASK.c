
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ item_id; } ;
typedef TYPE_2__ item_t ;
struct TYPE_7__ {scalar_t__ item_id; size_t sp; TYPE_1__** TS; int positions; TYPE_2__* cur; int positions1; TYPE_2__* cur1; TYPE_2__* cur0; } ;
typedef TYPE_3__ iheap_en_t ;
struct TYPE_5__ {int positions; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2 (iheap_en_t *VAR_0) {
  item_t *VAR_1 = VAR_0->cur0, *VAR_2 = VAR_0->cur1;
  if (FUNC_1 (VAR_1 == ((void*)0) || VAR_1->item_id > VAR_2->item_id)) {
    VAR_0->item_id = (VAR_0->cur = VAR_2)->item_id;
    VAR_0->positions = VAR_0->positions1;
    return 1;
  }
  VAR_0->item_id = (VAR_0->cur = VAR_1)->item_id;
  FUNC_0 (VAR_0->sp >= 0);
  VAR_0->positions = VAR_0->TS[VAR_0->sp]->positions;
  return 1;
}
