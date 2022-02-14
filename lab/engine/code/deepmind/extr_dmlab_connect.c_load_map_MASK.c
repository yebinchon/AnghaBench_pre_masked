
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_15__ {scalar_t__ error; int error_message; scalar_t__ is_video; scalar_t__ is_demo; scalar_t__ is_recording; } ;
struct TYPE_14__ {int is_map_loading; TYPE_5__* recording_ctx; TYPE_2__* dm_ctx; int map_start_frame; } ;
struct TYPE_12__ {int (* set_error_message ) (int ,int ) ;} ;
struct TYPE_13__ {int userdata; TYPE_1__ hooks; } ;
struct TYPE_11__ {int framecount; } ;
typedef TYPE_3__ GameContext ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 TYPE_10__ VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static bool FUNC_9(GameContext* VAR_4) {
  VAR_4->is_map_loading = 1;
  FUNC_3(VAR_4);
  if (!VAR_4->recording_ctx->is_demo) {
    while (FUNC_2(VAR_4) == VAR_1) {
    }


    for (int VAR_5 = 0; VAR_5 < 3; ++VAR_5) {
      FUNC_1();
      FUNC_0();
    }
  }
  VAR_4->map_start_frame = VAR_2.framecount;

  bool VAR_6 = 1;
  if (VAR_4->recording_ctx->is_recording) {
    VAR_6 &= FUNC_5(VAR_4->recording_ctx);
  }
  if (VAR_4->recording_ctx->is_demo) {
    VAR_6 &= FUNC_4(VAR_4->recording_ctx);
  }
  if (VAR_6 && VAR_4->recording_ctx->is_video) {
    VAR_6 &= FUNC_6(VAR_4->recording_ctx);
  }
  if (VAR_4->recording_ctx->error != VAR_0) {
    VAR_4->dm_ctx->hooks.set_error_message(VAR_4->dm_ctx->userdata,
                                        VAR_4->recording_ctx->error_message);
  }
  FUNC_7(VAR_3);
  return VAR_6;
}
