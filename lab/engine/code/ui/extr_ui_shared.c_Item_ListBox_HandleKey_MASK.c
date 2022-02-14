
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_10__ {int elementWidth; int cursorPos; int startPos; int elementHeight; int notselectable; scalar_t__ doubleClick; } ;
typedef TYPE_2__ listBoxDef_t ;
struct TYPE_12__ {int w; int h; } ;
struct TYPE_9__ {int flags; TYPE_4__ rect; } ;
struct TYPE_11__ {int cursorPos; int special; TYPE_1__ window; scalar_t__ typeData; } ;
typedef TYPE_3__ itemDef_t ;
struct TYPE_13__ {int (* feederCount ) (int ) ;scalar_t__ realTime; int (* feederSelection ) (int ,int) ;int cursory; int cursorx; } ;


 TYPE_8__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 int VAR_2 ;
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
 scalar_t__ FUNC_2 (TYPE_4__*,int ,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;

qboolean FUNC_11(itemDef_t *VAR_32, int VAR_33, qboolean VAR_34, qboolean VAR_35) {
 listBoxDef_t *VAR_36 = (listBoxDef_t*)VAR_32->typeData;
 int VAR_37 = VAR_0->feederCount(VAR_32->special);
 int VAR_38, VAR_39;

 if (VAR_35 || (FUNC_2(&VAR_32->window.rect, VAR_0->cursorx, VAR_0->cursory) && VAR_32->window.flags & VAR_22)) {
  VAR_38 = FUNC_0(VAR_32);
  if (VAR_32->window.flags & VAR_23) {
   VAR_39 = (VAR_32->window.rect.w / VAR_36->elementWidth);
   if ( VAR_33 == VAR_13 || VAR_33 == VAR_8 )
   {
    if (!VAR_36->notselectable) {
     VAR_36->cursorPos--;
     if (VAR_36->cursorPos < 0) {
      VAR_36->cursorPos = 0;
     }
     if (VAR_36->cursorPos < VAR_36->startPos) {
      VAR_36->startPos = VAR_36->cursorPos;
     }
     if (VAR_36->cursorPos >= VAR_36->startPos + VAR_39) {
      VAR_36->startPos = VAR_36->cursorPos - VAR_39 + 1;
     }
     VAR_32->cursorPos = VAR_36->cursorPos;
     VAR_0->feederSelection(VAR_32->special, VAR_32->cursorPos);
    }
    else {
     VAR_36->startPos--;
     if (VAR_36->startPos < 0)
      VAR_36->startPos = 0;
    }
    return VAR_31;
   }
   if ( VAR_33 == VAR_20 || VAR_33 == VAR_11 )
   {
    if (!VAR_36->notselectable) {
     VAR_36->cursorPos++;
     if (VAR_36->cursorPos < VAR_36->startPos) {
      VAR_36->startPos = VAR_36->cursorPos;
     }
     if (VAR_36->cursorPos >= VAR_37) {
      VAR_36->cursorPos = VAR_37-1;
     }
     if (VAR_36->cursorPos >= VAR_36->startPos + VAR_39) {
      VAR_36->startPos = VAR_36->cursorPos - VAR_39 + 1;
     }
     VAR_32->cursorPos = VAR_36->cursorPos;
     VAR_0->feederSelection(VAR_32->special, VAR_32->cursorPos);
    }
    else {
     VAR_36->startPos++;
     if (VAR_36->startPos >= VAR_37)
      VAR_36->startPos = VAR_37-1;
    }
    return VAR_31;
   }
  }
  else {
   VAR_39 = (VAR_32->window.rect.h / VAR_36->elementHeight);
   if ( VAR_33 == VAR_21 || VAR_33 == VAR_12 )
   {
    if (!VAR_36->notselectable) {
     VAR_36->cursorPos--;
     if (VAR_36->cursorPos < 0) {
      VAR_36->cursorPos = 0;
     }
     if (VAR_36->cursorPos < VAR_36->startPos) {
      VAR_36->startPos = VAR_36->cursorPos;
     }
     if (VAR_36->cursorPos >= VAR_36->startPos + VAR_39) {
      VAR_36->startPos = VAR_36->cursorPos - VAR_39 + 1;
     }
     VAR_32->cursorPos = VAR_36->cursorPos;
     VAR_0->feederSelection(VAR_32->special, VAR_32->cursorPos);
    }
    else {
     VAR_36->startPos--;
     if (VAR_36->startPos < 0)
      VAR_36->startPos = 0;
    }
    return VAR_31;
   }
   if ( VAR_33 == VAR_2 || VAR_33 == VAR_5 )
   {
    if (!VAR_36->notselectable) {
     VAR_36->cursorPos++;
     if (VAR_36->cursorPos < VAR_36->startPos) {
      VAR_36->startPos = VAR_36->cursorPos;
     }
     if (VAR_36->cursorPos >= VAR_37) {
      VAR_36->cursorPos = VAR_37-1;
     }
     if (VAR_36->cursorPos >= VAR_36->startPos + VAR_39) {
      VAR_36->startPos = VAR_36->cursorPos - VAR_39 + 1;
     }
     VAR_32->cursorPos = VAR_36->cursorPos;
     VAR_0->feederSelection(VAR_32->special, VAR_32->cursorPos);
    }
    else {
     VAR_36->startPos++;
     if (VAR_36->startPos > VAR_38)
      VAR_36->startPos = VAR_38;
    }
    return VAR_31;
   }
  }




  if ( VAR_33 == VAR_17 ) {
   int VAR_40 = VAR_39 < 6 ? 1 : 3;
   VAR_36->startPos -= VAR_40;
   if (VAR_36->startPos < 0) {
    VAR_36->startPos = 0;
   }
   return VAR_31;
  }
  if ( VAR_33 == VAR_16 ) {
   int VAR_41 = VAR_39 < 6 ? 1 : 3;
   VAR_36->startPos += VAR_41;
   if (VAR_36->startPos > VAR_38) {
    VAR_36->startPos = VAR_38;
   }
   return VAR_31;
  }


  if (VAR_33 == VAR_14 || VAR_33 == VAR_15) {
   if (VAR_32->window.flags & VAR_24) {
    VAR_36->startPos--;
    if (VAR_36->startPos < 0) {
     VAR_36->startPos = 0;
    }
   } else if (VAR_32->window.flags & VAR_27) {

    VAR_36->startPos++;
    if (VAR_36->startPos > VAR_38) {
     VAR_36->startPos = VAR_38;
    }
   } else if (VAR_32->window.flags & VAR_26) {

    VAR_36->startPos -= VAR_39;
    if (VAR_36->startPos < 0) {
     VAR_36->startPos = 0;
    }
   } else if (VAR_32->window.flags & VAR_25) {

    VAR_36->startPos += VAR_39;
    if (VAR_36->startPos > VAR_38) {
     VAR_36->startPos = VAR_38;
    }
   } else if (VAR_32->window.flags & VAR_28) {

   } else {

    if (VAR_0->realTime < VAR_29 && VAR_36->doubleClick) {
     FUNC_1(VAR_32, VAR_36->doubleClick);
    }
    VAR_29 = VAR_0->realTime + VAR_1;
    if (VAR_32->cursorPos != VAR_36->cursorPos) {
     VAR_32->cursorPos = VAR_36->cursorPos;
     VAR_0->feederSelection(VAR_32->special, VAR_32->cursorPos);
    }
   }
   return VAR_31;
  }
  if ( VAR_33 == VAR_4 || VAR_33 == VAR_7) {

   VAR_36->startPos = 0;
   return VAR_31;
  }
  if ( VAR_33 == VAR_3 || VAR_33 == VAR_6) {

   VAR_36->startPos = VAR_38;
   return VAR_31;
  }
  if (VAR_33 == VAR_19 || VAR_33 == VAR_10 ) {

   if (!VAR_36->notselectable) {
    VAR_36->cursorPos -= VAR_39;
    if (VAR_36->cursorPos < 0) {
     VAR_36->cursorPos = 0;
    }
    if (VAR_36->cursorPos < VAR_36->startPos) {
     VAR_36->startPos = VAR_36->cursorPos;
    }
    if (VAR_36->cursorPos >= VAR_36->startPos + VAR_39) {
     VAR_36->startPos = VAR_36->cursorPos - VAR_39 + 1;
    }
    VAR_32->cursorPos = VAR_36->cursorPos;
    VAR_0->feederSelection(VAR_32->special, VAR_32->cursorPos);
   }
   else {
    VAR_36->startPos -= VAR_39;
    if (VAR_36->startPos < 0) {
     VAR_36->startPos = 0;
    }
   }
   return VAR_31;
  }
  if ( VAR_33 == VAR_18 || VAR_33 == VAR_9 ) {

   if (!VAR_36->notselectable) {
    VAR_36->cursorPos += VAR_39;
    if (VAR_36->cursorPos < VAR_36->startPos) {
     VAR_36->startPos = VAR_36->cursorPos;
    }
    if (VAR_36->cursorPos >= VAR_37) {
     VAR_36->cursorPos = VAR_37-1;
    }
    if (VAR_36->cursorPos >= VAR_36->startPos + VAR_39) {
     VAR_36->startPos = VAR_36->cursorPos - VAR_39 + 1;
    }
    VAR_32->cursorPos = VAR_36->cursorPos;
    VAR_0->feederSelection(VAR_32->special, VAR_32->cursorPos);
   }
   else {
    VAR_36->startPos += VAR_39;
    if (VAR_36->startPos > VAR_38) {
     VAR_36->startPos = VAR_38;
    }
   }
   return VAR_31;
  }
 }
 return VAR_30;
}
