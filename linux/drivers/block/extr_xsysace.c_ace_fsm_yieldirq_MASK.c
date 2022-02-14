
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ace_device {scalar_t__ fsm_continue_flag; int fsm_tasklet; int irq; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct ace_device *VAR_0)
{
 FUNC_0(VAR_0->dev, "ace_fsm_yieldirq()\n");

 if (!VAR_0->irq)

  FUNC_1(&VAR_0->fsm_tasklet);
 VAR_0->fsm_continue_flag = 0;
}
