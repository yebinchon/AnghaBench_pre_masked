
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dmcu_is_running; TYPE_1__* funcs; } ;
struct dce_abm {TYPE_2__ base; } ;
struct abm {int dummy; } ;
struct TYPE_3__ {int (* set_abm_immediate_disable ) (struct abm*) ;} ;


 struct dce_abm* FUNC_0 (struct abm*) ;
 int FUNC_1 (struct dce_abm*) ;
 int FUNC_2 (struct abm*) ;

void FUNC_3(struct abm **VAR_0)
{
 struct dce_abm *VAR_1 = FUNC_0(*VAR_0);

 if (VAR_1->base.dmcu_is_running == 1)
  VAR_1->base.funcs->set_abm_immediate_disable(*VAR_0);

 FUNC_1(VAR_1);
 *VAR_0 = ((void*)0);
}
