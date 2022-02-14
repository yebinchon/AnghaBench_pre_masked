
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * vec4_t ;
struct TYPE_8__ {scalar_t__ h; int w; scalar_t__ y; int x; } ;
typedef TYPE_3__ rectDef_t ;
struct TYPE_6__ {int * crosshairShader; } ;
struct TYPE_7__ {TYPE_1__ Assets; } ;
struct TYPE_9__ {size_t currentCrosshair; TYPE_2__ uiDC; } ;


 int FUNC_0 (int ,scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 TYPE_4__ VAR_0 ;

__attribute__((used)) static void FUNC_2(rectDef_t *VAR_1, float VAR_2, vec4_t VAR_3) {
 if (!VAR_0.currentCrosshair) {
  return;
 }
 FUNC_1( VAR_3 );
 FUNC_0( VAR_1->x, VAR_1->y - VAR_1->h, VAR_1->w, VAR_1->h, VAR_0.uiDC.Assets.crosshairShader[VAR_0.currentCrosshair]);
  FUNC_1( ((void*)0) );
}
