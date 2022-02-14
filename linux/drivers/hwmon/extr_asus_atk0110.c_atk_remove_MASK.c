
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atk_data {scalar_t__ disable_ec; int hwmon_dev; } ;
struct acpi_device {int dev; struct atk_data* driver_data; } ;


 int FUNC_0 (struct atk_data*) ;
 scalar_t__ FUNC_1 (struct atk_data*,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_0)
{
 struct atk_data *VAR_1 = VAR_0->driver_data;
 FUNC_2(&VAR_0->dev, "removing...\n");

 VAR_0->driver_data = ((void*)0);

 FUNC_0(VAR_1);

 FUNC_4(VAR_1->hwmon_dev);

 if (VAR_1->disable_ec) {
  if (FUNC_1(VAR_1, 0))
   FUNC_3(&VAR_0->dev, "Failed to disable EC\n");
 }

 return 0;
}
