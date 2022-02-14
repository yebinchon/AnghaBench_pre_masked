
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_desc {int dummy; } ;
struct TYPE_2__ {struct acpi_device* adev; } ;
struct acpi_gpio_lookup {int index; struct gpio_desc* desc; TYPE_1__ info; int active_low; int pin_index; } ;
struct acpi_gpio_info {int dummy; } ;
struct acpi_device {int dev; } ;
typedef int lookup ;


 int VAR_0 ;
 struct gpio_desc* FUNC_0 (int) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int ,char const*,int,struct acpi_gpio_lookup*) ;
 int FUNC_3 (struct acpi_gpio_lookup*,struct acpi_gpio_info*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct acpi_gpio_lookup*,int ,int) ;

__attribute__((used)) static struct gpio_desc *FUNC_7(struct acpi_device *VAR_1,
       const char *VAR_2, int VAR_3,
       struct acpi_gpio_info *VAR_4)
{
 struct acpi_gpio_lookup VAR_5;
 int VAR_6;

 if (!VAR_1)
  return FUNC_0(-VAR_0);

 FUNC_6(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.index = VAR_3;

 if (VAR_2) {
  FUNC_4(&VAR_1->dev, "GPIO: looking up %s\n", VAR_2);

  VAR_6 = FUNC_2(FUNC_1(VAR_1),
      VAR_2, VAR_3, &VAR_5);
  if (VAR_6)
   return FUNC_0(VAR_6);

  FUNC_4(&VAR_1->dev, "GPIO: _DSD returned %s %d %d %u\n",
   FUNC_5(&VAR_5.info.adev->dev), VAR_5.index,
   VAR_5.pin_index, VAR_5.active_low);
 } else {
  FUNC_4(&VAR_1->dev, "GPIO: looking up %d in _CRS\n", VAR_3);
  VAR_5.info.adev = VAR_1;
 }

 VAR_6 = FUNC_3(&VAR_5, VAR_4);
 return VAR_6 ? FUNC_0(VAR_6) : VAR_5.desc;
}
