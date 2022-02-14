
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int itemCount; TYPE_2__** items; } ;
typedef TYPE_3__ menuDef_t ;
struct TYPE_5__ {scalar_t__ group; scalar_t__ name; } ;
struct TYPE_6__ {TYPE_1__ window; } ;


 scalar_t__ FUNC_0 (scalar_t__,char const*) ;

int FUNC_1(menuDef_t *VAR_0, const char *VAR_1) {
  int VAR_2;
  int VAR_3 = 0;
  for (VAR_2 = 0; VAR_2 < VAR_0->itemCount; VAR_2++) {
    if (FUNC_0(VAR_0->items[VAR_2]->window.name, VAR_1) == 0 || (VAR_0->items[VAR_2]->window.group && FUNC_0(VAR_0->items[VAR_2]->window.group, VAR_1) == 0)) {
      VAR_3++;
    }
  }
  return VAR_3;
}
