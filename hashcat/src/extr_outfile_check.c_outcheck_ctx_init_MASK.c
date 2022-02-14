
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int keyspace; int benchmark; int example_hashes; int speed_only; int progress_only; int backend_info; scalar_t__ outfile_check_timer; int * outfile_check_dir; int session; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_9__ {int enabled; int * root_directory; } ;
typedef TYPE_2__ outcheck_ctx_t ;
struct TYPE_10__ {int outfile_check_disable; } ;
typedef TYPE_3__ hashconfig_t ;
struct TYPE_11__ {TYPE_1__* user_options; TYPE_2__* outcheck_ctx; TYPE_3__* hashconfig; TYPE_5__* folder_config; } ;
typedef TYPE_4__ hashcat_ctx_t ;
struct TYPE_12__ {int session_dir; } ;
typedef TYPE_5__ folder_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,char*,int *,int ) ;
 int FUNC_1 (int **,char*,int ,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

int FUNC_5 (hashcat_ctx_t *VAR_2)
{
  const folder_config_t *VAR_3 = VAR_2->folder_config;
  const hashconfig_t *VAR_4 = VAR_2->hashconfig;
        outcheck_ctx_t *VAR_5 = VAR_2->outcheck_ctx;
  const user_options_t *VAR_6 = VAR_2->user_options;

  VAR_5->enabled = 0;

  if (VAR_6->keyspace == 1) return 0;
  if (VAR_6->benchmark == 1) return 0;
  if (VAR_6->example_hashes == 1) return 0;
  if (VAR_6->speed_only == 1) return 0;
  if (VAR_6->progress_only == 1) return 0;
  if (VAR_6->backend_info == 1) return 0;

  if (VAR_4->outfile_check_disable == 1) return 0;

  if (VAR_6->outfile_check_timer == 0) return 0;

  if (VAR_6->outfile_check_dir == ((void*)0))
  {
    FUNC_1 (&VAR_5->root_directory, "%s/%s.%s", VAR_3->session_dir, VAR_6->session, VAR_0);
  }
  else
  {
    VAR_5->root_directory = VAR_6->outfile_check_dir;
  }

  VAR_5->enabled = 1;

  if (FUNC_3 (VAR_5->root_directory) == 0)
  {
    if (FUNC_2 (VAR_5->root_directory, 0700) == -1)
    {
      FUNC_0 (VAR_2, "%s: %s", VAR_5->root_directory, FUNC_4 (VAR_1));

      return -1;
    }
  }

  return 0;
}
