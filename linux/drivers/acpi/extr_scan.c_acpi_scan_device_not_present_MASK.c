
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_1)
{
 if (!FUNC_1(VAR_1)) {
  FUNC_2(&VAR_1->dev, "Still not present\n");
  return -VAR_0;
 }
 FUNC_0(VAR_1);
 return 0;
}
