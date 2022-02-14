
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dev; } ;


 int FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_device*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_0,
     bool VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;

 if (VAR_2 && VAR_1)
  FUNC_2(&VAR_0->dev);

 return FUNC_1(VAR_0, VAR_2);
}
