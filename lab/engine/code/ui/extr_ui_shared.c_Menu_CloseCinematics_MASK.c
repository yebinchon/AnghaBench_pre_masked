
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ ownerDraw; } ;
struct TYPE_7__ {int itemCount; TYPE_1__** items; TYPE_3__ window; } ;
typedef TYPE_2__ menuDef_t ;
struct TYPE_9__ {int (* stopCinematic ) (scalar_t__) ;} ;
struct TYPE_6__ {scalar_t__ type; TYPE_3__ window; } ;


 TYPE_5__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(menuDef_t *VAR_2) {
 if (VAR_2) {
  int VAR_3;
  FUNC_0(&VAR_2->window);
   for (VAR_3 = 0; VAR_3 < VAR_2->itemCount; VAR_3++) {
    FUNC_0(&VAR_2->items[VAR_3]->window);
   if (VAR_2->items[VAR_3]->type == VAR_1) {
    VAR_0->stopCinematic(0-VAR_2->items[VAR_3]->window.ownerDraw);
   }
   }
 }
}
