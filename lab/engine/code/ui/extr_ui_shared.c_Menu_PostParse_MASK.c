
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int w; int h; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_7__ {TYPE_1__ rect; } ;
struct TYPE_8__ {TYPE_2__ window; scalar_t__ fullScreen; } ;
typedef TYPE_3__ menuDef_t ;


 int FUNC_0 (TYPE_3__*) ;

void FUNC_1(menuDef_t *VAR_0) {
 if (VAR_0 == ((void*)0)) {
  return;
 }
 if (VAR_0->fullScreen) {
  VAR_0->window.rect.x = 0;
  VAR_0->window.rect.y = 0;
  VAR_0->window.rect.w = 640;
  VAR_0->window.rect.h = 480;
 }
 FUNC_0(VAR_0);
}
