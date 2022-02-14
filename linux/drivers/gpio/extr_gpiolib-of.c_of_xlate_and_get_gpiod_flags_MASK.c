
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {scalar_t__ args_count; } ;
struct gpio_desc {int dummy; } ;
struct gpio_chip {scalar_t__ of_gpio_n_cells; int (* of_xlate ) (struct gpio_chip*,struct of_phandle_args*,int*) ;} ;
typedef enum of_gpio_flags { ____Placeholder_of_gpio_flags } of_gpio_flags ;


 int VAR_0 ;
 struct gpio_desc* FUNC_0 (int) ;
 struct gpio_desc* FUNC_1 (struct gpio_chip*,int) ;
 int FUNC_2 (struct gpio_chip*,struct of_phandle_args*,int*) ;

__attribute__((used)) static struct gpio_desc *FUNC_3(struct gpio_chip *VAR_1,
     struct of_phandle_args *VAR_2,
     enum of_gpio_flags *VAR_3)
{
 int VAR_4;

 if (VAR_1->of_gpio_n_cells != VAR_2->args_count)
  return FUNC_0(-VAR_0);

 VAR_4 = VAR_1->of_xlate(VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  return FUNC_0(VAR_4);

 return FUNC_1(VAR_1, VAR_4);
}
