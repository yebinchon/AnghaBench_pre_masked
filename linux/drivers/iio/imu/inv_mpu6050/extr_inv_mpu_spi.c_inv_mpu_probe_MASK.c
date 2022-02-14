
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_device_id {char* name; scalar_t__ driver_data; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct spi_device {int irq; TYPE_2__ dev; } ;
struct regmap {int dummy; } ;
struct acpi_device_id {scalar_t__ driver_data; } ;
typedef enum inv_devices { ____Placeholder_inv_devices } inv_devices ;
struct TYPE_4__ {int acpi_match_table; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 struct acpi_device_id* FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 struct regmap* FUNC_4 (struct spi_device*,int *) ;
 int FUNC_5 (struct regmap*,int ,char const*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct spi_device_id* FUNC_6 (struct spi_device*) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_3)
{
 struct regmap *VAR_4;
 const struct spi_device_id *VAR_5;
 const struct acpi_device_id *VAR_6;
 const char *VAR_7 = ((void*)0);
 enum inv_devices VAR_8;

 if ((VAR_5 = FUNC_6(VAR_3))) {
  VAR_8 = (enum inv_devices)VAR_5->driver_data;
  VAR_7 = VAR_5->name;
 } else if ((VAR_6 = FUNC_2(VAR_3->dev.driver->acpi_match_table, &VAR_3->dev))) {
  VAR_8 = (enum inv_devices)VAR_6->driver_data;
 } else {
  return -VAR_0;
 }

 VAR_4 = FUNC_4(VAR_3, &VAR_2);
 if (FUNC_0(VAR_4)) {
  FUNC_3(&VAR_3->dev, "Failed to register spi regmap %d\n",
   (int)FUNC_1(VAR_4));
  return FUNC_1(VAR_4);
 }

 return FUNC_5(VAR_4, VAR_3->irq, VAR_7,
      VAR_1, VAR_8);
}
