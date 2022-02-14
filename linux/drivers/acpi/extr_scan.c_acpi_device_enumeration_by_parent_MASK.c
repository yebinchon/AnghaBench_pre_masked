
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct acpi_device_id {char* member_0; } ;
struct acpi_device {int fwnode; } ;


 int FUNC_0 (struct list_head*) ;
 int VAR_0 ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (struct acpi_device*,struct list_head*,int ,int*) ;
 scalar_t__ FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (struct acpi_device*,struct acpi_device_id const*) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_6(struct acpi_device *VAR_2)
{
 struct list_head VAR_3;
 bool VAR_4 = 0;
 static const struct acpi_device_id VAR_5[] = {
  {"BSG1160", },
  {"BSG2150", },
  {"INT33FE", },
  {"INT3515", },
  {}
 };

 if (FUNC_3(VAR_2))
  return 1;


 if (VAR_1 &&
     (FUNC_5(&VAR_2->fwnode, "spiSclkPeriod") ||
      FUNC_5(&VAR_2->fwnode, "i2cAddress") ||
      FUNC_5(&VAR_2->fwnode, "baud")))
  return 1;


 if (!FUNC_4(VAR_2, VAR_5))
  return 0;

 FUNC_0(&VAR_3);
 FUNC_2(VAR_2, &VAR_3,
          VAR_0,
          &VAR_4);
 FUNC_1(&VAR_3);

 return VAR_4;
}
