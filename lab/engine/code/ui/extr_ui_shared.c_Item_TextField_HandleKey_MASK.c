
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_8__ {int cursorPos; scalar_t__ type; int parent; scalar_t__ cvar; scalar_t__ typeData; } ;
typedef TYPE_1__ itemDef_t ;
struct TYPE_9__ {int maxChars; int paintOffset; int maxPaintChars; } ;
typedef TYPE_2__ editFieldDef_t ;
typedef int buff ;
struct TYPE_10__ {int (* getOverstrikeMode ) () ;int (* setOverstrikeMode ) (int) ;int (* setCVar ) (scalar_t__,char*) ;int (* getCVarString ) (scalar_t__,char*,int) ;} ;


 TYPE_7__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 TYPE_1__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 TYPE_1__* VAR_25 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,char*,int) ;
 int FUNC_6 (scalar_t__,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (scalar_t__,char*) ;
 int FUNC_9 (scalar_t__,char*) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;

qboolean FUNC_12(itemDef_t *VAR_28, int VAR_29) {
 char VAR_30[1024];
 int VAR_31;
 itemDef_t *VAR_32 = ((void*)0);
 editFieldDef_t *VAR_33 = (editFieldDef_t*)VAR_28->typeData;

 if (VAR_28->cvar) {

  FUNC_3(VAR_30, 0, sizeof(VAR_30));
  VAR_0->getCVarString(VAR_28->cvar, VAR_30, sizeof(VAR_30));
  VAR_31 = FUNC_4(VAR_30);
  if (VAR_33->maxChars && VAR_31 > VAR_33->maxChars) {
   VAR_31 = VAR_33->maxChars;
  }
  if ( VAR_29 & VAR_3 ) {
   VAR_29 &= ~VAR_3;


   if (VAR_29 == 'h' - 'a' + 1 ) {
    if ( VAR_28->cursorPos > 0 ) {
     FUNC_2( &VAR_30[VAR_28->cursorPos - 1], &VAR_30[VAR_28->cursorPos], VAR_31 + 1 - VAR_28->cursorPos);
     VAR_28->cursorPos--;
     if (VAR_28->cursorPos < VAR_33->paintOffset) {
      VAR_33->paintOffset--;
     }
    }
    VAR_0->setCVar(VAR_28->cvar, VAR_30);
       return VAR_27;
   }





   if ( VAR_29 < 32 || !VAR_28->cvar) {
       return VAR_27;
      }

   if (VAR_28->type == VAR_2) {
    if (VAR_29 < '0' || VAR_29 > '9') {
     return VAR_26;
    }
   }

   if (!VAR_0->getOverstrikeMode()) {
    if (( VAR_31 == VAR_24 - 1 ) || (VAR_33->maxChars && VAR_31 >= VAR_33->maxChars)) {
     return VAR_27;
    }
    FUNC_2( &VAR_30[VAR_28->cursorPos + 1], &VAR_30[VAR_28->cursorPos], VAR_31 + 1 - VAR_28->cursorPos );
   } else {
    if (VAR_33->maxChars && VAR_28->cursorPos >= VAR_33->maxChars) {
     return VAR_27;
    }
   }

   VAR_30[VAR_28->cursorPos] = VAR_29;

   VAR_0->setCVar(VAR_28->cvar, VAR_30);

   if (VAR_28->cursorPos < VAR_31 + 1) {
    VAR_28->cursorPos++;
    if (VAR_33->maxPaintChars && VAR_28->cursorPos > VAR_33->maxPaintChars) {
     VAR_33->paintOffset++;
    }
   }

  } else {

   if ( VAR_29 == VAR_4 || VAR_29 == VAR_11 ) {
    if ( VAR_28->cursorPos < VAR_31 ) {
     FUNC_2( VAR_30 + VAR_28->cursorPos, VAR_30 + VAR_28->cursorPos + 1, VAR_31 - VAR_28->cursorPos);
     VAR_0->setCVar(VAR_28->cvar, VAR_30);
    }
    return VAR_27;
   }

   if ( VAR_29 == VAR_21 || VAR_29 == VAR_18 )
   {
    if (VAR_33->maxPaintChars && VAR_28->cursorPos >= VAR_33->maxPaintChars && VAR_28->cursorPos < VAR_31) {
     VAR_28->cursorPos++;
     VAR_33->paintOffset++;
     return VAR_27;
    }
    if (VAR_28->cursorPos < VAR_31) {
     VAR_28->cursorPos++;
    }
    return VAR_27;
   }

   if ( VAR_29 == VAR_20 || VAR_29 == VAR_17 )
   {
    if ( VAR_28->cursorPos > 0 ) {
     VAR_28->cursorPos--;
    }
    if (VAR_28->cursorPos < VAR_33->paintOffset) {
     VAR_33->paintOffset--;
    }
    return VAR_27;
   }

   if ( VAR_29 == VAR_9 || VAR_29 == VAR_15) {
    VAR_28->cursorPos = 0;
    VAR_33->paintOffset = 0;
    return VAR_27;
   }

   if ( VAR_29 == VAR_6 || VAR_29 == VAR_13) {
    VAR_28->cursorPos = VAR_31;
    if(VAR_28->cursorPos > VAR_33->maxPaintChars) {
     VAR_33->paintOffset = VAR_31 - VAR_33->maxPaintChars;
    }
    return VAR_27;
   }

   if ( VAR_29 == VAR_10 || VAR_29 == VAR_16 ) {
    VAR_0->setOverstrikeMode(!VAR_0->getOverstrikeMode());
    return VAR_27;
   }
  }

  if (VAR_29 == VAR_22 || VAR_29 == VAR_5 || VAR_29 == VAR_12) {
   VAR_32 = FUNC_0(VAR_28->parent);
   if (VAR_32 && (VAR_32->type == VAR_1 || VAR_32->type == VAR_2)) {
    VAR_25 = VAR_32;
   }
  }

  if (VAR_29 == VAR_23 || VAR_29 == VAR_19) {
   VAR_32 = FUNC_1(VAR_28->parent);
   if (VAR_32 && (VAR_32->type == VAR_1 || VAR_32->type == VAR_2)) {
    VAR_25 = VAR_32;
   }
  }

  if ( VAR_29 == VAR_7 || VAR_29 == VAR_14 || VAR_29 == VAR_8) {
   return VAR_26;
  }

  return VAR_27;
 }
 return VAR_26;

}
