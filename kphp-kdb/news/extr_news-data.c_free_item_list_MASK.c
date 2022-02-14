
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tot_items; TYPE_2__* last; TYPE_2__* first; } ;
typedef TYPE_1__ user_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ item_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2 (user_t *VAR_1) {
  FUNC_0 (VAR_0);
  item_t *VAR_2 = VAR_1->first, *VAR_3;
  while (VAR_2 != (item_t *) VAR_1) {
    VAR_3 = VAR_2->next;
    VAR_1->tot_items--;
    FUNC_0 (VAR_1->tot_items >= 0);
    FUNC_1 (VAR_2);
    VAR_2 = VAR_3;
  }
  FUNC_0 (!VAR_1->tot_items);
  VAR_1->first = VAR_1->last = (item_t *) VAR_1;
}
