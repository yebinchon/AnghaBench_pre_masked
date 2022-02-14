
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int benchmark; int example_hashes; int keyspace; int left; int backend_info; int show; int stdout_flag; int speed_only; int progress_only; int usage; int version; int restore_disable; int restore; int * restore_file_path; int session; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_13__ {scalar_t__ version; int argv; int argc; } ;
typedef TYPE_2__ restore_data_t ;
struct TYPE_14__ {int enabled; int argc; char** argv; int restore_execute; TYPE_2__* rd; int new_restore_file; int eff_restore_file; } ;
typedef TYPE_3__ restore_ctx_t ;
struct TYPE_15__ {TYPE_1__* user_options; TYPE_3__* restore_ctx; TYPE_5__* folder_config; } ;
typedef TYPE_4__ hashcat_ctx_t ;
struct TYPE_16__ {int session_dir; } ;
typedef TYPE_5__ folder_config_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (int *,char*,int *,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int ,int ) ;
 int FUNC_6 (TYPE_4__*) ;

int FUNC_7 (hashcat_ctx_t *VAR_1, int VAR_2, char **VAR_3)
{
  folder_config_t *VAR_4 = VAR_1->folder_config;
  restore_ctx_t *VAR_5 = VAR_1->restore_ctx;
  user_options_t *VAR_6 = VAR_1->user_options;

  VAR_5->enabled = 0;

  if (VAR_6->benchmark == 1) return 0;
  if (VAR_6->example_hashes == 1) return 0;
  if (VAR_6->keyspace == 1) return 0;
  if (VAR_6->left == 1) return 0;
  if (VAR_6->backend_info == 1) return 0;
  if (VAR_6->show == 1) return 0;
  if (VAR_6->stdout_flag == 1) return 0;
  if (VAR_6->speed_only == 1) return 0;
  if (VAR_6->progress_only == 1) return 0;
  if (VAR_6->usage == 1) return 0;
  if (VAR_6->version == 1) return 0;
  if (VAR_6->restore_disable == 1) return 0;

  if (VAR_2 == 0) return 0;
  if (VAR_3 == ((void*)0)) return 0;

  if (VAR_6->restore_file_path == ((void*)0))
  {
    FUNC_1 (&VAR_5->eff_restore_file, "%s/%s.restore", &VAR_4->session_dir, VAR_6->session);
    FUNC_1 (&VAR_5->new_restore_file, "%s/%s.restore.new", &VAR_4->session_dir, VAR_6->session);
  }
  else
  {
    VAR_5->eff_restore_file = FUNC_2 (VAR_6->restore_file_path);
    FUNC_1 (&VAR_5->new_restore_file, "%s.new", VAR_6->restore_file_path);
  }

  VAR_5->argc = VAR_2;
  VAR_5->argv = VAR_3;

  if (FUNC_3 (VAR_1) == -1) return -1;

  VAR_5->enabled = 1;

  VAR_5->restore_execute = 0;

  if (VAR_6->restore == 1)
  {
    if (FUNC_4 (VAR_1) == -1) return -1;

    restore_data_t *VAR_7 = VAR_5->rd;

    if (VAR_7->version < VAR_0)
    {
      FUNC_0 (VAR_1, "Incompatible restore-file version.");

      return -1;
    }

    FUNC_6 (VAR_1);

    if (FUNC_5 (VAR_1, VAR_7->argc, VAR_7->argv) == -1) return -1;

    VAR_5->restore_execute = 1;
  }

  return 0;
}
