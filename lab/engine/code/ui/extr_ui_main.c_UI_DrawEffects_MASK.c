
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_8__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_3__ rectDef_t ;
struct TYPE_6__ {int * fxPic; int fxBasePic; } ;
struct TYPE_7__ {TYPE_1__ Assets; } ;
struct TYPE_9__ {int effectsColor; TYPE_2__ uiDC; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int,int,int ) ;
 TYPE_4__ VAR_0 ;

__attribute__((used)) static void FUNC_1(rectDef_t *VAR_1, float VAR_2, vec4_t VAR_3) {
 FUNC_0( VAR_1->x, VAR_1->y - 14, 128, 8, VAR_0.uiDC.Assets.fxBasePic );
 FUNC_0( VAR_1->x + VAR_0.effectsColor * 16 + 8, VAR_1->y - 16, 16, 12, VAR_0.uiDC.Assets.fxPic[VAR_0.effectsColor] );
}
