
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct acpi_gpio_mapping {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct acpi_gpio_mapping const*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,void*) ;
 void* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (void*) ;

int FUNC_5(struct device *VAR_3,
       const struct acpi_gpio_mapping *VAR_4)
{
 void *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_2, 0, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(FUNC_0(VAR_3), VAR_4);
 if (VAR_6) {
  FUNC_4(VAR_5);
  return VAR_6;
 }
 FUNC_2(VAR_3, VAR_5);
 return 0;
}
