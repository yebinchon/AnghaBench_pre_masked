
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int session; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_9__ {int pidfile_written; int filename; } ;
typedef TYPE_2__ pidfile_ctx_t ;
struct TYPE_10__ {TYPE_1__* user_options; TYPE_2__* pidfile_ctx; TYPE_4__* folder_config; } ;
typedef TYPE_3__ hashcat_ctx_t ;
struct TYPE_11__ {int session_dir; } ;
typedef TYPE_4__ folder_config_t ;


 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;

int FUNC_3 (hashcat_ctx_t *VAR_0)
{
  folder_config_t *VAR_1 = VAR_0->folder_config;
  pidfile_ctx_t *VAR_2 = VAR_0->pidfile_ctx;
  user_options_t *VAR_3 = VAR_0->user_options;

  FUNC_0 (&VAR_2->filename, "%s/%s.pid", VAR_1->session_dir, VAR_3->session);

  VAR_2->pidfile_written = 0;

  const int VAR_4 = FUNC_1 (VAR_0);

  if (VAR_4 == -1) return -1;

  const int VAR_5 = FUNC_2 (VAR_0);

  if (VAR_5 == 0) VAR_2->pidfile_written = 1;

  return 0;
}
