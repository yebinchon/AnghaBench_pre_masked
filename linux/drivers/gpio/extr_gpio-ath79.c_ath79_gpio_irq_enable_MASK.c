
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int dummy; } ;
struct ath79_gpio_ctrl {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath79_gpio_ctrl*,int ,int ,int ) ;
 struct ath79_gpio_ctrl* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_2)
{
 struct ath79_gpio_ctrl *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4 = FUNC_0(FUNC_3(VAR_2));
 unsigned long VAR_5;

 FUNC_4(&VAR_3->lock, VAR_5);
 FUNC_1(VAR_3, VAR_0, VAR_4, VAR_4);
 FUNC_1(VAR_3, VAR_1, VAR_4, VAR_4);
 FUNC_5(&VAR_3->lock, VAR_5);
}
