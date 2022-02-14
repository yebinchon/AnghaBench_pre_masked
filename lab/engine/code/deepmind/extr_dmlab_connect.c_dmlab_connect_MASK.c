
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int dmlabRecordingContext ;
struct TYPE_17__ {char* runfiles_path; int optional_temp_folder; int read_only_file_system; int file_reader_override; int level_cache_params; } ;
struct TYPE_13__ {int render_custom_view; int is_map_loading; int in_fov; int raycast; int update_rgba_texture; int save_model; int serialise_model; int serialised_model_size; int load_model; int deserialise_model; int total_time_seconds; int total_engine_time_msec; int engine_frame_period_msec; int execute_console_command; int add_bot; int screen_shape; int add_score; int player_score; } ;
struct TYPE_16__ {TYPE_3__* context; TYPE_2__ calls; } ;
struct TYPE_15__ {int release_context; int advance; int act_text; int act_continuous; int act_discrete; int act; int event; int event_count; int observation; int fps; int event_type_name; int event_type_count; int observation_spec; int observation_name; int observation_count; int action_text_name; int action_text_count; int action_continuous_bounds; int action_continuous_name; int action_continuous_count; int action_discrete_bounds; int action_discrete_name; int action_discrete_count; int environment_name; int error_message; int start; int list_property; int read_property; int write_property; int init; int setting; } ;
struct TYPE_12__ {int enabled; } ;
struct TYPE_14__ {int use_local_level_cache; int use_global_level_cache; int width; int height; int* map_frame_number_shape; TYPE_5__* dm_ctx; int runfiles_path; TYPE_1__ pbos; scalar_t__ map_frame_number_observation; int * recording_ctx; int level_cache_params; } ;
typedef TYPE_3__ GameContext ;
typedef TYPE_4__ EnvCApi ;
typedef TYPE_5__ DeepmindContext ;
typedef TYPE_6__ DeepMindLabLaunchParams ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ,TYPE_5__*,int ,int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 TYPE_5__* FUNC_3 () ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;

int FUNC_5(const DeepMindLabLaunchParams* VAR_49, EnvCApi* VAR_50,
                  void** VAR_51) {
  DeepmindContext* VAR_52 = FUNC_3();
  if (VAR_52 == ((void*)0)) {
    return 1;
  }

  GameContext* VAR_53 = FUNC_1(1, sizeof(GameContext));
  if (VAR_53 == ((void*)0)) {
    return 2;
  }

  if (VAR_49 == ((void*)0)) {
    return 3;
  }

  if (VAR_49->runfiles_path == ((void*)0) || VAR_49->runfiles_path[0] == '\0') {
    return 4;
  }

  dmlabRecordingContext* VAR_54 = FUNC_1(1, sizeof(dmlabRecordingContext));
  if (VAR_54 == ((void*)0)) {
    return 1;
  }

  *VAR_51 = VAR_53;

  FUNC_0(VAR_53->runfiles_path, VAR_49->runfiles_path,
             sizeof(VAR_53->runfiles_path));


  VAR_53->use_local_level_cache = 0;
  VAR_53->use_global_level_cache = 1;
  VAR_53->level_cache_params = VAR_49->level_cache_params;
  VAR_53->width = 320;
  VAR_53->height = 240;
  VAR_53->dm_ctx = VAR_52;
  VAR_53->recording_ctx = VAR_54;
  VAR_53->map_frame_number_shape[0] = 1;
  VAR_53->map_frame_number_observation = 0;
  VAR_53->pbos.enabled = 1;

  FUNC_4(VAR_50, 0, sizeof(EnvCApi));

  VAR_50->setting = VAR_39;
  VAR_50->init = VAR_25;
  VAR_50->write_property = VAR_42;
  VAR_50->read_property = VAR_34;
  VAR_50->list_property = VAR_27;
  VAR_50->start = VAR_40;
  VAR_50->error_message = VAR_18;
  VAR_50->environment_name = VAR_17;
  VAR_50->action_discrete_count = VAR_10;
  VAR_50->action_discrete_name = VAR_11;
  VAR_50->action_discrete_bounds = VAR_9;
  VAR_50->action_continuous_count = VAR_7;
  VAR_50->action_continuous_name = VAR_8;
  VAR_50->action_continuous_bounds = VAR_6;
  VAR_50->action_text_count = VAR_12;
  VAR_50->action_text_name = VAR_13;
  VAR_50->observation_count = VAR_30;
  VAR_50->observation_name = VAR_31;
  VAR_50->observation_spec = VAR_32;
  VAR_50->event_type_count = VAR_21;
  VAR_50->event_type_name = VAR_22;
  VAR_50->fps = VAR_23;
  VAR_50->observation = VAR_29;
  VAR_50->event_count = VAR_20;
  VAR_50->event = VAR_19;
  VAR_50->act = VAR_2;
  VAR_50->act_discrete = VAR_4;
  VAR_50->act_continuous = VAR_3;
  VAR_50->act_text = VAR_5;
  VAR_50->advance = VAR_14;
  VAR_50->release_context = VAR_16;
  VAR_53->dm_ctx->calls.player_score = VAR_45;
  VAR_53->dm_ctx->calls.add_score = VAR_1;
  VAR_53->dm_ctx->calls.screen_shape = VAR_46;
  VAR_53->dm_ctx->calls.add_bot = VAR_0;
  VAR_53->dm_ctx->calls.execute_console_command = VAR_44;
  VAR_53->dm_ctx->calls.engine_frame_period_msec = VAR_43;
  VAR_53->dm_ctx->calls.total_engine_time_msec = VAR_47;
  VAR_53->dm_ctx->calls.total_time_seconds = VAR_48;
  VAR_53->dm_ctx->calls.deserialise_model = VAR_15;
  VAR_53->dm_ctx->calls.load_model = VAR_28;
  VAR_53->dm_ctx->calls.serialised_model_size = VAR_38;
  VAR_53->dm_ctx->calls.serialise_model = VAR_37;
  VAR_53->dm_ctx->calls.save_model = VAR_36;
  VAR_53->dm_ctx->calls.update_rgba_texture = VAR_41;
  VAR_53->dm_ctx->calls.raycast = VAR_33;
  VAR_53->dm_ctx->calls.in_fov = VAR_24;
  VAR_53->dm_ctx->calls.is_map_loading = VAR_26;
  VAR_53->dm_ctx->calls.render_custom_view = VAR_35;
  VAR_53->dm_ctx->context = VAR_53;
  return FUNC_2(VAR_53->runfiles_path, VAR_53->dm_ctx,
                              VAR_49->file_reader_override,
                              VAR_49->read_only_file_system,
                              VAR_49->optional_temp_folder);
}
