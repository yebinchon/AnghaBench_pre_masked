
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 acpi_handle VAR_4 = FUNC_1(&VAR_3->dev);
 acpi_status VAR_5;
 int VAR_6 = 0;

 if (!FUNC_2(VAR_4, VAR_1))
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_4, VAR_1,
         VAR_2, &VAR_6);
 if (FUNC_0(VAR_5))
  return -VAR_0;
 return VAR_6;
}
