
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int run_main_level1; int run_main_level2; int run_main_level3; int run_thread_level1; int run_thread_level2; int shutdown_inner; int shutdown_outer; int checkpoint_shutdown; int mux_hwmon; int mux_display; int mux_counter; int mux_dispatcher; int * hashcat_status_final; int devices_status; } ;
typedef TYPE_1__ status_ctx_t ;
typedef int hashcat_status_t ;
struct TYPE_5__ {TYPE_1__* status_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2 (hashcat_ctx_t *VAR_1)
{
  status_ctx_t *VAR_2 = VAR_1->status_ctx;

  VAR_2->devices_status = VAR_0;

  VAR_2->run_main_level1 = 1;
  VAR_2->run_main_level2 = 1;
  VAR_2->run_main_level3 = 1;
  VAR_2->run_thread_level1 = 1;
  VAR_2->run_thread_level2 = 1;

  VAR_2->shutdown_inner = 0;
  VAR_2->shutdown_outer = 0;

  VAR_2->checkpoint_shutdown = 0;

  VAR_2->hashcat_status_final = (hashcat_status_t *) FUNC_1 (sizeof (hashcat_status_t));

  FUNC_0 (VAR_2->mux_dispatcher);
  FUNC_0 (VAR_2->mux_counter);
  FUNC_0 (VAR_2->mux_display);
  FUNC_0 (VAR_2->mux_hwmon);

  return 0;
}
