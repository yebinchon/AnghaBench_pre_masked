
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sch311x_gpio_block {scalar_t__* config_regs; scalar_t__ runtime_reg; } ;
struct gpio_chip {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 struct sch311x_gpio_block* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 struct sch311x_gpio_block *VAR_5 = FUNC_1(VAR_3);

 if (VAR_5->config_regs[VAR_4] == 0)
  return -VAR_2;

 if (!FUNC_2(VAR_5->runtime_reg + VAR_5->config_regs[VAR_4],
       1, VAR_0)) {
  FUNC_0(VAR_3->parent, "Failed to request region 0x%04x.\n",
   VAR_5->runtime_reg + VAR_5->config_regs[VAR_4]);
  return -VAR_1;
 }
 return 0;
}
