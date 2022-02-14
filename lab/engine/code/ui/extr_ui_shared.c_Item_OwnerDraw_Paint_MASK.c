
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef double* vec4_t ;
struct TYPE_16__ {double* focusColor; int disableColor; int fadeAmount; int fadeCycle; int fadeClamp; } ;
typedef TYPE_5__ menuDef_t ;
struct TYPE_12__ {int h; int w; int y; scalar_t__ x; } ;
struct TYPE_14__ {int flags; double* foreColor; int background; int ownerDrawFlags; int ownerDraw; TYPE_1__ rect; int nextTime; } ;
struct TYPE_15__ {scalar_t__ w; scalar_t__ x; } ;
struct TYPE_17__ {scalar_t__ numColors; int cvarFlags; int textStyle; TYPE_3__ window; int textscale; int special; int alignment; int textaligny; int textalignx; TYPE_4__ textRect; scalar_t__* text; TYPE_2__* colorRanges; scalar_t__ parent; } ;
typedef TYPE_6__ itemDef_t ;
typedef int color ;
struct TYPE_13__ {float low; float high; double* color; } ;
struct TYPE_11__ {float (* getValue ) (int ) ;int realTime; int (* ownerDrawItem ) (scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,double*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (double*,int ,int) ;
 TYPE_10__* VAR_3 ;
 int FUNC_1 (int*,double*,int ,int *,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_6__*,int) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (double*,double*,double*,double) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (double**,double**,int) ;
 int VAR_7 ;
 double FUNC_6 (int) ;
 float FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,double*,int ,int ) ;
 int FUNC_9 (scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,double*,int ,int ) ;
 int FUNC_10 (scalar_t__,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,double*,int ,int ) ;

void FUNC_11(itemDef_t *VAR_8) {
 if (VAR_8 == ((void*)0)) {
  return;
 }

 if (VAR_3->ownerDrawItem) {
  vec4_t VAR_9, VAR_10;
  menuDef_t *VAR_11 = (menuDef_t*)VAR_8->parent;
  FUNC_1(&VAR_8->window.flags, &VAR_8->window.foreColor[3], VAR_11->fadeClamp, &VAR_8->window.nextTime, VAR_11->fadeCycle, VAR_7, VAR_11->fadeAmount);
  FUNC_5(&VAR_9, &VAR_8->window.foreColor, sizeof(VAR_9));
  if (VAR_8->numColors > 0 && VAR_3->getValue) {

   int VAR_12;
   float VAR_13 = VAR_3->getValue(VAR_8->window.ownerDraw);
   for (VAR_12 = 0; VAR_12 < VAR_8->numColors; VAR_12++) {
    if (VAR_13 >= VAR_8->colorRanges[VAR_12].low && VAR_13 <= VAR_8->colorRanges[VAR_12].high) {
     FUNC_5(&VAR_9, &VAR_8->colorRanges[VAR_12].color, sizeof(VAR_9));
     break;
    }
   }
  }

  if (VAR_8->window.flags & VAR_6) {
   VAR_10[0] = 0.8 * VAR_11->focusColor[0];
   VAR_10[1] = 0.8 * VAR_11->focusColor[1];
   VAR_10[2] = 0.8 * VAR_11->focusColor[2];
   VAR_10[3] = 0.8 * VAR_11->focusColor[3];
   FUNC_4(VAR_11->focusColor,VAR_10,VAR_9,0.5+0.5*FUNC_6(VAR_3->realTime / VAR_5));
  } else if (VAR_8->textStyle == VAR_4 && !((VAR_3->realTime/VAR_0) & 1)) {
   VAR_10[0] = 0.8 * VAR_8->window.foreColor[0];
   VAR_10[1] = 0.8 * VAR_8->window.foreColor[1];
   VAR_10[2] = 0.8 * VAR_8->window.foreColor[2];
   VAR_10[3] = 0.8 * VAR_8->window.foreColor[3];
   FUNC_4(VAR_8->window.foreColor,VAR_10,VAR_9,0.5+0.5*FUNC_6(VAR_3->realTime / VAR_5));
  }

  if (VAR_8->cvarFlags & (VAR_2 | VAR_1) && !FUNC_2(VAR_8, VAR_2)) {
    FUNC_0(VAR_9, VAR_11->disableColor, sizeof(vec4_t));
  }

  if (VAR_8->text) {
   FUNC_3(VAR_8);
    if (VAR_8->text[0]) {

     VAR_3->ownerDrawItem(VAR_8->textRect.x + VAR_8->textRect.w + 8, VAR_8->window.rect.y, VAR_8->window.rect.w, VAR_8->window.rect.h, 0, VAR_8->textaligny, VAR_8->window.ownerDraw, VAR_8->window.ownerDrawFlags, VAR_8->alignment, VAR_8->special, VAR_8->textscale, VAR_9, VAR_8->window.background, VAR_8->textStyle );
    } else {
     VAR_3->ownerDrawItem(VAR_8->textRect.x + VAR_8->textRect.w, VAR_8->window.rect.y, VAR_8->window.rect.w, VAR_8->window.rect.h, 0, VAR_8->textaligny, VAR_8->window.ownerDraw, VAR_8->window.ownerDrawFlags, VAR_8->alignment, VAR_8->special, VAR_8->textscale, VAR_9, VAR_8->window.background, VAR_8->textStyle );
    }
   } else {
   VAR_3->ownerDrawItem(VAR_8->window.rect.x, VAR_8->window.rect.y, VAR_8->window.rect.w, VAR_8->window.rect.h, VAR_8->textalignx, VAR_8->textaligny, VAR_8->window.ownerDraw, VAR_8->window.ownerDrawFlags, VAR_8->alignment, VAR_8->special, VAR_8->textscale, VAR_9, VAR_8->window.background, VAR_8->textStyle );
  }
 }
}
