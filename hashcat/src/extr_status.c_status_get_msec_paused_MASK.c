
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double msec_paused; scalar_t__ devices_status; int timer_paused; } ;
typedef TYPE_1__ status_ctx_t ;
struct TYPE_5__ {TYPE_1__* status_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 scalar_t__ VAR_0 ;
 double FUNC_0 (int ) ;

double FUNC_1 (const hashcat_ctx_t *VAR_1)
{
  const status_ctx_t *VAR_2 = VAR_1->status_ctx;

  double VAR_3 = VAR_2->msec_paused;

  if (VAR_2->devices_status == VAR_0)
  {
    double VAR_4 = FUNC_0 (VAR_2->timer_paused);

    VAR_3 += VAR_4;
  }

  return VAR_3;
}
