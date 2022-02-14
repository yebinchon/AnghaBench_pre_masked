
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int logfile_disable; int session; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_7__ {char* subid; char* topid; int enabled; int logfile; } ;
typedef TYPE_2__ logfile_ctx_t ;
struct TYPE_8__ {TYPE_1__* user_options; TYPE_2__* logfile_ctx; TYPE_4__* folder_config; } ;
typedef TYPE_3__ hashcat_ctx_t ;
struct TYPE_9__ {int session_dir; } ;
typedef TYPE_4__ folder_config_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2 (hashcat_ctx_t *VAR_1)
{
  folder_config_t *VAR_2 = VAR_1->folder_config;
  logfile_ctx_t *VAR_3 = VAR_1->logfile_ctx;
  user_options_t *VAR_4 = VAR_1->user_options;

  if (VAR_4->logfile_disable == 1) return 0;

  FUNC_0 (&VAR_3->logfile, "%s/%s.log", VAR_2->session_dir, VAR_4->session);

  VAR_3->subid = (char *) FUNC_1 (VAR_0);
  VAR_3->topid = (char *) FUNC_1 (VAR_0);

  VAR_3->enabled = 1;

  return 0;
}
