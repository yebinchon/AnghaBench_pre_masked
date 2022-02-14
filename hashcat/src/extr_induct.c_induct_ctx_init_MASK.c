
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int benchmark; int example_hashes; int keyspace; int left; int backend_info; int show; int stdout_flag; int speed_only; int progress_only; int usage; int version; scalar_t__ attack_mode; int * induction_dir; int session; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_8__ {int enabled; char* root_directory; } ;
typedef TYPE_2__ induct_ctx_t ;
struct TYPE_9__ {TYPE_1__* user_options; TYPE_2__* induct_ctx; TYPE_4__* folder_config; } ;
typedef TYPE_3__ hashcat_ctx_t ;
struct TYPE_10__ {int session_dir; } ;
typedef TYPE_4__ folder_config_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_3__*,char*,char*,char*,...) ;
 int FUNC_1 (char**,char*,int ,int ,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;

int FUNC_9 (hashcat_ctx_t *VAR_5)
{
  folder_config_t *VAR_6 = VAR_5->folder_config;
  induct_ctx_t *VAR_7 = VAR_5->induct_ctx;
  user_options_t *VAR_8 = VAR_5->user_options;

  VAR_7->enabled = 0;

  if (VAR_8->benchmark == 1) return 0;
  if (VAR_8->example_hashes == 1) return 0;
  if (VAR_8->keyspace == 1) return 0;
  if (VAR_8->left == 1) return 0;
  if (VAR_8->backend_info == 1) return 0;
  if (VAR_8->show == 1) return 0;
  if (VAR_8->stdout_flag == 1) return 0;
  if (VAR_8->speed_only == 1) return 0;
  if (VAR_8->progress_only == 1) return 0;
  if (VAR_8->usage == 1) return 0;
  if (VAR_8->version == 1) return 0;

  if (VAR_8->attack_mode != VAR_0) return 0;

  VAR_7->enabled = 1;

  if (VAR_8->induction_dir == ((void*)0))
  {
    char *VAR_9;

    FUNC_1 (&VAR_9, "%s/%s.%s", VAR_6->session_dir, VAR_8->session, VAR_3);

    if (FUNC_6 (VAR_9) == -1)
    {
      if (VAR_4 == VAR_1)
      {

      }
      else if (VAR_4 == VAR_2)
      {
        char *VAR_10;

        FUNC_1 (&VAR_10, "%s/%s.induct.%d", VAR_6->session_dir, VAR_8->session, (int) FUNC_8 (((void*)0)));

        if (FUNC_5 (VAR_9, VAR_10) != 0)
        {
          FUNC_0 (VAR_5, "Rename directory %s to %s: %s", VAR_9, VAR_10, FUNC_7 (VAR_4));

          return -1;
        }

        FUNC_3 (VAR_10);
      }
      else
      {
        FUNC_0 (VAR_5, "%s: %s", VAR_9, FUNC_7 (VAR_4));

        return -1;
      }
    }

    if (FUNC_2 (VAR_9, 0700) == -1)
    {
      FUNC_0 (VAR_5, "%s: %s", VAR_9, FUNC_7 (VAR_4));

      return -1;
    }

    VAR_7->root_directory = VAR_9;
  }
  else
  {
    VAR_7->root_directory = FUNC_4 (VAR_8->induction_dir);
  }

  return 0;
}
