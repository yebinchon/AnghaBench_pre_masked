
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * vec4_t ;
struct TYPE_6__ {int h; int w; int y; int x; } ;
typedef TYPE_2__ rectDef_t ;
struct TYPE_5__ {int gradientBar; } ;
struct TYPE_7__ {int (* setColor ) (int *) ;TYPE_1__ Assets; int (* drawHandlePic ) (int ,int ,int ,int ,int ) ;} ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(rectDef_t *VAR_1, vec4_t VAR_2) {

 VAR_0->setColor( VAR_2 );
 VAR_0->drawHandlePic(VAR_1->x, VAR_1->y, VAR_1->w, VAR_1->h, VAR_0->Assets.gradientBar);
 VAR_0->setColor( ((void*)0) );
}
