
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_kbc {int clk; int timer; int irq; int lock; scalar_t__ mmio; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct tegra_kbc *VAR_1)
{
 unsigned long VAR_2;
 u32 VAR_3;

 FUNC_4(&VAR_1->lock, VAR_2);
 VAR_3 = FUNC_3(VAR_1->mmio + VAR_0);
 VAR_3 &= ~1;
 FUNC_6(VAR_3, VAR_1->mmio + VAR_0);
 FUNC_5(&VAR_1->lock, VAR_2);

 FUNC_2(VAR_1->irq);
 FUNC_1(&VAR_1->timer);

 FUNC_0(VAR_1->clk);
}
