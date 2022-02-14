
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ error; int error_message; scalar_t__ is_recording; } ;
struct TYPE_9__ {int is_connecting; int map_loaded; TYPE_5__* recording_ctx; TYPE_2__* dm_ctx; } ;
struct TYPE_7__ {int (* set_error_message ) (int ,int ) ;} ;
struct TYPE_8__ {int userdata; TYPE_1__ hooks; } ;
typedef TYPE_3__ GameContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static bool FUNC_3(GameContext* VAR_1) {
  FUNC_0(VAR_1);
  if (VAR_1->recording_ctx->is_recording) {
    FUNC_1(VAR_1->recording_ctx);
    if (VAR_1->recording_ctx->error != VAR_0) {
      VAR_1->dm_ctx->hooks.set_error_message(VAR_1->dm_ctx->userdata,
                                          VAR_1->recording_ctx->error_message);
      return 0;
    }
  }
  VAR_1->is_connecting = 1;
  VAR_1->map_loaded = 0;
  return 1;
}
