
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_17__ {int serverTime; } ;
struct TYPE_16__ {scalar_t__ state; } ;
struct TYPE_15__ {int (* MakeCurrent ) () ;} ;
struct TYPE_10__ {int (* clear ) (int ) ;} ;
struct TYPE_12__ {scalar_t__ (* map_loaded ) (int ) ;int (* has_episode_finished ) (int ,double) ;int (* set_map_finished ) (int ,int) ;scalar_t__ (* map_finished ) (int ) ;TYPE_1__ events; scalar_t__ (* get_native_app ) (int ) ;} ;
struct TYPE_14__ {int userdata; TYPE_3__ hooks; } ;
struct TYPE_13__ {int current_screen_rendered; int step; int engine_frame_period_msec; int total_engine_time_msec; double score; int is_map_loading; TYPE_2__* recording_ctx; TYPE_5__* dm_ctx; } ;
struct TYPE_11__ {scalar_t__ error; } ;
typedef TYPE_4__ GameContext ;
typedef int EnvCApi_EnvironmentStatus ;
typedef TYPE_5__ DeepmindContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 TYPE_9__ VAR_7 ;
 TYPE_8__ VAR_8 ;
 double FUNC_4 () ;
 double VAR_9 ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_6__ VAR_10 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,double) ;

__attribute__((used)) static EnvCApi_EnvironmentStatus FUNC_13(
    void* VAR_11, int VAR_12, double* VAR_13) {
  VAR_10.MakeCurrent();
  GameContext* VAR_14 = VAR_11;
  DeepmindContext* VAR_15 = VAR_14->dm_ctx;
  if (VAR_15->hooks.get_native_app(VAR_15->userdata)) {
    FUNC_3(0);
    FUNC_2(VAR_5);
  } else {
    FUNC_3(1);
    FUNC_2(VAR_6);
  }
  VAR_14->current_screen_rendered = 0;
  VAR_15->hooks.events.clear(VAR_15->userdata);
  *VAR_13 = 0;
  bool VAR_16 = 0;
  for (int VAR_17 = 0; VAR_17 < VAR_12 && !VAR_16; ++VAR_17) {
    double VAR_18 = FUNC_4();
    if (VAR_15->hooks.map_finished(VAR_15->userdata)) {

      double VAR_19 = FUNC_4();

      bool VAR_20 = FUNC_5(VAR_14);
      if (VAR_14->recording_ctx->error != VAR_1) {
        return VAR_2;
      }
      if (!VAR_20) {
        return VAR_4;
      }
      if (VAR_15->hooks.map_loaded(VAR_15->userdata) != 0) {
        return VAR_2;
      }
      VAR_15->hooks.set_map_finished(VAR_15->userdata, 0);

      double VAR_21 = FUNC_4();

      VAR_18 = VAR_21 - (VAR_19 - VAR_18);
    }

    VAR_14->step += 1;
    int VAR_22 = VAR_7.serverTime;
    FUNC_1();
    FUNC_0();
    int VAR_23 = VAR_7.serverTime;

    if (VAR_14->engine_frame_period_msec == 0) {
      VAR_14->total_engine_time_msec += VAR_23 - VAR_22;
    } else {
      VAR_14->total_engine_time_msec = VAR_14->step * VAR_14->engine_frame_period_msec;
    }

    VAR_16 = VAR_15->hooks.has_episode_finished(
        VAR_15->userdata,
        VAR_14->total_engine_time_msec / (VAR_9 * 1000.0));







    if (VAR_16) {
      FUNC_0();
    }

    if (VAR_8.state == VAR_0) {
      double VAR_24 = FUNC_4();
      double VAR_25 = VAR_24 - VAR_18;
      VAR_14->score += VAR_25;
      *VAR_13 += VAR_25;
    }
    VAR_14->is_map_loading = 0;
  }
  VAR_14->current_screen_rendered = 0;
  return VAR_16 ? VAR_4
                       : VAR_3;
}
