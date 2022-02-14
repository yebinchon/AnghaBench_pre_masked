
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int timer_running; } ;
typedef TYPE_1__ status_ctx_t ;
struct TYPE_5__ {TYPE_1__* status_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 double FUNC_0 (int ) ;

double FUNC_1 (const hashcat_ctx_t *VAR_0)
{
  const status_ctx_t *VAR_1 = VAR_0->status_ctx;

  double VAR_2 = FUNC_0 (VAR_1->timer_running);

  return VAR_2;
}
