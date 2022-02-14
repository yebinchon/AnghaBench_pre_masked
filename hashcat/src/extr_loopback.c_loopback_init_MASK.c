
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int benchmark; int example_hashes; int keyspace; int left; int backend_info; int show; int stdout_flag; int speed_only; int progress_only; int usage; int version; } ;
typedef TYPE_2__ user_options_t ;
struct TYPE_6__ {int * pfp; } ;
struct TYPE_8__ {int enabled; char* filename; TYPE_1__ fp; } ;
typedef TYPE_3__ loopback_ctx_t ;
struct TYPE_9__ {TYPE_2__* user_options; TYPE_3__* loopback_ctx; } ;
typedef TYPE_4__ hashcat_ctx_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1 (hashcat_ctx_t *VAR_1)
{
  loopback_ctx_t *VAR_2 = VAR_1->loopback_ctx;
  user_options_t *VAR_3 = VAR_1->user_options;

  VAR_2->enabled = 0;

  if (VAR_3->benchmark == 1) return 0;
  if (VAR_3->example_hashes == 1) return 0;
  if (VAR_3->keyspace == 1) return 0;
  if (VAR_3->left == 1) return 0;
  if (VAR_3->backend_info == 1) return 0;
  if (VAR_3->show == 1) return 0;
  if (VAR_3->stdout_flag == 1) return 0;
  if (VAR_3->speed_only == 1) return 0;
  if (VAR_3->progress_only == 1) return 0;
  if (VAR_3->usage == 1) return 0;
  if (VAR_3->version == 1) return 0;

  VAR_2->enabled = 1;
  VAR_2->fp.pfp = ((void*)0);
  VAR_2->filename = (char *) FUNC_0 (VAR_0);

  return 0;
}
