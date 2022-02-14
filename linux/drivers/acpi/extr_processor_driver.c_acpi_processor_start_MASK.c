
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct acpi_device {int dummy; } ;


 struct acpi_device* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 struct acpi_device *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 if (!VAR_2)
  return -VAR_0;


 FUNC_2();
 VAR_3 = FUNC_1(VAR_2);
 FUNC_3();
 return VAR_3;
}
