
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {float x; float y; } ;
struct TYPE_7__ {scalar_t__ border; scalar_t__ borderSize; TYPE_2__ rect; } ;
struct TYPE_9__ {TYPE_1__ window; } ;
typedef TYPE_3__ menuDef_t ;
struct TYPE_10__ {TYPE_3__* parent; } ;
typedef TYPE_4__ itemDef_t ;


 int FUNC_0 (TYPE_4__*,float,float) ;

void FUNC_1(itemDef_t *VAR_0) {
  float VAR_1, VAR_2;
  menuDef_t *VAR_3;

  if (VAR_0 == ((void*)0) || VAR_0->parent == ((void*)0)) {
    return;
  }

  VAR_3 = VAR_0->parent;

  VAR_1 = VAR_3->window.rect.x;
  VAR_2 = VAR_3->window.rect.y;

  if (VAR_3->window.border != 0) {
    VAR_1 += VAR_3->window.borderSize;
    VAR_2 += VAR_3->window.borderSize;
  }

  FUNC_0(VAR_0, VAR_1, VAR_2);

}
