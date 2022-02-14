
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {float x; float y; } ;
struct TYPE_5__ {scalar_t__ border; scalar_t__ borderSize; TYPE_2__ rect; } ;
struct TYPE_7__ {int itemCount; int * items; TYPE_1__ window; } ;
typedef TYPE_3__ menuDef_t ;


 int FUNC_0 (int ,float,float) ;

void FUNC_1(menuDef_t *VAR_0) {
  int VAR_1;
  float VAR_2, VAR_3;

  if (VAR_0 == ((void*)0)) {
    return;
  }

  VAR_2 = VAR_0->window.rect.x;
  VAR_3 = VAR_0->window.rect.y;
  if (VAR_0->window.border != 0) {
    VAR_2 += VAR_0->window.borderSize;
    VAR_3 += VAR_0->window.borderSize;
  }

  for (VAR_1 = 0; VAR_1 < VAR_0->itemCount; VAR_1++) {
    FUNC_0(VAR_0->items[VAR_1], VAR_2, VAR_3);
  }
}
