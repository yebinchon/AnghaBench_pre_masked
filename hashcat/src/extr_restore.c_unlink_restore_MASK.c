
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ devices_status; int run_thread_level1; } ;
typedef TYPE_1__ status_ctx_t ;
struct TYPE_6__ {int enabled; int new_restore_file; int eff_restore_file; } ;
typedef TYPE_2__ restore_ctx_t ;
struct TYPE_7__ {TYPE_1__* status_ctx; TYPE_2__* restore_ctx; } ;
typedef TYPE_3__ hashcat_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

void FUNC_1 (hashcat_ctx_t *VAR_2)
{
  restore_ctx_t *VAR_3 = VAR_2->restore_ctx;
  status_ctx_t *VAR_4 = VAR_2->status_ctx;

  if (VAR_3->enabled == 0) return;

  if ((VAR_4->devices_status == VAR_1) && (VAR_4->run_thread_level1 == 1))
  {
    FUNC_0 (VAR_3->eff_restore_file);
    FUNC_0 (VAR_3->new_restore_file);
  }

  if (VAR_4->devices_status == VAR_0)
  {
    FUNC_0 (VAR_3->eff_restore_file);
    FUNC_0 (VAR_3->new_restore_file);
  }
}
