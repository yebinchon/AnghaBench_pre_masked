
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct gpio_desc {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct fwnode_handle {int dummy; } ;
struct acpi_gpio_chip {struct gpio_chip* chip; } ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 struct gpio_desc* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_2 (struct gpio_desc*) ;
 scalar_t__ FUNC_3 (struct fwnode_handle*,char*) ;
 int FUNC_4 (struct fwnode_handle*,char*,char const**) ;
 int FUNC_5 (struct fwnode_handle*,char*,scalar_t__*,int ) ;
 struct gpio_desc* FUNC_6 (struct gpio_chip*,scalar_t__) ;

__attribute__((used)) static struct gpio_desc *
FUNC_7(struct acpi_gpio_chip *VAR_6,
        struct fwnode_handle *VAR_7,
        const char **VAR_8,
        unsigned long *VAR_9,
        enum gpiod_flags *VAR_10)
{
 struct gpio_chip *VAR_11 = VAR_6->chip;
 struct gpio_desc *VAR_12;
 u32 VAR_13[2];
 int VAR_14;

 *VAR_9 = VAR_5;
 *VAR_10 = 0;
 *VAR_8 = ((void*)0);

 VAR_14 = FUNC_5(VAR_7, "gpios", VAR_13,
          FUNC_0(VAR_13));
 if (VAR_14 < 0)
  return FUNC_1(VAR_14);

 VAR_12 = FUNC_6(VAR_11, VAR_13[0]);
 if (FUNC_2(VAR_12))
  return VAR_12;

 if (VAR_13[1])
  *VAR_9 |= VAR_4;

 if (FUNC_3(VAR_7, "input"))
  *VAR_10 |= VAR_1;
 else if (FUNC_3(VAR_7, "output-low"))
  *VAR_10 |= VAR_3;
 else if (FUNC_3(VAR_7, "output-high"))
  *VAR_10 |= VAR_2;
 else
  return FUNC_1(-VAR_0);

 FUNC_4(VAR_7, "line-name", VAR_8);

 return VAR_12;
}
