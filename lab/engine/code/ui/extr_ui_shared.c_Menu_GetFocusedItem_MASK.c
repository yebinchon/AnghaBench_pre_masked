
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int itemCount; TYPE_3__** items; } ;
typedef TYPE_2__ menuDef_t ;
struct TYPE_6__ {int flags; } ;
struct TYPE_8__ {TYPE_1__ window; } ;
typedef TYPE_3__ itemDef_t ;


 int VAR_0 ;

itemDef_t *FUNC_0(menuDef_t *VAR_1) {
  int VAR_2;
  if (VAR_1) {
    for (VAR_2 = 0; VAR_2 < VAR_1->itemCount; VAR_2++) {
      if (VAR_1->items[VAR_2]->window.flags & VAR_0) {
        return VAR_1->items[VAR_2];
      }
    }
  }
  return ((void*)0);
}
