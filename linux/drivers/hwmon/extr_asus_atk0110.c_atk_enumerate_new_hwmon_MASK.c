
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; union acpi_object* elements; } ;
union acpi_object {TYPE_2__ package; } ;
struct device {int dummy; } ;
struct atk_data {int disable_ec; int voltage_count; int temperature_count; int fan_count; TYPE_1__* acpi_dev; } ;
struct TYPE_3__ {struct device dev; } ;


 int FUNC_0 (union acpi_object*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (union acpi_object*) ;
 int FUNC_2 (union acpi_object*) ;
 int FUNC_3 (struct atk_data*,union acpi_object*) ;
 int FUNC_4 (struct atk_data*,int) ;
 int FUNC_5 (struct atk_data*) ;
 int FUNC_6 (struct atk_data*) ;
 union acpi_object* FUNC_7 (struct atk_data*,int ) ;
 int FUNC_8 (struct device*,char*) ;

__attribute__((used)) static int FUNC_9(struct atk_data *VAR_1)
{
 struct device *VAR_2 = &VAR_1->acpi_dev->dev;
 union acpi_object *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_6(VAR_1);
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_4) {
  VAR_4 = FUNC_5(VAR_1);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_1->disable_ec = VAR_4;

  VAR_4 = FUNC_4(VAR_1, 1);
  if (VAR_4) {
   VAR_1->disable_ec = 0;
   return VAR_4;
  }
 }

 FUNC_8(VAR_2, "Enumerating hwmon sensors\n");

 VAR_3 = FUNC_7(VAR_1, VAR_0);
 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_3->package.count; VAR_5++) {
  union acpi_object *VAR_6 = &VAR_3->package.elements[VAR_5];

  FUNC_3(VAR_1, VAR_6);
 }

 VAR_4 = VAR_1->voltage_count + VAR_1->temperature_count + VAR_1->fan_count;

 FUNC_0(VAR_3);
 return VAR_4;
}
