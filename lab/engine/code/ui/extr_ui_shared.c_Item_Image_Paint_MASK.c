
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ h; scalar_t__ w; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_7__ {TYPE_1__ rect; } ;
struct TYPE_8__ {int asset; TYPE_2__ window; } ;
typedef TYPE_3__ itemDef_t ;
struct TYPE_9__ {int (* drawHandlePic ) (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;} ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;

void FUNC_1(itemDef_t *VAR_1) {
 if (VAR_1 == ((void*)0)) {
  return;
 }
 VAR_0->drawHandlePic(VAR_1->window.rect.x+1, VAR_1->window.rect.y+1, VAR_1->window.rect.w-2, VAR_1->window.rect.h-2, VAR_1->asset);
}
