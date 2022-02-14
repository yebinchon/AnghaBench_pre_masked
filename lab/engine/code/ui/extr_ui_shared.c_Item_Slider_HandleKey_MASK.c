
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {float x; float w; } ;
typedef TYPE_3__ rectDef_t ;
typedef int qboolean ;
struct TYPE_10__ {int flags; TYPE_3__ rect; } ;
struct TYPE_9__ {int x; int w; } ;
struct TYPE_12__ {scalar_t__ cvar; TYPE_5__* typeData; TYPE_2__ window; TYPE_1__ textRect; scalar_t__ text; } ;
typedef TYPE_4__ itemDef_t ;
struct TYPE_13__ {float maxVal; float minVal; } ;
typedef TYPE_5__ editFieldDef_t ;
struct TYPE_14__ {float cursorx; int (* getCVarValue ) (scalar_t__) ;int (* Print ) (char*) ;int (* setCVar ) (scalar_t__,int ) ;int cursory; } ;


 TYPE_8__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*,float,int ) ;
 scalar_t__ VAR_4 ;
 float VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,float) ;

qboolean FUNC_7(itemDef_t *VAR_9, int VAR_10, qboolean VAR_11) {
 float VAR_12, VAR_13, VAR_14, VAR_15;


 if (VAR_9->cvar) {
  if (VAR_10 == VAR_1 || VAR_10 == VAR_2 || VAR_10 == VAR_3) {
   editFieldDef_t *VAR_16 = VAR_9->typeData;
   if (VAR_16 && FUNC_0(&VAR_9->window.rect, VAR_0->cursorx, VAR_0->cursory) && VAR_9->window.flags & VAR_6) {
    rectDef_t VAR_17;
    VAR_14 = VAR_5;
    if (VAR_9->text) {
     VAR_12 = VAR_9->textRect.x + VAR_9->textRect.w + 8;
    } else {
     VAR_12 = VAR_9->window.rect.x;
    }

    VAR_17 = VAR_9->window.rect;
    VAR_17.x = VAR_12;
    VAR_13 = (float)VAR_4 / 2;
    VAR_17.x -= VAR_13;

    VAR_17.w = (VAR_5 + (float)VAR_4 / 2);

    if (FUNC_0(&VAR_17, VAR_0->cursorx, VAR_0->cursory)) {
     VAR_15 = VAR_0->cursorx - VAR_12;
     VAR_13 = VAR_15 / VAR_14;
     VAR_13 *= (VAR_16->maxVal - VAR_16->minVal);


     VAR_13 += VAR_16->minVal;
     VAR_0->setCVar(VAR_9->cvar, FUNC_6("%f", VAR_13));
     return VAR_8;
    }
   }
  } else {
   int VAR_18 = FUNC_1(VAR_10);
   if (VAR_18 != 0) {
    editFieldDef_t *VAR_19 = VAR_9->typeData;
    if (VAR_19) {

     VAR_13 = VAR_0->getCVarValue(VAR_9->cvar) + (((VAR_19->maxVal - VAR_19->minVal)/20) * VAR_18);

     if (VAR_13 < VAR_19->minVal)
      VAR_13 = VAR_19->minVal;
     else if (VAR_13 > VAR_19->maxVal)
      VAR_13 = VAR_19->maxVal;

     VAR_0->setCVar(VAR_9->cvar, FUNC_6("%f", VAR_13));
     return VAR_8;
    }
   }
  }
 }
 VAR_0->Print("slider handle key exit\n");
 return VAR_7;
}
