
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int itemCount; TYPE_3__** items; } ;
typedef TYPE_2__ menuDef_t ;
struct TYPE_6__ {int rect; } ;
struct TYPE_8__ {TYPE_1__ window; } ;
typedef TYPE_3__ itemDef_t ;


 scalar_t__ FUNC_0 (int *,float,float) ;

itemDef_t *FUNC_1(menuDef_t *VAR_0, float VAR_1, float VAR_2) {
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_0->itemCount; VAR_3++) {
    if (FUNC_0(&VAR_0->items[VAR_3]->window.rect, VAR_1, VAR_2)) {
      return VAR_0->items[VAR_3];
    }
  }
  return ((void*)0);
}
