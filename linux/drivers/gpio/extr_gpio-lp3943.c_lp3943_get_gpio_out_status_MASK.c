
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp3943_reg_cfg {int mask; int shift; int reg; } ;
struct lp3943_gpio {struct lp3943* lp3943; } ;
struct lp3943 {struct lp3943_reg_cfg* mux_cfg; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lp3943*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct lp3943_gpio *VAR_3,
          struct gpio_chip *VAR_4, unsigned VAR_5)
{
 struct lp3943 *VAR_6 = VAR_3->lp3943;
 const struct lp3943_reg_cfg *VAR_7 = VAR_6->mux_cfg;
 u8 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_6, VAR_7[VAR_5].reg, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_8 = (VAR_8 & VAR_7[VAR_5].mask) >> VAR_7[VAR_5].shift;

 if (VAR_8 == VAR_1)
  return 1;
 else if (VAR_8 == VAR_2)
  return 0;
 else
  return -VAR_0;
}
