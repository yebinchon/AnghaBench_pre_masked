
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct fwnode_handle {int dummy; } ;
struct acpi_gpio_lookup {int index; struct gpio_desc* desc; } ;
struct acpi_gpio_info {int dummy; } ;
struct acpi_device {int dummy; } ;
typedef int lookup ;


 int VAR_0 ;
 int VAR_1 ;
 struct gpio_desc* FUNC_0 (int) ;
 struct gpio_desc* FUNC_1 (struct acpi_device*,char const*,int,struct acpi_gpio_info*) ;
 int FUNC_2 (struct fwnode_handle*,char const*,int,struct acpi_gpio_lookup*) ;
 int FUNC_3 (struct acpi_gpio_lookup*,struct acpi_gpio_info*) ;
 int FUNC_4 (struct fwnode_handle*) ;
 int FUNC_5 (struct acpi_gpio_lookup*,int ,int) ;
 struct acpi_device* FUNC_6 (struct fwnode_handle*) ;

struct gpio_desc *FUNC_7(struct fwnode_handle *VAR_2,
          const char *VAR_3, int VAR_4,
          struct acpi_gpio_info *VAR_5)
{
 struct acpi_gpio_lookup VAR_6;
 struct acpi_device *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(VAR_2);
 if (VAR_7)
  return FUNC_1(VAR_7, VAR_3, VAR_4, VAR_5);

 if (!FUNC_4(VAR_2))
  return FUNC_0(-VAR_1);

 if (!VAR_3)
  return FUNC_0(-VAR_0);

 FUNC_5(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.index = VAR_4;

 VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4, &VAR_6);
 if (VAR_8)
  return FUNC_0(VAR_8);

 VAR_8 = FUNC_3(&VAR_6, VAR_5);
 return VAR_8 ? FUNC_0(VAR_8) : VAR_6.desc;
}
