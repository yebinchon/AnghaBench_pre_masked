
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * vec4_t ;
struct TYPE_8__ {int h; int w; int y; int x; } ;
typedef TYPE_3__ rectDef_t ;
typedef scalar_t__ qhandle_t ;
typedef int gitem_t ;
struct TYPE_7__ {scalar_t__* flagShaders; scalar_t__ redCubeIcon; } ;
struct TYPE_9__ {scalar_t__ gametype; int redflag; TYPE_2__ media; } ;
struct TYPE_6__ {int member_0; int member_3; int member_2; int member_1; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(rectDef_t *VAR_5, qhandle_t VAR_6) {
 if (VAR_4.gametype != VAR_1 && VAR_4.gametype != VAR_0) {
  if (VAR_4.gametype == VAR_2) {
    vec4_t VAR_7 = {1, 0, 0, 1};
    FUNC_2(VAR_7);
     FUNC_1( VAR_5->x, VAR_5->y, VAR_5->w, VAR_5->h, VAR_4.media.redCubeIcon );
    FUNC_2(((void*)0));
  }
  return;
 }
  if (VAR_6) {
  FUNC_1( VAR_5->x, VAR_5->y, VAR_5->w, VAR_5->h, VAR_6 );
  } else {
   gitem_t *VAR_8 = FUNC_0( VAR_3 );
    if (VAR_8) {
    vec4_t VAR_9 = {1, 0, 0, 1};
    FUNC_2(VAR_9);
     if( VAR_4.redflag >= 0 && VAR_4.redflag <= 2) {
      FUNC_1( VAR_5->x, VAR_5->y, VAR_5->w, VAR_5->h, VAR_4.media.flagShaders[VAR_4.redflag] );
   } else {
      FUNC_1( VAR_5->x, VAR_5->y, VAR_5->w, VAR_5->h, VAR_4.media.flagShaders[0] );
   }
    FUNC_2(((void*)0));
   }
  }
}
