
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ item_id; } ;
typedef TYPE_2__ item_t ;
struct TYPE_7__ {scalar_t__ item_id; int cur_y; size_t sp; int tag_word; int cur_y1; TYPE_2__* cur; TYPE_1__** TS; TYPE_2__* cur1; TYPE_2__* cur0; } ;
typedef TYPE_3__ iheap_en_t ;
struct TYPE_5__ {int y; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2 (iheap_en_t *VAR_1) {
  item_t *VAR_2 = VAR_1->cur0, *VAR_3 = VAR_1->cur1;
  if (FUNC_1(!VAR_2 && !VAR_3)) {
    VAR_1->item_id = VAR_0;
    VAR_1->cur = 0;
    VAR_1->cur_y = 0;
    return 0;
  }
  if (FUNC_1(!VAR_3)) {
    VAR_1->cur = VAR_2;
    FUNC_0 (VAR_1->sp >= 0);
    VAR_1->cur_y = VAR_1->TS[VAR_1->sp]->y | VAR_1->tag_word;
    VAR_1->item_id = VAR_2->item_id;
  } else if (!VAR_2) {
    VAR_1->cur = VAR_3;
    VAR_1->cur_y = VAR_1->cur_y1 | VAR_1->tag_word;
    VAR_1->item_id = VAR_3->item_id;
  } else if (FUNC_1(VAR_2->item_id < VAR_3->item_id)) {
    VAR_1->cur = VAR_2;
    VAR_1->cur_y = VAR_1->TS[VAR_1->sp]->y | VAR_1->tag_word;
    VAR_1->item_id = VAR_2->item_id;
  } else {
    VAR_1->cur = VAR_3;
    VAR_1->cur_y = VAR_1->cur_y1 | VAR_1->tag_word;
    VAR_1->item_id = VAR_3->item_id;
  }
  return 1;
}
