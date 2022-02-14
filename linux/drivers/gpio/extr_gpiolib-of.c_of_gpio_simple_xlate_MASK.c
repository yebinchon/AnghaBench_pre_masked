
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct of_phandle_args {int args_count; scalar_t__* args; } ;
struct gpio_chip {int of_gpio_n_cells; scalar_t__ ngpio; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_1,
    const struct of_phandle_args *VAR_2,
    u32 *VAR_3)
{






 if (VAR_1->of_gpio_n_cells < 2) {
  FUNC_0(1);
  return -VAR_0;
 }

 if (FUNC_0(VAR_2->args_count < VAR_1->of_gpio_n_cells))
  return -VAR_0;

 if (VAR_2->args[0] >= VAR_1->ngpio)
  return -VAR_0;

 if (VAR_3)
  *VAR_3 = VAR_2->args[1];

 return VAR_2->args[0];
}
