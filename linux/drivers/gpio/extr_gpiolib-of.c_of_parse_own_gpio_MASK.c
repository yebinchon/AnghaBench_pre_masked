
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct of_phandle_args {unsigned int args_count; int * args; struct device_node* np; } ;
struct gpio_desc {int dummy; } ;
struct gpio_chip {struct device_node* of_node; } ;
struct device_node {char* name; } ;
typedef enum of_gpio_flags { ____Placeholder_of_gpio_flags } of_gpio_flags ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 int VAR_0 ;
 struct gpio_desc* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct gpio_desc*) ;
 scalar_t__ FUNC_3 (struct device_node*,char*) ;
 scalar_t__ FUNC_4 (struct device_node*,char*,char const**) ;
 int FUNC_5 (struct device_node*,char*,unsigned int*) ;
 int FUNC_6 (struct device_node*,char*,unsigned int,int *) ;
 struct gpio_desc* FUNC_7 (struct gpio_chip*,struct of_phandle_args*,int*) ;
 int FUNC_8 (char*,int ,struct device_node*) ;

__attribute__((used)) static struct gpio_desc *FUNC_9(struct device_node *VAR_9,
        struct gpio_chip *VAR_10,
        unsigned int VAR_11, const char **VAR_12,
        unsigned long *VAR_13,
        enum gpiod_flags *VAR_14)
{
 struct device_node *VAR_15;
 enum of_gpio_flags VAR_16;
 struct of_phandle_args VAR_17;
 struct gpio_desc *VAR_18;
 unsigned int VAR_19;
 u32 VAR_20;
 int VAR_21;

 VAR_15 = VAR_10->of_node;
 if (!VAR_15)
  return FUNC_0(-VAR_0);

 VAR_16 = 0;
 *VAR_13 = VAR_5;
 *VAR_14 = 0;

 VAR_21 = FUNC_5(VAR_15, "#gpio-cells", &VAR_20);
 if (VAR_21)
  return FUNC_0(VAR_21);

 VAR_17.np = VAR_15;
 VAR_17.args_count = VAR_20;

 for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
  VAR_21 = FUNC_6(VAR_9, "gpios", VAR_11 * VAR_20 + VAR_19,
       &VAR_17.args[VAR_19]);
  if (VAR_21)
   return FUNC_0(VAR_21);
 }

 VAR_18 = FUNC_7(VAR_10, &VAR_17, &VAR_16);
 if (FUNC_1(VAR_18))
  return VAR_18;

 if (VAR_16 & VAR_7)
  *VAR_13 |= VAR_4;
 if (VAR_16 & VAR_8)
  *VAR_13 |= VAR_6;

 if (FUNC_3(VAR_9, "input"))
  *VAR_14 |= VAR_1;
 else if (FUNC_3(VAR_9, "output-low"))
  *VAR_14 |= VAR_3;
 else if (FUNC_3(VAR_9, "output-high"))
  *VAR_14 |= VAR_2;
 else {
  FUNC_8("GPIO line %d (%pOFn): no hogging state specified, bailing out\n",
   FUNC_2(VAR_18), VAR_9);
  return FUNC_0(-VAR_0);
 }

 if (VAR_12 && FUNC_4(VAR_9, "line-name", VAR_12))
  *VAR_12 = VAR_9->name;

 return VAR_18;
}
