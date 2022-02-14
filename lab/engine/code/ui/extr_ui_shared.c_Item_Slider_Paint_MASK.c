
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
struct TYPE_16__ {double* focusColor; } ;
typedef TYPE_5__ menuDef_t ;
struct TYPE_13__ {float y; float x; } ;
struct TYPE_14__ {int flags; TYPE_2__ rect; int foreColor; } ;
struct TYPE_12__ {int x; int w; } ;
struct TYPE_17__ {TYPE_3__ window; TYPE_1__ textRect; scalar_t__ text; scalar_t__ parent; } ;
typedef TYPE_6__ itemDef_t ;
struct TYPE_15__ {int sliderThumb; int sliderBar; } ;
struct TYPE_11__ {int realTime; TYPE_4__ Assets; int (* drawHandlePic ) (float,float,int,int ,int ) ;int (* setColor ) (double*) ;} ;


 TYPE_10__* VAR_0 ;
 float FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (double*,double*,double*,double) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (double**,int *,int) ;
 double FUNC_4 (int) ;
 int FUNC_5 (double*) ;
 int FUNC_6 (float,float,int,int ,int ) ;
 int FUNC_7 (float,float,int,int ,int ) ;

void FUNC_8(itemDef_t *VAR_7) {
 vec4_t VAR_8, VAR_9;
 float VAR_10, VAR_11;
 menuDef_t *VAR_12 = (menuDef_t*)VAR_7->parent;

 if (VAR_7->window.flags & VAR_6) {
  VAR_9[0] = 0.8 * VAR_12->focusColor[0];
  VAR_9[1] = 0.8 * VAR_12->focusColor[1];
  VAR_9[2] = 0.8 * VAR_12->focusColor[2];
  VAR_9[3] = 0.8 * VAR_12->focusColor[3];
  FUNC_2(VAR_12->focusColor,VAR_9,VAR_8,0.5+0.5*FUNC_4(VAR_0->realTime / VAR_1));
 } else {
  FUNC_3(&VAR_8, &VAR_7->window.foreColor, sizeof(vec4_t));
 }

 VAR_11 = VAR_7->window.rect.y;
 if (VAR_7->text) {
  FUNC_1(VAR_7);
  VAR_10 = VAR_7->textRect.x + VAR_7->textRect.w + 8;
 } else {
  VAR_10 = VAR_7->window.rect.x;
 }
 VAR_0->setColor(VAR_8);
 VAR_0->drawHandlePic( VAR_10, VAR_11, VAR_5, VAR_2, VAR_0->Assets.sliderBar );

 VAR_10 = FUNC_0(VAR_7);
 VAR_0->drawHandlePic( VAR_10 - (VAR_4 / 2), VAR_11 - 2, VAR_4, VAR_3, VAR_0->Assets.sliderThumb );
}
