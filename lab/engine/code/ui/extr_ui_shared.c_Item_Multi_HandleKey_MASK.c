
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_9__ {float* cvarValue; int * cvarStr; scalar_t__ strDef; } ;
typedef TYPE_2__ multiDef_t ;
struct TYPE_8__ {int flags; int rect; } ;
struct TYPE_10__ {scalar_t__ cvar; TYPE_1__ window; scalar_t__ typeData; } ;
typedef TYPE_3__ itemDef_t ;
struct TYPE_11__ {int (* setCVar ) (scalar_t__,int ) ;int cursory; int cursorx; } ;


 TYPE_7__* VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (char*,float) ;

qboolean FUNC_8(itemDef_t *VAR_7, int VAR_8) {
 multiDef_t *VAR_9 = (multiDef_t*)VAR_7->typeData;
 if (VAR_9) {
  if (VAR_7->cvar) {
   int VAR_10 = 0;
   if (VAR_8 == VAR_1 || VAR_8 == VAR_2 || VAR_8 == VAR_3) {
    if (FUNC_2(&VAR_7->window.rect, VAR_0->cursorx, VAR_0->cursory) && VAR_7->window.flags & VAR_4) {
     VAR_10 = (VAR_8 == VAR_2) ? -1 : 1;
    }
   } else {
    VAR_10 = FUNC_3(VAR_8);
   }
   if (VAR_10 != 0) {
    int VAR_11 = FUNC_1(VAR_7) + VAR_10;
    int VAR_12 = FUNC_0(VAR_7);
    if ( VAR_11 < 0 ) {
     VAR_11 = VAR_12-1;
    } else if ( VAR_11 >= VAR_12 ) {
     VAR_11 = 0;
    }
    if (VAR_9->strDef) {
     VAR_0->setCVar(VAR_7->cvar, VAR_9->cvarStr[VAR_11]);
    } else {
     float VAR_13 = VAR_9->cvarValue[VAR_11];
     if (((float)((int) VAR_13)) == VAR_13) {
      VAR_0->setCVar(VAR_7->cvar, FUNC_7("%i", (int) VAR_13 ));
     }
     else {
      VAR_0->setCVar(VAR_7->cvar, FUNC_7("%f", VAR_13 ));
     }
    }
    return VAR_6;
   }
  }
 }
  return VAR_5;
}
