
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_10__ {int * angles; int buttons; int upmove; int rightmove; int forwardmove; int serverTime; int weapon; } ;
typedef TYPE_3__ usercmd_t ;
struct TYPE_12__ {void** viewangles; int serverTime; int cgameUserCmdValue; } ;
struct TYPE_9__ {scalar_t__ (* get_native_app ) (int ) ;int (* get_actions ) (int ,double*,double*,int *,int *,int *,int *) ;int (* set_actions ) (int ,int,int,int ,int ,int ,int ) ;} ;
struct TYPE_8__ {int (* engine_frame_period_msec ) () ;int (* is_map_loading ) () ;} ;
struct TYPE_11__ {int userdata; TYPE_2__ hooks; TYPE_1__ calls; } ;
typedef TYPE_4__ DeepmindContext ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*,scalar_t__) ;
 void* FUNC_2 (scalar_t__) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_6__ VAR_3 ;
 TYPE_4__* FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int,int ,int ,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,double*,double*,int *,int *,int *,int *) ;

void FUNC_9( vec3_t VAR_5, usercmd_t *VAR_6 ) {
 DeepmindContext* VAR_7 = FUNC_3();
 int VAR_8;
 int VAR_9 = VAR_7->calls.engine_frame_period_msec();
 if ( VAR_9 == 0 ) {
  VAR_9 = VAR_4;
 }

 VAR_6->weapon = VAR_3.cgameUserCmdValue;



 VAR_6->serverTime = VAR_3.serverTime;

 if (VAR_7->hooks.get_native_app( VAR_7->userdata ) != 0) {
  VAR_7->hooks.set_actions(
    VAR_7->userdata,
    FUNC_1( VAR_3.viewangles[VAR_0], VAR_5[VAR_0] ) / VAR_9,
    FUNC_1( VAR_3.viewangles[VAR_2], VAR_5[VAR_2] ) / VAR_9,
    VAR_6->forwardmove, VAR_6->rightmove, VAR_6->upmove, VAR_6->buttons );
 }

 double VAR_10 = 0;
 double VAR_11 = 0;
  if (!VAR_7->calls.is_map_loading()) {
  VAR_7->hooks.get_actions(
    VAR_7->userdata,
    &VAR_10, &VAR_11,
    &VAR_6->forwardmove, &VAR_6->rightmove, &VAR_6->upmove,
    &VAR_6->buttons);
 } else {
  VAR_6->forwardmove = 0;
  VAR_6->rightmove = 0;
  VAR_6->upmove = 0;
  VAR_6->buttons = 0;
 }

 VAR_3.viewangles[VAR_1] = 0;
 VAR_3.viewangles[VAR_0] = FUNC_2( VAR_5[VAR_0] + VAR_10 * VAR_9 );
 VAR_3.viewangles[VAR_2] = FUNC_2( VAR_5[VAR_2] + VAR_11 * VAR_9 );

 for (VAR_8=0 ; VAR_8<3 ; VAR_8++) {
  VAR_6->angles[VAR_8] = FUNC_0(VAR_3.viewangles[VAR_8]);
 }
}
