
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef double* vec4_t ;
struct TYPE_6__ {int x; int y; int h; int w; } ;
typedef TYPE_1__ rectDef_t ;
struct TYPE_7__ {scalar_t__ style; scalar_t__ border; int borderSize; int flags; double* backColor; double* foreColor; int cinematic; double* borderColor; TYPE_1__ rect; int cinematicName; int background; int nextTime; } ;
typedef TYPE_2__ Window ;
struct TYPE_8__ {int (* playCinematic ) (int ,int,int,int ,int) ;int (* setColor ) (double*) ;int (* drawSides ) (int,int,int ,int,int) ;int (* drawTopBottom ) (int,int,int ,int,int) ;int (* drawRect ) (int,int,int ,int,int,double*) ;int (* drawCinematic ) (int,int,int,int ,int) ;int (* runCinematicFrame ) (int) ;int (* fillRect ) (int,int,int ,int,double*) ;int (* getTeamColor ) (double**) ;int (* drawHandlePic ) (int,int,int ,int,int ) ;} ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (int*,double*,float,int *,float,int ,float) ;
 int FUNC_1 (TYPE_1__*,double*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int,int,int ,int,int,double*) ;
 int FUNC_3 (int,int,int ,int,double*) ;
 int FUNC_4 (int ,int,int,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int,int,int ,int) ;
 int FUNC_7 (int,int,int ,int,int,double*) ;
 int FUNC_8 (int,int,int ,int,int,double*) ;
 int FUNC_9 (double*) ;
 int FUNC_10 (int,int,int ,int,int) ;
 int FUNC_11 (double*) ;
 int FUNC_12 (double*) ;
 int FUNC_13 (double*) ;
 int FUNC_14 (int,int,int ,int,int) ;
 int FUNC_15 (double*) ;
 int FUNC_16 (int,int,int ,int,int ) ;
 int FUNC_17 (double*) ;
 int FUNC_18 (int,int,int ,int,double*) ;
 int FUNC_19 (double*) ;
 int FUNC_20 (int,int,int ,int,int ) ;
 int FUNC_21 (double*) ;
 int FUNC_22 (double**) ;

void FUNC_23(Window *VAR_13, float VAR_14, float VAR_15, float VAR_16) {

  vec4_t VAR_17 = {0};
  rectDef_t VAR_18;

  if ( VAR_13 == ((void*)0) ) {
    return;
  }

  if (VAR_11) {
    VAR_17[0] = VAR_17[1] = VAR_17[2] = VAR_17[3] = 1;
    VAR_0->drawRect(VAR_13->rect.x, VAR_13->rect.y, VAR_13->rect.w, VAR_13->rect.h, 1, VAR_17);
  }

  if (VAR_13->style == 0 && VAR_13->border == 0) {
    return;
  }

  VAR_18 = VAR_13->rect;

  if (VAR_13->border != 0) {
    VAR_18.x += VAR_13->borderSize;
    VAR_18.y += VAR_13->borderSize;
    VAR_18.w -= VAR_13->borderSize + 1;
    VAR_18.h -= VAR_13->borderSize + 1;
  }

  if (VAR_13->style == VAR_7) {

  if (VAR_13->background) {
    FUNC_0(&VAR_13->flags, &VAR_13->backColor[3], VAR_15, &VAR_13->nextTime, VAR_16, VAR_12, VAR_14);
      VAR_0->setColor(VAR_13->backColor);
     VAR_0->drawHandlePic(VAR_18.x, VAR_18.y, VAR_18.w, VAR_18.h, VAR_13->background);
    VAR_0->setColor(((void*)0));
  } else {
     VAR_0->fillRect(VAR_18.x, VAR_18.y, VAR_18.w, VAR_18.h, VAR_13->backColor);
  }
  } else if (VAR_13->style == VAR_8) {
    FUNC_1(&VAR_18, VAR_13->backColor);

  } else if (VAR_13->style == VAR_9) {
    if (VAR_13->flags & VAR_5) {
      VAR_0->setColor(VAR_13->foreColor);
    }
    VAR_0->drawHandlePic(VAR_18.x, VAR_18.y, VAR_18.w, VAR_18.h, VAR_13->background);
    VAR_0->setColor(((void*)0));
  } else if (VAR_13->style == VAR_10) {
    if (VAR_0->getTeamColor) {
      VAR_0->getTeamColor(&VAR_17);
      VAR_0->fillRect(VAR_18.x, VAR_18.y, VAR_18.w, VAR_18.h, VAR_17);
    }
  } else if (VAR_13->style == VAR_6) {
  if (VAR_13->cinematic == -1) {
   VAR_13->cinematic = VAR_0->playCinematic(VAR_13->cinematicName, VAR_18.x, VAR_18.y, VAR_18.w, VAR_18.h);
   if (VAR_13->cinematic == -1) {
    VAR_13->cinematic = -2;
   }
  }
  if (VAR_13->cinematic >= 0) {
     VAR_0->runCinematicFrame(VAR_13->cinematic);
   VAR_0->drawCinematic(VAR_13->cinematic, VAR_18.x, VAR_18.y, VAR_18.w, VAR_18.h);
  }
  }

  if (VAR_13->border == VAR_1) {


    if (VAR_13->style == VAR_10) {
      if (VAR_17[0] > 0) {

        VAR_17[0] = 1;
        VAR_17[1] = VAR_17[2] = .5;

      } else {
        VAR_17[2] = 1;
        VAR_17[0] = VAR_17[1] = .5;
      }
      VAR_17[3] = 1;
      VAR_0->drawRect(VAR_13->rect.x, VAR_13->rect.y, VAR_13->rect.w, VAR_13->rect.h, VAR_13->borderSize, VAR_17);
    } else {
      VAR_0->drawRect(VAR_13->rect.x, VAR_13->rect.y, VAR_13->rect.w, VAR_13->rect.h, VAR_13->borderSize, VAR_13->borderColor);
    }
  } else if (VAR_13->border == VAR_2) {

    VAR_0->setColor(VAR_13->borderColor);
    VAR_0->drawTopBottom(VAR_13->rect.x, VAR_13->rect.y, VAR_13->rect.w, VAR_13->rect.h, VAR_13->borderSize);
   VAR_0->setColor( ((void*)0) );
  } else if (VAR_13->border == VAR_4) {

    VAR_0->setColor(VAR_13->borderColor);
    VAR_0->drawSides(VAR_13->rect.x, VAR_13->rect.y, VAR_13->rect.w, VAR_13->rect.h, VAR_13->borderSize);
   VAR_0->setColor( ((void*)0) );
  } else if (VAR_13->border == VAR_3) {

    rectDef_t VAR_19 = VAR_13->rect;
    VAR_19.h = VAR_13->borderSize;
    FUNC_1(&VAR_19, VAR_13->borderColor);
    VAR_19.y = VAR_13->rect.y + VAR_13->rect.h - 1;
    FUNC_1(&VAR_19, VAR_13->borderColor);
  }

}
