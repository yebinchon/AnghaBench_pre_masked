
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_22__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int* vec4_t ;
struct TYPE_27__ {int h; int w; int y; int x; } ;
typedef TYPE_4__ rectDef_t ;
struct TYPE_28__ {int fadeCycle; int fadeClamp; int fadeAmount; } ;
typedef TYPE_5__ menuDef_t ;
struct TYPE_26__ {float x; float y; scalar_t__ w; scalar_t__ h; } ;
struct TYPE_25__ {int w; int h; float x; float y; } ;
struct TYPE_23__ {scalar_t__ x; scalar_t__ y; scalar_t__ w; scalar_t__ h; } ;
struct TYPE_30__ {int flags; scalar_t__ nextTime; scalar_t__ offsetTime; scalar_t__ ownerDrawFlags; TYPE_3__ rectEffects; TYPE_2__ rectClient; TYPE_1__ rectEffects2; } ;
struct TYPE_29__ {int cvarFlags; int type; TYPE_7__ window; scalar_t__ parent; } ;
typedef TYPE_6__ itemDef_t ;
struct TYPE_24__ {scalar_t__ realTime; int (* drawRect ) (int ,int ,int ,int ,int,int*) ;int (* ownerDrawVisible ) (scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_22__* VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;
 TYPE_4__* FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*,int) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (TYPE_7__*,int ,int ,int ) ;
 float FUNC_13 (float) ;
 scalar_t__ VAR_8 ;
 float FUNC_14 (float) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int ,int ,int ,int ,int,int*) ;

void FUNC_17(itemDef_t *VAR_9) {
  vec4_t VAR_10;
  menuDef_t *VAR_11;

  VAR_10[0] = VAR_10[3] = 1;
  VAR_10[1] = VAR_10[2] = 0;

  if (VAR_9 == ((void*)0)) {
    return;
  }

  VAR_11 = (menuDef_t*)VAR_9->parent;

  if (VAR_9->window.flags & VAR_5) {
    if (VAR_2->realTime > VAR_9->window.nextTime) {
      float VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

      VAR_9->window.nextTime = VAR_2->realTime + VAR_9->window.offsetTime;

      VAR_17 = VAR_9->window.rectClient.w / 2;
      VAR_18 = VAR_9->window.rectClient.h / 2;
      VAR_12 = VAR_9->window.rectClient.x + VAR_17 - VAR_9->window.rectEffects.x;
      VAR_13 = VAR_9->window.rectClient.y + VAR_18 - VAR_9->window.rectEffects.y;
      VAR_14 = 3 * VAR_3 / 180;
     VAR_15 = FUNC_13(VAR_14);
      VAR_16 = FUNC_14(VAR_14);
      VAR_9->window.rectClient.x = (VAR_12 * VAR_15 - VAR_13 * VAR_16) + VAR_9->window.rectEffects.x - VAR_17;
      VAR_9->window.rectClient.y = (VAR_12 * VAR_16 + VAR_13 * VAR_15) + VAR_9->window.rectEffects.y - VAR_18;
      FUNC_10(VAR_9);

    }
  }


  if (VAR_9->window.flags & VAR_4) {
    if (VAR_2->realTime > VAR_9->window.nextTime) {
      int VAR_19 = 0;
      VAR_9->window.nextTime = VAR_2->realTime + VAR_9->window.offsetTime;

   if (VAR_9->window.rectClient.x == VAR_9->window.rectEffects.x) {
    VAR_19++;
   } else {
    if (VAR_9->window.rectClient.x < VAR_9->window.rectEffects.x) {
     VAR_9->window.rectClient.x += VAR_9->window.rectEffects2.x;
     if (VAR_9->window.rectClient.x > VAR_9->window.rectEffects.x) {
      VAR_9->window.rectClient.x = VAR_9->window.rectEffects.x;
      VAR_19++;
     }
    } else {
     VAR_9->window.rectClient.x -= VAR_9->window.rectEffects2.x;
     if (VAR_9->window.rectClient.x < VAR_9->window.rectEffects.x) {
      VAR_9->window.rectClient.x = VAR_9->window.rectEffects.x;
      VAR_19++;
     }
    }
   }
   if (VAR_9->window.rectClient.y == VAR_9->window.rectEffects.y) {
    VAR_19++;
   } else {
    if (VAR_9->window.rectClient.y < VAR_9->window.rectEffects.y) {
     VAR_9->window.rectClient.y += VAR_9->window.rectEffects2.y;
     if (VAR_9->window.rectClient.y > VAR_9->window.rectEffects.y) {
      VAR_9->window.rectClient.y = VAR_9->window.rectEffects.y;
      VAR_19++;
     }
    } else {
     VAR_9->window.rectClient.y -= VAR_9->window.rectEffects2.y;
     if (VAR_9->window.rectClient.y < VAR_9->window.rectEffects.y) {
      VAR_9->window.rectClient.y = VAR_9->window.rectEffects.y;
      VAR_19++;
     }
    }
   }
   if (VAR_9->window.rectClient.w == VAR_9->window.rectEffects.w) {
    VAR_19++;
   } else {
    if (VAR_9->window.rectClient.w < VAR_9->window.rectEffects.w) {
     VAR_9->window.rectClient.w += VAR_9->window.rectEffects2.w;
     if (VAR_9->window.rectClient.w > VAR_9->window.rectEffects.w) {
      VAR_9->window.rectClient.w = VAR_9->window.rectEffects.w;
      VAR_19++;
     }
    } else {
     VAR_9->window.rectClient.w -= VAR_9->window.rectEffects2.w;
     if (VAR_9->window.rectClient.w < VAR_9->window.rectEffects.w) {
      VAR_9->window.rectClient.w = VAR_9->window.rectEffects.w;
      VAR_19++;
     }
    }
   }
   if (VAR_9->window.rectClient.h == VAR_9->window.rectEffects.h) {
    VAR_19++;
   } else {
    if (VAR_9->window.rectClient.h < VAR_9->window.rectEffects.h) {
     VAR_9->window.rectClient.h += VAR_9->window.rectEffects2.h;
     if (VAR_9->window.rectClient.h > VAR_9->window.rectEffects.h) {
      VAR_9->window.rectClient.h = VAR_9->window.rectEffects.h;
      VAR_19++;
     }
    } else {
     VAR_9->window.rectClient.h -= VAR_9->window.rectEffects2.h;
     if (VAR_9->window.rectClient.h < VAR_9->window.rectEffects.h) {
      VAR_9->window.rectClient.h = VAR_9->window.rectEffects.h;
      VAR_19++;
     }
    }
   }

      FUNC_10(VAR_9);

      if (VAR_19 == 4) {
        VAR_9->window.flags &= ~VAR_4;
      }

    }
  }

 if (VAR_9->window.ownerDrawFlags && VAR_2->ownerDrawVisible) {
  if (!VAR_2->ownerDrawVisible(VAR_9->window.ownerDrawFlags)) {
   VAR_9->window.flags &= ~VAR_7;
  } else {
   VAR_9->window.flags |= VAR_7;
  }
 }

 if (VAR_9->cvarFlags & (VAR_1 | VAR_0)) {
  if (!FUNC_2(VAR_9, VAR_1)) {
   return;
  }
 }

  if (VAR_9->window.flags & VAR_6) {

 }

  if (!(VAR_9->window.flags & VAR_7)) {
    return;
  }


  FUNC_12(&VAR_9->window, VAR_11->fadeAmount , VAR_11->fadeClamp, VAR_11->fadeCycle);

  if (VAR_8) {
  vec4_t VAR_20;
  rectDef_t *VAR_21 = FUNC_1(VAR_9);
    VAR_20[1] = VAR_20[3] = 1;
    VAR_20[0] = VAR_20[2] = 0;
    VAR_2->drawRect(VAR_21->x, VAR_21->y, VAR_21->w, VAR_21->h, 1, VAR_20);
  }



  switch (VAR_9->type) {
    case 132:
      FUNC_6(VAR_9);
      break;
    case 129:
    case 140:
      FUNC_9(VAR_9);
      break;
    case 131:
      break;
    case 139:
      break;
    case 137:
    case 133:
      FUNC_8(VAR_9);
      break;
    case 138:
      break;
    case 136:
      FUNC_3(VAR_9);
      break;



    case 135:
      FUNC_4(VAR_9);
      break;
    case 128:
      FUNC_11(VAR_9);
      break;
    case 134:
      FUNC_5(VAR_9);
      break;
    case 141:
      FUNC_0(VAR_9);
      break;
    case 130:
      FUNC_7(VAR_9);
      break;
    default:
      break;
  }

}
