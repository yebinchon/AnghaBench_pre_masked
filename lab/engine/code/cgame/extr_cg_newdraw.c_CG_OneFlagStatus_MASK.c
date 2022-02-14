
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__* vec4_t ;
struct TYPE_8__ {int h; int w; int y; int x; } ;
typedef TYPE_3__ rectDef_t ;
typedef int gitem_t ;
struct TYPE_7__ {int * flagShaders; } ;
struct TYPE_9__ {scalar_t__ gametype; int flagStatus; TYPE_2__ media; } ;
struct TYPE_6__ {int member_0; int member_1; int member_2; int member_3; } ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_2 (scalar_t__*) ;

__attribute__((used)) static void FUNC_3(rectDef_t *VAR_6) {
 if (VAR_5.gametype != VAR_3) {
  return;
 } else {
  gitem_t *VAR_7 = FUNC_0( VAR_4 );
  if (VAR_7) {
   if( VAR_5.flagStatus >= 0 && VAR_5.flagStatus <= 4 ) {
    vec4_t VAR_8 = {1, 1, 1, 1};
    int VAR_9 = 0;
    if (VAR_5.flagStatus == VAR_2) {
     VAR_8[1] = VAR_8[2] = 0;
     VAR_9 = 1;
    } else if (VAR_5.flagStatus == VAR_1) {
     VAR_8[0] = VAR_8[1] = 0;
     VAR_9 = 1;
    } else if (VAR_5.flagStatus == VAR_0) {
     VAR_9 = 2;
    }
     FUNC_2(VAR_8);
    FUNC_1( VAR_6->x, VAR_6->y, VAR_6->w, VAR_6->h, VAR_5.media.flagShaders[VAR_9] );
   }
  }
 }
}
