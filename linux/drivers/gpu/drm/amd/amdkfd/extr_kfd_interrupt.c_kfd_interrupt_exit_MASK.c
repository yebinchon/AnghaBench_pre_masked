
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfd_dev {int interrupts_active; int ih_fifo; int ih_wq; int interrupt_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct kfd_dev *VAR_0)
{





 unsigned long VAR_1;

 FUNC_2(&VAR_0->interrupt_lock, VAR_1);
 VAR_0->interrupts_active = 0;
 FUNC_3(&VAR_0->interrupt_lock, VAR_1);






 FUNC_0(VAR_0->ih_wq);

 FUNC_1(&VAR_0->ih_fifo);
}
