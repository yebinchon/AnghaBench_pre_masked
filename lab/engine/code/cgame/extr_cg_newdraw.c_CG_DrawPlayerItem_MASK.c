
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_9__ {int h; int w; int y; int x; } ;
typedef TYPE_3__ rectDef_t ;
typedef int qboolean ;
struct TYPE_11__ {int time; TYPE_2__* snap; } ;
struct TYPE_10__ {int * models; int icon; } ;
struct TYPE_7__ {int* stats; } ;
struct TYPE_8__ {TYPE_1__ ps; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int*,int*) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int) ;
 size_t VAR_0 ;
 int FUNC_3 (int*) ;
 size_t VAR_1 ;
 TYPE_5__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_4( rectDef_t *VAR_5, float VAR_6, qboolean VAR_7) {
 int VAR_8;
  vec3_t VAR_9, VAR_10;

 VAR_8 = VAR_2.snap->ps.stats[VAR_0];
 if ( VAR_8 ) {
  FUNC_2( VAR_8 );

  if (VAR_4) {
    FUNC_2( VAR_8 );
    FUNC_1( VAR_5->x, VAR_5->y, VAR_5->w, VAR_5->h, VAR_3[ VAR_8 ].icon );
  } else {
    FUNC_3( VAR_10 );
   VAR_9[0] = 90;
    VAR_9[1] = 0;
     VAR_9[2] = -10;
    VAR_10[VAR_1] = ( VAR_2.time & 2047 ) * 360 / 2048.0;
   FUNC_0(VAR_5->x, VAR_5->y, VAR_5->w, VAR_5->h, VAR_3[ VAR_8 ].models[0], 0, VAR_9, VAR_10 );
  }
 }

}
