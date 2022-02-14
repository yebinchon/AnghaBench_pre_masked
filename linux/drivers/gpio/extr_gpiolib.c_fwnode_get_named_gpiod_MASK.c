
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct fwnode_handle {int dummy; } ;
struct acpi_gpio_info {int dummy; } ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 int VAR_0 ;
 int VAR_1 ;
 struct gpio_desc* FUNC_0 (int) ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (int*,struct acpi_gpio_info*) ;
 int FUNC_3 (unsigned long*,struct acpi_gpio_info*) ;
 struct gpio_desc* FUNC_4 (struct fwnode_handle*,char const*,int,struct acpi_gpio_info*) ;
 int FUNC_5 (struct gpio_desc*,char const*,unsigned long,int) ;
 struct gpio_desc* FUNC_6 (int ,char const*,int,int,char const*) ;
 int FUNC_7 (struct gpio_desc*) ;
 int FUNC_8 (struct gpio_desc*,char const*) ;
 scalar_t__ FUNC_9 (struct fwnode_handle*) ;
 scalar_t__ FUNC_10 (struct fwnode_handle*) ;
 int FUNC_11 (struct fwnode_handle*) ;

struct gpio_desc *FUNC_12(struct fwnode_handle *VAR_3,
      const char *VAR_4, int VAR_5,
      enum gpiod_flags VAR_6,
      const char *VAR_7)
{
 unsigned long VAR_8 = VAR_2;
 struct gpio_desc *VAR_9 = FUNC_0(-VAR_1);
 int VAR_10;

 if (!VAR_3)
  return FUNC_0(-VAR_0);

 if (FUNC_10(VAR_3)) {
  VAR_9 = FUNC_6(FUNC_11(VAR_3),
           VAR_4, VAR_5,
           VAR_6,
           VAR_7);
  return VAR_9;
 } else if (FUNC_9(VAR_3)) {
  struct acpi_gpio_info VAR_11;

  VAR_9 = FUNC_4(VAR_3, VAR_4, VAR_5, &VAR_11);
  if (FUNC_1(VAR_9))
   return VAR_9;

  FUNC_2(&VAR_6, &VAR_11);
  FUNC_3(&VAR_8, &VAR_11);
 }


 VAR_10 = FUNC_8(VAR_9, VAR_7);
 if (VAR_10)
  return FUNC_0(VAR_10);

 VAR_10 = FUNC_5(VAR_9, VAR_4, VAR_8, VAR_6);
 if (VAR_10 < 0) {
  FUNC_7(VAR_9);
  return FUNC_0(VAR_10);
 }

 return VAR_9;
}
