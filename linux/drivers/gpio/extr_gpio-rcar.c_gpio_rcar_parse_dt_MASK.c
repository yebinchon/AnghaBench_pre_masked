
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct of_phandle_args {unsigned int* args; } ;
struct gpio_rcar_priv {TYPE_1__* dev; int has_both_edge_trigger; int has_outdtsel; } ;
struct gpio_rcar_info {int has_both_edge_trigger; int has_outdtsel; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,unsigned int,unsigned int) ;
 struct gpio_rcar_info* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct device_node*,char*,int,int ,struct of_phandle_args*) ;

__attribute__((used)) static int FUNC_3(struct gpio_rcar_priv *VAR_1, unsigned int *VAR_2)
{
 struct device_node *VAR_3 = VAR_1->dev->of_node;
 const struct gpio_rcar_info *VAR_4;
 struct of_phandle_args VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_1->dev);
 VAR_1->has_outdtsel = VAR_4->has_outdtsel;
 VAR_1->has_both_edge_trigger = VAR_4->has_both_edge_trigger;

 VAR_6 = FUNC_2(VAR_3, "gpio-ranges", 3, 0, &VAR_5);
 *VAR_2 = VAR_6 == 0 ? VAR_5.args[2] : VAR_0;

 if (*VAR_2 == 0 || *VAR_2 > VAR_0) {
  FUNC_0(VAR_1->dev, "Invalid number of gpio lines %u, using %u\n",
    *VAR_2, VAR_0);
  *VAR_2 = VAR_0;
 }

 return 0;
}
