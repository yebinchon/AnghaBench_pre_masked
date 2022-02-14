
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_5__ {int flags; int rect; } ;
struct TYPE_6__ {scalar_t__ cvar; TYPE_1__ window; } ;
typedef TYPE_2__ itemDef_t ;
struct TYPE_7__ {int (* getCVarValue ) (scalar_t__) ;int (* setCVar ) (scalar_t__,int ) ;int cursory; int cursorx; } ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int) ;

qboolean FUNC_5(itemDef_t *VAR_7, int VAR_8) {

 if (VAR_7->cvar) {
  qboolean VAR_9 = VAR_5;
  if (VAR_8 == VAR_1 || VAR_8 == VAR_2 || VAR_8 == VAR_3) {
   if (FUNC_0(&VAR_7->window.rect, VAR_0->cursorx, VAR_0->cursory) && VAR_7->window.flags & VAR_4) {
    VAR_9 = VAR_6;
   }
  } else if (FUNC_1(VAR_8) != 0) {
   VAR_9 = VAR_6;
  }
  if (VAR_9) {
   VAR_0->setCVar(VAR_7->cvar, FUNC_4("%i", !VAR_0->getCVarValue(VAR_7->cvar)));
   return VAR_6;
  }
 }

  return VAR_5;

}
