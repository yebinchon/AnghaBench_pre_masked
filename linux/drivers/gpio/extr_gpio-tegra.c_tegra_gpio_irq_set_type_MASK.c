
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct tegra_gpio_info {int dev; int gc; } ;
struct tegra_gpio_bank {int * lvl_lock; struct tegra_gpio_info* tgi; } ;
struct irq_data {unsigned int hwirq; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct tegra_gpio_info*,unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_2 (struct tegra_gpio_info*,unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;





 unsigned int VAR_7 ;
 int FUNC_4 (int ,char*,unsigned int) ;
 int FUNC_5 (int *,unsigned int) ;
 int VAR_8 ;
 int VAR_9 ;
 struct tegra_gpio_bank* FUNC_6 (struct irq_data*) ;
 int FUNC_7 (struct irq_data*,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct tegra_gpio_info*,unsigned int) ;
 int FUNC_11 (struct tegra_gpio_info*,unsigned int) ;
 int FUNC_12 (struct tegra_gpio_info*,int ,unsigned int,int ) ;
 unsigned int FUNC_13 (struct tegra_gpio_info*,int ) ;
 int FUNC_14 (struct tegra_gpio_info*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_15(struct irq_data *VAR_10, unsigned int VAR_11)
{
 unsigned int VAR_12 = VAR_10->hwirq, VAR_13 = FUNC_3(VAR_12), VAR_14;
 struct tegra_gpio_bank *VAR_15 = FUNC_6(VAR_10);
 struct tegra_gpio_info *VAR_16 = VAR_15->tgi;
 unsigned long VAR_17;
 u32 VAR_18;
 int VAR_19;

 switch (VAR_11 & VAR_7) {
 case 130:
  VAR_14 = VAR_3;
  break;

 case 131:
  VAR_14 = VAR_2;
  break;

 case 132:
  VAR_14 = VAR_1;
  break;

 case 129:
  VAR_14 = VAR_4;
  break;

 case 128:
  VAR_14 = VAR_5;
  break;

 default:
  return -VAR_0;
 }

 FUNC_8(&VAR_15->lvl_lock[VAR_13], VAR_17);

 VAR_18 = FUNC_13(VAR_16, FUNC_1(VAR_16, VAR_12));
 VAR_18 &= ~(VAR_6 << FUNC_0(VAR_12));
 VAR_18 |= VAR_14 << FUNC_0(VAR_12);
 FUNC_14(VAR_16, VAR_18, FUNC_1(VAR_16, VAR_12));

 FUNC_9(&VAR_15->lvl_lock[VAR_13], VAR_17);

 FUNC_12(VAR_16, FUNC_2(VAR_16, VAR_12), VAR_12, 0);
 FUNC_11(VAR_16, VAR_12);

 VAR_19 = FUNC_5(&VAR_16->gc, VAR_12);
 if (VAR_19) {
  FUNC_4(VAR_16->dev,
   "unable to lock Tegra GPIO %u as IRQ\n", VAR_12);
  FUNC_10(VAR_16, VAR_12);
  return VAR_19;
 }

 if (VAR_11 & (128 | 129))
  FUNC_7(VAR_10, VAR_9);
 else if (VAR_11 & (131 | 130))
  FUNC_7(VAR_10, VAR_8);

 return 0;
}
