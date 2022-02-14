
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef double* vec4_t ;
struct TYPE_10__ {double* focusColor; } ;
typedef TYPE_3__ menuDef_t ;
struct TYPE_9__ {int y; scalar_t__ x; scalar_t__ w; } ;
struct TYPE_8__ {int flags; int foreColor; } ;
struct TYPE_11__ {int textStyle; int textscale; TYPE_2__ textRect; scalar_t__ text; TYPE_1__ window; scalar_t__ cvar; scalar_t__ parent; } ;
typedef TYPE_4__ itemDef_t ;
struct TYPE_12__ {float (* getCVarValue ) (scalar_t__) ;int realTime; int (* drawText ) (scalar_t__,int ,int ,double*,char*,int ,int ,int ) ;} ;


 TYPE_7__* VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (double*,double*,double*,double) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (double**,int *,int) ;
 double FUNC_3 (int) ;
 float FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int ,int ,double*,char*,int ,int ,int ) ;
 int FUNC_6 (scalar_t__,int ,int ,double*,char*,int ,int ,int ) ;

void FUNC_7(itemDef_t *VAR_3) {
 vec4_t VAR_4, VAR_5;
 float VAR_6;
 menuDef_t *VAR_7 = (menuDef_t*)VAR_3->parent;

 VAR_6 = (VAR_3->cvar) ? VAR_0->getCVarValue(VAR_3->cvar) : 0;

 if (VAR_3->window.flags & VAR_2) {
  VAR_5[0] = 0.8 * VAR_7->focusColor[0];
  VAR_5[1] = 0.8 * VAR_7->focusColor[1];
  VAR_5[2] = 0.8 * VAR_7->focusColor[2];
  VAR_5[3] = 0.8 * VAR_7->focusColor[3];
  FUNC_1(VAR_7->focusColor,VAR_5,VAR_4,0.5+0.5*FUNC_3(VAR_0->realTime / VAR_1));
 } else {
  FUNC_2(&VAR_4, &VAR_3->window.foreColor, sizeof(vec4_t));
 }

 if (VAR_3->text) {
  FUNC_0(VAR_3);
  VAR_0->drawText(VAR_3->textRect.x + VAR_3->textRect.w + 8, VAR_3->textRect.y, VAR_3->textscale, VAR_4, (VAR_6 != 0) ? "Yes" : "No", 0, 0, VAR_3->textStyle);
 } else {
  VAR_0->drawText(VAR_3->textRect.x, VAR_3->textRect.y, VAR_3->textscale, VAR_4, (VAR_6 != 0) ? "Yes" : "No", 0, 0, VAR_3->textStyle);
 }
}
