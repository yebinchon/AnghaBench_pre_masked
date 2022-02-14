
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_data {int dummy; } ;
struct TYPE_2__ {int lock; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct irq_data*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_3(&VAR_2.lock, VAR_4);
 VAR_5 = FUNC_0(VAR_2.regs + VAR_0);
 VAR_5 &= ~(1 << (VAR_1 + FUNC_1(VAR_3)));
 FUNC_2(VAR_2.regs + VAR_0, VAR_5);
 FUNC_4(&VAR_2.lock, VAR_4);
}
