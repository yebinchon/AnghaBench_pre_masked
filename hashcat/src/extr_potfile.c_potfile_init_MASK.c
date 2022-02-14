
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int benchmark; int example_hashes; int keyspace; int backend_info; int stdout_flag; int speed_only; int progress_only; int usage; int version; int potfile_disable; int * potfile_path; } ;
typedef TYPE_2__ user_options_t ;
typedef int u8 ;
struct TYPE_9__ {int * pfp; } ;
struct TYPE_11__ {int enabled; char* filename; int * tmp_buf; int * out_buf; TYPE_1__ fp; } ;
typedef TYPE_3__ potfile_ctx_t ;
struct TYPE_12__ {int potfile_disable; } ;
typedef TYPE_4__ hashconfig_t ;
struct TYPE_13__ {TYPE_2__* user_options; TYPE_3__* potfile_ctx; TYPE_4__* hashconfig; TYPE_6__* folder_config; } ;
typedef TYPE_5__ hashcat_ctx_t ;
struct TYPE_14__ {int profile_dir; } ;
typedef TYPE_6__ folder_config_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,char*,...) ;
 int FUNC_1 (char**,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;
 char* FUNC_5 (int *) ;

int FUNC_6 (hashcat_ctx_t *VAR_1)
{
  const folder_config_t *VAR_2 = VAR_1->folder_config;
  const hashconfig_t *VAR_3 = VAR_1->hashconfig;
        potfile_ctx_t *VAR_4 = VAR_1->potfile_ctx;
  const user_options_t *VAR_5 = VAR_1->user_options;

  VAR_4->enabled = 0;

  if (VAR_5->benchmark == 1) return 0;
  if (VAR_5->example_hashes == 1) return 0;
  if (VAR_5->keyspace == 1) return 0;
  if (VAR_5->backend_info == 1) return 0;
  if (VAR_5->stdout_flag == 1) return 0;
  if (VAR_5->speed_only == 1) return 0;
  if (VAR_5->progress_only == 1) return 0;
  if (VAR_5->usage == 1) return 0;
  if (VAR_5->version == 1) return 0;
  if (VAR_5->potfile_disable == 1) return 0;

  if (VAR_3->potfile_disable == 1) return 0;

  VAR_4->enabled = 1;

  if (VAR_5->potfile_path == ((void*)0))
  {
    VAR_4->fp.pfp = ((void*)0);

    FUNC_1 (&VAR_4->filename, "%s/hashcat.potfile", VAR_2->profile_dir);
  }
  else
  {
    VAR_4->filename = FUNC_5 (VAR_5->potfile_path);
    VAR_4->fp.pfp = ((void*)0);
  }



  u8 *VAR_6 = (u8 *) FUNC_4 (VAR_0);

  VAR_4->out_buf = VAR_6;



  u8 *VAR_7 = (u8 *) FUNC_4 (VAR_0);

  VAR_4->tmp_buf = VAR_7;



  if (VAR_5->potfile_path == ((void*)0))
  {
    char *VAR_8;

    FUNC_1 (&VAR_8, "%s/hashcat.pot", VAR_2->profile_dir);

    if (FUNC_2 (VAR_8) == 1)
    {
      FUNC_0 (VAR_1, "Old potfile detected: %s", VAR_8);
      FUNC_0 (VAR_1, "New potfile is: %s ", VAR_4->filename);
      FUNC_0 (VAR_1, ((void*)0));
    }

    FUNC_3 (VAR_8);
  }

  return 0;
}
