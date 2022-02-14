
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ runtime; } ;
typedef TYPE_1__ user_options_t ;
typedef scalar_t__ time_t ;
struct TYPE_6__ {double msec_paused; scalar_t__ devices_status; scalar_t__ runtime_start; int timer_paused; } ;
typedef TYPE_2__ status_ctx_t ;
struct TYPE_7__ {TYPE_1__* user_options; TYPE_2__* status_ctx; } ;
typedef TYPE_3__ hashcat_ctx_t ;


 scalar_t__ VAR_0 ;
 double FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;

int FUNC_2 (const hashcat_ctx_t *VAR_1)
{
  const status_ctx_t *VAR_2 = VAR_1->status_ctx;
  const user_options_t *VAR_3 = VAR_1->user_options;

  double VAR_4 = VAR_2->msec_paused;

  if (VAR_2->devices_status == VAR_0)
  {
    double VAR_5 = FUNC_0 (VAR_2->timer_paused);

    VAR_4 += VAR_5;
  }

  time_t VAR_6;

  FUNC_1 (&VAR_6);

  const int VAR_7 = (int) (VAR_2->runtime_start
                                + VAR_3->runtime
                                + (VAR_4 / 1000)
                                - VAR_6);

  return VAR_7;
}
