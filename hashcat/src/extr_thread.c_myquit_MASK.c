
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ devices_status; int run_main_level1; int run_main_level2; int run_main_level3; int run_thread_level1; int run_thread_level2; } ;
typedef TYPE_1__ status_ctx_t ;
struct TYPE_5__ {TYPE_1__* status_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_0 (hashcat_ctx_t *VAR_3)
{
  status_ctx_t *VAR_4 = VAR_3->status_ctx;

  if (VAR_4->devices_status != VAR_2 && VAR_4->devices_status != VAR_0) return -1;

  VAR_4->devices_status = VAR_1;

  VAR_4->run_main_level1 = 0;
  VAR_4->run_main_level2 = 0;
  VAR_4->run_main_level3 = 0;
  VAR_4->run_thread_level1 = 0;
  VAR_4->run_thread_level2 = 0;

  return 0;
}
