
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cec_pin {scalar_t__ state; int timer; int adap; TYPE_1__* ops; int work_irq_change; } ;
struct TYPE_2__ {int (* disable_irq ) (int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct cec_pin*) ;
 int FUNC_2 (struct cec_pin*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct cec_pin *VAR_3)
{
 if (VAR_3->state != VAR_1)
  return;

 FUNC_0(&VAR_3->work_irq_change, VAR_0);
 VAR_3->ops->disable_irq(VAR_3->adap);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
 FUNC_3(&VAR_3->timer, FUNC_4(0), VAR_2);
}
