
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float x; float y; int h; int w; } ;
typedef TYPE_1__ rectDef_t ;
typedef int qboolean ;
struct TYPE_8__ {int icon; } ;
typedef TYPE_2__ gitem_t ;
struct TYPE_9__ {int powerups; } ;
typedef TYPE_3__ clientInfo_t ;
struct TYPE_10__ {TYPE_3__* clientinfo; } ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (float,float,int ,int ,int ) ;
 size_t FUNC_2 () ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int* VAR_2 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4( rectDef_t *VAR_3, qboolean VAR_4 ) {
 clientInfo_t *VAR_5;
  int VAR_6;
  float VAR_7, VAR_8;

  VAR_5 = VAR_1.clientinfo + VAR_2[FUNC_2()];
  if (VAR_5) {
    VAR_7 = VAR_3->x;
    VAR_8 = VAR_3->y;

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   if (VAR_5->powerups & (1 << VAR_6)) {
    gitem_t *VAR_9;
    VAR_9 = FUNC_0( VAR_6 );
    if (VAR_9) {
      FUNC_1( VAR_7, VAR_8, VAR_3->w, VAR_3->h, FUNC_3( VAR_9->icon ) );
          return;
    }
   }
  }

  }
}
