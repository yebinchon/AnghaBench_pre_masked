
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_gpio_info {struct tegra_gpio_bank* bank_info; } ;
struct tegra_gpio_bank {unsigned int* dbc_cnt; int * dbc_lock; } ;
struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 size_t FUNC_1 (unsigned int) ;
 int FUNC_2 (struct tegra_gpio_info*,unsigned int) ;
 int FUNC_3 (struct tegra_gpio_info*,unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;
 struct tegra_gpio_info* FUNC_5 (struct gpio_chip*) ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct tegra_gpio_info*,int ,unsigned int,int) ;
 int FUNC_10 (struct tegra_gpio_info*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_11(struct gpio_chip *VAR_0, unsigned int VAR_1,
       unsigned int VAR_2)
{
 struct tegra_gpio_info *VAR_3 = FUNC_5(VAR_0);
 struct tegra_gpio_bank *VAR_4 = &VAR_3->bank_info[FUNC_1(VAR_1)];
 unsigned int VAR_5 = FUNC_0(VAR_2, 1000);
 unsigned long VAR_6;
 unsigned int VAR_7;

 if (!VAR_5) {
  FUNC_9(VAR_3, FUNC_3(VAR_3, VAR_1),
          VAR_1, 0);
  return 0;
 }

 VAR_5 = FUNC_6(VAR_5, 255U);
 VAR_7 = FUNC_4(VAR_1);




 FUNC_7(&VAR_4->dbc_lock[VAR_7], VAR_6);
 if (VAR_4->dbc_cnt[VAR_7] < VAR_5) {
  FUNC_10(VAR_3, VAR_5, FUNC_2(VAR_3, VAR_1));
  VAR_4->dbc_cnt[VAR_7] = VAR_5;
 }
 FUNC_8(&VAR_4->dbc_lock[VAR_7], VAR_6);

 FUNC_9(VAR_3, FUNC_3(VAR_3, VAR_1), VAR_1, 1);

 return 0;
}
