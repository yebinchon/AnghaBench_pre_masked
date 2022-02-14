
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_17__ {int (* MakeCurrent ) () ;} ;
struct TYPE_13__ {int (* clear ) (int ) ;} ;
struct TYPE_14__ {int (* map_loaded ) (int ) ;int (* start ) (int ,int,int) ;TYPE_1__ events; int (* set_error_message ) (int ,char*) ;} ;
struct TYPE_16__ {int userdata; TYPE_2__ hooks; } ;
struct TYPE_15__ {int current_screen_rendered; int map_loaded; double total_engine_time_msec; double score; int first_start; int is_map_loading; scalar_t__ is_client_only; scalar_t__ is_server; scalar_t__ step; scalar_t__ is_connecting; int init_called; TYPE_4__* dm_ctx; } ;
struct TYPE_12__ {scalar_t__ state; } ;
typedef TYPE_3__ GameContext ;
typedef TYPE_4__ DeepmindContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_11__ VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_6__ VAR_4 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int,int) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(void* VAR_5, int VAR_6, int VAR_7) {

  VAR_7 = (VAR_7 < 0) ? VAR_7 + 1 + VAR_2 : VAR_7;
  GameContext* VAR_8 = VAR_5;
  DeepmindContext* VAR_9 = VAR_8->dm_ctx;
  if (!VAR_8->init_called) {
    VAR_9->hooks.set_error_message(VAR_9->userdata,
                                 "'init' must be called before 'start. See "
                                 "documentation in env_c_api.h'\n");

    return 1;
  }
  VAR_8->current_screen_rendered = 0;
  if (VAR_8->is_connecting) {
    VAR_4.MakeCurrent();
    int VAR_10 = FUNC_1(VAR_8);
    if (VAR_10 == 0 && !VAR_8->map_loaded) {
      VAR_10 = VAR_9->hooks.map_loaded(VAR_9->userdata);
      VAR_8->map_loaded = 1;
    }
    return VAR_10;
  }
  VAR_9->hooks.events.clear(VAR_9->userdata);
  VAR_8->step = 0;
  VAR_8->total_engine_time_msec = 0.0;
  VAR_8->score = 0.0;

  int VAR_11 = VAR_9->hooks.start(VAR_9->userdata, VAR_6, VAR_7);
  if (VAR_11 != 0) {
    return VAR_11;
  }

  if (!VAR_8->first_start) {
    int VAR_12 = FUNC_2(VAR_8);
    if (VAR_12 != 0) {
      return VAR_12;
    }
    VAR_8->first_start = 1;
  }

  VAR_4.MakeCurrent();
  if (VAR_8->is_client_only) {
    FUNC_0(VAR_8);
  } else if (VAR_8->is_server) {
    if (!FUNC_4(VAR_8)) {
      return 1;
    }
  } else {
    if (!FUNC_3(VAR_8)) {
      return 1;
    }
    if (VAR_9->hooks.map_loaded(VAR_9->userdata) != 0) {
      return 1;
    }
  }

  VAR_8->is_map_loading = 0;
  if (VAR_8->is_client_only) {
    return VAR_3.state < VAR_0 ? VAR_1 : 0;
  }
  return 0;
}
