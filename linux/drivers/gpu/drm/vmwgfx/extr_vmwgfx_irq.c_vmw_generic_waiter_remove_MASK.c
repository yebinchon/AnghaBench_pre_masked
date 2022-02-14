
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmw_private {int waiter_lock; int irq_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vmw_private*,int ,int ) ;

void FUNC_3(struct vmw_private *VAR_1,
          u32 VAR_2, int *VAR_3)
{
 FUNC_0(&VAR_1->waiter_lock);
 if (--(*VAR_3) == 0) {
  VAR_1->irq_mask &= ~VAR_2;
  FUNC_2(VAR_1, VAR_0, VAR_1->irq_mask);
 }
 FUNC_1(&VAR_1->waiter_lock);
}
