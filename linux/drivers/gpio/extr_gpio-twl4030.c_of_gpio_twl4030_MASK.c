
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct twl4030_gpio_platform_data {int pulldowns; int pullups; int mmc_cd; int debounce; int use_leds; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 struct twl4030_gpio_platform_data* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int *) ;

__attribute__((used)) static struct twl4030_gpio_platform_data *FUNC_3(struct device *VAR_1,
    struct twl4030_gpio_platform_data *VAR_2)
{
 struct twl4030_gpio_platform_data *VAR_3;

 VAR_3 = FUNC_0(VAR_1, sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 if (VAR_2)
  *VAR_3 = *VAR_2;

 VAR_3->use_leds = FUNC_1(VAR_1->of_node,
   "ti,use-leds");

 FUNC_2(VAR_1->of_node, "ti,debounce",
        &VAR_3->debounce);
 FUNC_2(VAR_1->of_node, "ti,mmc-cd",
        (u32 *)&VAR_3->mmc_cd);
 FUNC_2(VAR_1->of_node, "ti,pullups",
        &VAR_3->pullups);
 FUNC_2(VAR_1->of_node, "ti,pulldowns",
        &VAR_3->pulldowns);

 return VAR_3;
}
