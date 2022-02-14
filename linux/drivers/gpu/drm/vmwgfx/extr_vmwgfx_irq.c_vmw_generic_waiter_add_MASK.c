
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmw_private {int waiter_lock; int irq_mask; scalar_t__ io_start; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vmw_private*,int ,int ) ;

void FUNC_4(struct vmw_private *VAR_2,
       u32 VAR_3, int *VAR_4)
{
 FUNC_1(&VAR_2->waiter_lock);
 if ((*VAR_4)++ == 0) {
  FUNC_0(VAR_3, VAR_2->io_start + VAR_1);
  VAR_2->irq_mask |= VAR_3;
  FUNC_3(VAR_2, VAR_0, VAR_2->irq_mask);
 }
 FUNC_2(&VAR_2->waiter_lock);
}
