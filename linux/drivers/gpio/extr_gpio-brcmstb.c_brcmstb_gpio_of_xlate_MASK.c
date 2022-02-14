
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct of_phandle_args {int args_count; int* args; } ;
struct gpio_chip {int of_gpio_n_cells; int base; int ngpio; } ;
struct brcmstb_gpio_priv {int gpio_base; TYPE_1__* pdev; } ;
struct brcmstb_gpio_bank {int width; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct brcmstb_gpio_priv* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *,char*,int) ;
 struct brcmstb_gpio_bank* FUNC_3 (struct gpio_chip*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_1,
  const struct of_phandle_args *VAR_2, u32 *VAR_3)
{
 struct brcmstb_gpio_priv *VAR_4 = FUNC_1(VAR_1);
 struct brcmstb_gpio_bank *VAR_5 = FUNC_3(VAR_1);
 int VAR_6;

 if (VAR_1->of_gpio_n_cells != 2) {
  FUNC_0(1);
  return -VAR_0;
 }

 if (FUNC_0(VAR_2->args_count < VAR_1->of_gpio_n_cells))
  return -VAR_0;

 VAR_6 = VAR_2->args[0] - (VAR_1->base - VAR_4->gpio_base);
 if (VAR_6 >= VAR_1->ngpio || VAR_6 < 0)
  return -VAR_0;

 if (FUNC_4(VAR_6 >= VAR_5->width)) {
  FUNC_2(&VAR_4->pdev->dev,
   "Received request for invalid GPIO offset %d\n",
   VAR_2->args[0]);
 }

 if (VAR_3)
  *VAR_3 = VAR_2->args[1];

 return VAR_6;
}
