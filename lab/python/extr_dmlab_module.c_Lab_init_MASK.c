
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ (* setting ) (int ,char*,char*) ;char const* (* error_message ) (int ) ;scalar_t__ (* init ) (int ) ;int (* observation_count ) (int ) ;char* (* observation_name ) (int ,int) ;} ;
struct TYPE_10__ {int runfiles_path; } ;
struct TYPE_7__ {int * write_level_to_cache; int * fetch_level_from_cache; int * context; } ;
struct TYPE_9__ {char* optional_temp_folder; TYPE_1__ level_cache_params; int renderer; int runfiles_path; } ;
struct TYPE_8__ {int observation_count; int* observation_indices; int context; TYPE_6__* env_c_api; scalar_t__ episode; int status; int * level_cache_context; } ;
typedef int Py_ssize_t ;
typedef int PyObject ;
typedef TYPE_2__ LabObject ;
typedef TYPE_3__ DeepMindLabLaunchParams ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,char*,char**,char**,int *,int **,int *,int **,char**,int **,char**) ;
 scalar_t__ FUNC_1 (int *,int *,int **,int **) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,char const*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_5 (char*) ;
 int * FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int VAR_6 ;
 char* FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * VAR_7 ;
 int* FUNC_11 (int,int) ;
 scalar_t__ FUNC_12 (TYPE_3__*,TYPE_6__*,int *) ;
 int VAR_8 ;
 TYPE_4__* FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (char*,char const*) ;
 scalar_t__ FUNC_15 (int ,char*,char*) ;
 char const* FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 char* FUNC_18 (int ,int) ;
 char const* FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ,char*,char*) ;
 char const* FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int ,char*,char*) ;
 char const* FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (int ,char const*,char const*) ;
 char const* FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (int ) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_27(PyObject* VAR_10, PyObject* VAR_11, PyObject* VAR_12) {
  LabObject* VAR_13 = (LabObject*)VAR_10;
  char* VAR_14;
  char* VAR_15 = ((void*)0);
  char* VAR_16 = ((void*)0);
  PyObject *VAR_17 = ((void*)0), *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);

  static char* VAR_20[] = {
    "level",
    "observations",
    "config",
    "renderer",
    "level_cache",
    "temp_folder",
    ((void*)0)
  };

  if (VAR_13->env_c_api == ((void*)0)) {
    FUNC_4(VAR_4, "RL API not setup");
    return -1;
  }

  if (!FUNC_0(VAR_11, VAR_12, "sO!|O!sOs", VAR_20,
                                   &VAR_14,
                                   &VAR_6, &VAR_17,
                                   &VAR_3, &VAR_18,
                                   &VAR_15, &VAR_19, &VAR_16)) {
    return -1;
  }

  VAR_13->observation_count = FUNC_7(VAR_17);
  VAR_13->observation_indices = FUNC_11(VAR_13->observation_count, sizeof(int));
  if (VAR_13->observation_indices == ((void*)0)) {
    FUNC_3();
    return -1;
  }
  {
    PyObject* VAR_21 = ((void*)0);


    DeepMindLabLaunchParams VAR_22 = {};
    VAR_22.runfiles_path = FUNC_13(VAR_21)->runfiles_path;
    VAR_22.renderer = VAR_1;
    if (VAR_15 != ((void*)0) && VAR_15[0] != '\0') {
      if (FUNC_14(VAR_15, "hardware") == 0) {
        VAR_22.renderer = VAR_0;
      } else if (FUNC_14(VAR_15, "software") != 0) {
        FUNC_2(VAR_4,
                     "Failed to set renderer must be \"hardware\" or "
                     "\"software\" actual \"%s\"!",
                     VAR_15);
        return -1;
      }
    }

    if (VAR_19 != ((void*)0) && VAR_19 != VAR_7) {
      FUNC_10(VAR_19);
      VAR_22.level_cache_params.context = VAR_19;
      VAR_22.level_cache_params.fetch_level_from_cache =
          &VAR_8;
      VAR_22.level_cache_params.write_level_to_cache = &VAR_9;
      VAR_13->level_cache_context = VAR_19;
    }

    if (VAR_16 != ((void*)0)) {
      VAR_22.optional_temp_folder = VAR_16;
    }

    if (FUNC_12(&VAR_22, VAR_13->env_c_api, &VAR_13->context) != 0) {
      FUNC_4(VAR_4, "Failed to connect RL API");
      return -1;
    }
    VAR_13->status = VAR_2;
    VAR_13->episode = 0;
  }

  if (VAR_13->env_c_api->setting(VAR_13->context, "levelName", VAR_14) != 0) {
    FUNC_2(VAR_4, "Invalid levelName flag '%s' - \"%s\"",
                 VAR_14, VAR_13->env_c_api->error_message(VAR_13->context));
    return -1;
  }

  if (VAR_13->env_c_api->setting(VAR_13->context, "fps", "60") != 0) {
    FUNC_2(VAR_4, "Failed to set fps - \"%s\"",
                 VAR_13->env_c_api->error_message(VAR_13->context));
    return -1;
  }

  if (VAR_18 != ((void*)0)) {
    PyObject *VAR_23, *VAR_24;
    Py_ssize_t VAR_25 = 0;
    const char *VAR_26, *VAR_27;

    while (FUNC_1(VAR_18, &VAR_25, &VAR_23, &VAR_24)) {




      VAR_26 = FUNC_8(VAR_23);
      VAR_27 = FUNC_8(VAR_24);

      if (VAR_26 == ((void*)0) || VAR_27 == ((void*)0)) {
        return -1;
      }
      if (VAR_13->env_c_api->setting(VAR_13->context, VAR_26, VAR_27) != 0) {
        FUNC_2(VAR_4,
                     "Failed to apply setting '%s = %s' - \"%s\"", VAR_26, VAR_27,
                     VAR_13->env_c_api->error_message(VAR_13->context));
        return -1;
      }
    }
  }

  if (VAR_13->env_c_api->init(VAR_13->context) != 0) {
    FUNC_2(VAR_4, "Failed to init environment - \"%s\"",
                 VAR_13->env_c_api->error_message(VAR_13->context));
    return -1;
  }

  const char* VAR_28;
  int VAR_29 = VAR_13->env_c_api->observation_count(VAR_13->context);
  for (int VAR_30 = 0; VAR_30 < VAR_13->observation_count; ++VAR_30) {



    VAR_28 = FUNC_8(FUNC_6(VAR_17, VAR_30));

    if (VAR_28 == ((void*)0)) {
      return -1;
    }
    int VAR_31;
    for (VAR_31 = 0; VAR_31 < VAR_29; ++VAR_31) {
      if (FUNC_14(VAR_13->env_c_api->observation_name(VAR_13->context, VAR_31),
                 VAR_28) == 0) {
        VAR_13->observation_indices[VAR_30] = VAR_31;
        break;
      }
    }
    if (VAR_31 == VAR_29) {
      FUNC_2(VAR_5, "Unknown observation '%s'.",
                   VAR_28);
      return -1;
    }
  }

  return 0;
}
