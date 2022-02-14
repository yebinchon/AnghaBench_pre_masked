
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef double* vec4_t ;
struct TYPE_8__ {double* focusColor; double* disableColor; int fadeAmount; int fadeCycle; int fadeClamp; } ;
typedef TYPE_2__ menuDef_t ;
struct TYPE_7__ {int flags; double* foreColor; int nextTime; } ;
struct TYPE_9__ {scalar_t__ textStyle; int cvarFlags; scalar_t__* cvarTest; scalar_t__* enableCvar; TYPE_1__ window; scalar_t__ parent; } ;
typedef TYPE_3__ itemDef_t ;
struct TYPE_10__ {int realTime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int FUNC_0 (int*,double*,int ,int *,int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (double*,double*,double*,double) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (double**,double**,int) ;
 int VAR_7 ;
 double FUNC_4 (int) ;

void FUNC_5(itemDef_t *VAR_8, vec4_t *VAR_9) {
 vec4_t VAR_10;
 menuDef_t *VAR_11 = (menuDef_t*)VAR_8->parent;

 FUNC_0(&VAR_8->window.flags, &VAR_8->window.foreColor[3], VAR_11->fadeClamp, &VAR_8->window.nextTime, VAR_11->fadeCycle, VAR_7, VAR_11->fadeAmount);

 if (VAR_8->window.flags & VAR_6) {
  VAR_10[0] = 0.8 * VAR_11->focusColor[0];
  VAR_10[1] = 0.8 * VAR_11->focusColor[1];
  VAR_10[2] = 0.8 * VAR_11->focusColor[2];
  VAR_10[3] = 0.8 * VAR_11->focusColor[3];
  FUNC_2(VAR_11->focusColor,VAR_10,*VAR_9,0.5+0.5*FUNC_4(VAR_3->realTime / VAR_5));
 } else if (VAR_8->textStyle == VAR_4 && !((VAR_3->realTime/VAR_0) & 1)) {
  VAR_10[0] = 0.8 * VAR_8->window.foreColor[0];
  VAR_10[1] = 0.8 * VAR_8->window.foreColor[1];
  VAR_10[2] = 0.8 * VAR_8->window.foreColor[2];
  VAR_10[3] = 0.8 * VAR_8->window.foreColor[3];
  FUNC_2(VAR_8->window.foreColor,VAR_10,*VAR_9,0.5+0.5*FUNC_4(VAR_3->realTime / VAR_5));
 } else {
  FUNC_3(VAR_9, &VAR_8->window.foreColor, sizeof(vec4_t));

 }

 if (VAR_8->enableCvar && *VAR_8->enableCvar && VAR_8->cvarTest && *VAR_8->cvarTest) {
  if (VAR_8->cvarFlags & (VAR_2 | VAR_1) && !FUNC_1(VAR_8, VAR_2)) {
   FUNC_3(VAR_9, &VAR_11->disableColor, sizeof(vec4_t));
  }
 }
}
