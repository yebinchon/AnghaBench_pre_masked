
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; scalar_t__ owner; scalar_t__ place; struct TYPE_8__* pnext; } ;
typedef TYPE_1__ userplace_t ;
struct TYPE_9__ {scalar_t__ type; scalar_t__ owner; scalar_t__ place; int allocated_items; int total_items; scalar_t__ first; } ;
typedef TYPE_2__ notify_place_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3 (notify_place_t *VAR_1) {
  FUNC_0 (VAR_0);
  userplace_t *VAR_2 = (userplace_t *) VAR_1->first, *VAR_3;
  while (VAR_2 != (userplace_t *) VAR_1) {
    VAR_3 = VAR_2->pnext;
    FUNC_0 (VAR_2->type == VAR_1->type && VAR_2->owner == VAR_1->owner && VAR_2->place == VAR_1->place);
    FUNC_2 (VAR_2, 0, VAR_1);
    FUNC_1 (VAR_2, 0, VAR_1);
    VAR_2 = VAR_3;
  }
  FUNC_0 (!VAR_1->total_items);
  FUNC_0 (!VAR_1->allocated_items);
}
