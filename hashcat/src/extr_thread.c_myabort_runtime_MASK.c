
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int run_main_level1; int run_main_level2; int run_main_level3; int run_thread_level1; int run_thread_level2; int devices_status; } ;
typedef TYPE_1__ status_ctx_t ;
struct TYPE_5__ {TYPE_1__* status_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int VAR_0 ;

int FUNC_0 (hashcat_ctx_t *VAR_1)
{
  status_ctx_t *VAR_2 = VAR_1->status_ctx;

  VAR_2->devices_status = VAR_0;

  VAR_2->run_main_level1 = 0;
  VAR_2->run_main_level2 = 0;
  VAR_2->run_main_level3 = 0;
  VAR_2->run_thread_level1 = 0;
  VAR_2->run_thread_level2 = 0;

  return 0;
}
