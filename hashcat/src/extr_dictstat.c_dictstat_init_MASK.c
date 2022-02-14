
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int benchmark; int example_hashes; int keyspace; int left; int backend_info; int show; int usage; int version; scalar_t__ attack_mode; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_7__ {TYPE_1__* user_options; TYPE_3__* folder_config; TYPE_4__* dictstat_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;
struct TYPE_8__ {int profile_dir; } ;
typedef TYPE_3__ folder_config_t ;
typedef int dictstat_t ;
struct TYPE_9__ {int enabled; int filename; scalar_t__ cnt; int * base; } ;
typedef TYPE_4__ dictstat_ctx_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;

int FUNC_2 (hashcat_ctx_t *VAR_3)
{
  dictstat_ctx_t *VAR_4 = VAR_3->dictstat_ctx;
  folder_config_t *VAR_5 = VAR_3->folder_config;
  user_options_t *VAR_6 = VAR_3->user_options;

  VAR_4->enabled = 0;

  if (VAR_6->benchmark == 1) return 0;
  if (VAR_6->example_hashes == 1) return 0;
  if (VAR_6->keyspace == 1) return 0;
  if (VAR_6->left == 1) return 0;
  if (VAR_6->backend_info == 1) return 0;
  if (VAR_6->show == 1) return 0;
  if (VAR_6->usage == 1) return 0;
  if (VAR_6->version == 1) return 0;

  if (VAR_6->attack_mode == VAR_0) return 0;

  VAR_4->enabled = 1;
  VAR_4->base = (dictstat_t *) FUNC_1 (VAR_2, sizeof (dictstat_t));
  VAR_4->cnt = 0;

  FUNC_0 (&VAR_4->filename, "%s/%s", VAR_5->profile_dir, VAR_1);

  return 0;
}
