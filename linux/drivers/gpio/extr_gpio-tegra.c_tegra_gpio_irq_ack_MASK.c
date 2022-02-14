
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_gpio_info {int dummy; } ;
struct tegra_gpio_bank {struct tegra_gpio_info* tgi; } ;
struct irq_data {unsigned int hwirq; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct tegra_gpio_info*,unsigned int) ;
 struct tegra_gpio_bank* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct tegra_gpio_info*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0)
{
 struct tegra_gpio_bank *VAR_1 = FUNC_2(VAR_0);
 struct tegra_gpio_info *VAR_2 = VAR_1->tgi;
 unsigned int VAR_3 = VAR_0->hwirq;

 FUNC_3(VAR_2, 1 << FUNC_0(VAR_3), FUNC_1(VAR_2, VAR_3));
}
