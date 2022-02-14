
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ devices_status; int checkpoint_shutdown; int run_main_level1; int run_main_level2; int run_main_level3; int run_thread_level1; int run_thread_level2; } ;
typedef TYPE_1__ status_ctx_t ;
struct TYPE_7__ {int enabled; } ;
typedef TYPE_2__ restore_ctx_t ;
struct TYPE_8__ {TYPE_2__* restore_ctx; TYPE_1__* status_ctx; } ;
typedef TYPE_3__ hashcat_ctx_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*) ;

int FUNC_1 (hashcat_ctx_t *VAR_1)
{
  status_ctx_t *VAR_2 = VAR_1->status_ctx;

  if (VAR_2->devices_status != VAR_0) return -1;



  restore_ctx_t *VAR_3 = VAR_1->restore_ctx;

  if (VAR_3->enabled == 0)
  {
    FUNC_0 (VAR_1, "This feature is disabled when --restore-disable is specified.");

    return -1;
  }



  if (VAR_2->checkpoint_shutdown == 0)
  {
    VAR_2->checkpoint_shutdown = 1;

    VAR_2->run_main_level1 = 0;
    VAR_2->run_main_level2 = 0;
    VAR_2->run_main_level3 = 0;
    VAR_2->run_thread_level1 = 0;
    VAR_2->run_thread_level2 = 1;
  }
  else
  {
    VAR_2->checkpoint_shutdown = 0;

    VAR_2->run_main_level1 = 1;
    VAR_2->run_main_level2 = 1;
    VAR_2->run_main_level3 = 1;
    VAR_2->run_thread_level1 = 1;
    VAR_2->run_thread_level2 = 1;
  }

  return 0;
}
