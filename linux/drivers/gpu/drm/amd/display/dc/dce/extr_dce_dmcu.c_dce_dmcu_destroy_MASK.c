
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dmcu {int dummy; } ;
struct TYPE_4__ {scalar_t__ dmcu_state; TYPE_1__* funcs; } ;
struct dce_dmcu {TYPE_2__ base; } ;
struct TYPE_3__ {int (* set_psr_enable ) (struct dmcu*,int,int) ;} ;


 scalar_t__ VAR_0 ;
 struct dce_dmcu* FUNC_0 (struct dmcu*) ;
 int FUNC_1 (struct dce_dmcu*) ;
 int FUNC_2 (struct dmcu*,int,int) ;

void FUNC_3(struct dmcu **VAR_1)
{
 struct dce_dmcu *VAR_2 = FUNC_0(*VAR_1);

 if (VAR_2->base.dmcu_state == VAR_0)
  VAR_2->base.funcs->set_psr_enable(*VAR_1, 0, 1);

 FUNC_1(VAR_2);
 *VAR_1 = ((void*)0);
}
