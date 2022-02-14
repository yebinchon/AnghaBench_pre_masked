
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ devices_status; int timer_paused; } ;
typedef TYPE_1__ status_ctx_t ;
struct TYPE_5__ {TYPE_1__* status_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

int FUNC_1 (hashcat_ctx_t *VAR_2)
{
  status_ctx_t *VAR_3 = VAR_2->status_ctx;

  if (VAR_3->devices_status != VAR_1) return -1;

  FUNC_0 (&VAR_3->timer_paused);

  VAR_3->devices_status = VAR_0;

  return 0;
}
