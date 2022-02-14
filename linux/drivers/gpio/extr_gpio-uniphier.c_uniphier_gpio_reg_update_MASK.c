
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_gpio_priv {int lock; scalar_t__ regs; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct uniphier_gpio_priv *VAR_0,
         unsigned int VAR_1, u32 VAR_2, u32 VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_1(&VAR_0->lock, VAR_4);
 VAR_5 = FUNC_0(VAR_0->regs + VAR_1);
 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_2 & VAR_3;
 FUNC_3(VAR_5, VAR_0->regs + VAR_1);
 FUNC_2(&VAR_0->lock, VAR_4);
}
