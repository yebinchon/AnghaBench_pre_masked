
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int suspended; int suspend_save_flag; int saved_mask; int (* restore_irqen ) (int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(void)
{
 VAR_0->suspended = 0;


 if (!VAR_0->suspend_save_flag)
  return;

 VAR_0->suspend_save_flag = 0;






 VAR_0->restore_irqen(VAR_0->saved_mask);
}
