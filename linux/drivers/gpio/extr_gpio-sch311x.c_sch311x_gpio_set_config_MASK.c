
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sch311x_gpio_block {int lock; scalar_t__* config_regs; scalar_t__ runtime_reg; } ;
struct gpio_chip {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;


 int VAR_1 ;
 struct sch311x_gpio_block* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_2, unsigned VAR_3,
       unsigned long VAR_4)
{
 struct sch311x_gpio_block *VAR_5 = FUNC_0(VAR_2);
 enum pin_config_param VAR_6 = FUNC_3(VAR_4);
 u8 VAR_7;

 switch (VAR_6) {
 case 129:
  FUNC_4(&VAR_5->lock);
  VAR_7 = FUNC_1(VAR_5->runtime_reg + VAR_5->config_regs[VAR_3]);
  VAR_7 |= VAR_1;
  FUNC_2(VAR_7, VAR_5->runtime_reg + VAR_5->config_regs[VAR_3]);
  FUNC_5(&VAR_5->lock);
  return 0;
 case 128:
  FUNC_4(&VAR_5->lock);
  VAR_7 = FUNC_1(VAR_5->runtime_reg + VAR_5->config_regs[VAR_3]);
  VAR_7 &= ~VAR_1;
  FUNC_2(VAR_7, VAR_5->runtime_reg + VAR_5->config_regs[VAR_3]);
  FUNC_5(&VAR_5->lock);
  return 0;
 default:
  break;
 }
 return -VAR_0;
}
