
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int (* MakeCurrent ) () ;} ;
struct TYPE_12__ {scalar_t__ id; } ;
struct TYPE_11__ {scalar_t__ id; } ;
struct TYPE_10__ {scalar_t__ id; } ;
struct TYPE_13__ {TYPE_3__ custom_view; TYPE_2__ depth; TYPE_1__ rgb; } ;
struct TYPE_14__ {scalar_t__ error; char* error_message; struct TYPE_14__* image_buffer; struct TYPE_14__* temp_buffer; struct TYPE_14__* recording_ctx; TYPE_4__ pbos; scalar_t__ is_video; scalar_t__ is_recording; int * dm_ctx; } ;
typedef TYPE_5__ GameContext ;
typedef int DeepmindContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int,scalar_t__*) ;
 TYPE_6__ VAR_1 ;
 int VAR_2 ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(void* VAR_3) {
  GameContext* VAR_4 = VAR_3;
  DeepmindContext* VAR_5 = VAR_4->dm_ctx;

  if (VAR_4->recording_ctx->is_recording) {
    FUNC_3(VAR_4->recording_ctx);
  }
  if (VAR_4->recording_ctx->is_video) {
    FUNC_4(VAR_4->recording_ctx);
  }
  if (VAR_4->recording_ctx->error != VAR_0) {
    FUNC_5(VAR_2, "ERROR: %s", VAR_4->recording_ctx->error_message);
  }

  if (VAR_4->pbos.rgb.id || VAR_4->pbos.depth.id || VAR_4->pbos.custom_view.id) {
    VAR_1.MakeCurrent();
    if (VAR_4->pbos.rgb.id) {
      FUNC_7(1, &VAR_4->pbos.rgb.id);
    }

    if (VAR_4->pbos.depth.id) {
      FUNC_7(1, &VAR_4->pbos.depth.id);
    }

    if (VAR_4->pbos.custom_view.id) {
      FUNC_7(1, &VAR_4->pbos.custom_view.id);
    }
  }

  FUNC_2(VAR_5);
  FUNC_6(VAR_4->recording_ctx);
  FUNC_6(VAR_4->temp_buffer);
  FUNC_6(VAR_4->image_buffer);
  FUNC_6(VAR_4);
  FUNC_1();
  FUNC_0();
}
