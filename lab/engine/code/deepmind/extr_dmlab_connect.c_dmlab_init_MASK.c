
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* init ) (int ) ;int (* set_level_cache_settings ) (int ,int ,int ,int ) ;int (* set_error_message ) (int ,char*) ;scalar_t__ (* get_native_app ) (int ) ;} ;
struct TYPE_6__ {int userdata; TYPE_1__ hooks; } ;
struct TYPE_5__ {scalar_t__ vm_mode; int init_called; int level_cache_params; int use_global_level_cache; int use_local_level_cache; int command_line; scalar_t__ is_server; TYPE_3__* dm_ctx; } ;
typedef TYPE_2__ GameContext ;
typedef TYPE_3__ DeepmindContext ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (char*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_8(void* VAR_3) {
  GameContext* VAR_4 = VAR_3;
  DeepmindContext* VAR_5 = VAR_4->dm_ctx;
  if (VAR_5->hooks.get_native_app(VAR_5->userdata)) {
    FUNC_2(0);
    FUNC_1(VAR_0);
  } else {
    FUNC_2(1);
    FUNC_1(VAR_1);
  }

  if (VAR_4->vm_mode != VAR_2) {
    FUNC_0(VAR_4->command_line, sizeof(VAR_4->command_line),
             FUNC_7(" +set vm_cgame \"%d\""
                " +set vm_game \"%d\""
                " +set vm_ui \"%d\"",
                VAR_4->vm_mode, VAR_4->vm_mode, VAR_4->vm_mode));
  }
  if (VAR_4->is_server) {
    FUNC_0(VAR_4->command_line, sizeof(VAR_4->command_line),
             " +set sv_hostname \"server\""
             " +set sv_fps 20"
             " +set dedicated 1"
             " +set sv_host server"
             " +set sv_allowDownload 1");
  }
  if (VAR_4->init_called) {
    VAR_5->hooks.set_error_message(
        VAR_5->userdata, "'init' has already been called previously.\n");
    return 1;
  }
  VAR_4->init_called = 1;
  VAR_5->hooks.set_level_cache_settings(VAR_5->userdata, VAR_4->use_local_level_cache,
                                      VAR_4->use_global_level_cache,
                                      VAR_4->level_cache_params);
  return VAR_5->hooks.init(VAR_5->userdata);
}
