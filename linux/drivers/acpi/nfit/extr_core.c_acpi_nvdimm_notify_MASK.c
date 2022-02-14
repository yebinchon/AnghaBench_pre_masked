
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int parent; } ;
struct acpi_device {struct device dev; } ;
typedef int acpi_handle ;


 int FUNC_0 (struct device*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(acpi_handle VAR_0, u32 VAR_1, void *VAR_2)
{
 struct acpi_device *VAR_3 = VAR_2;
 struct device *VAR_4 = &VAR_3->dev;

 FUNC_1(VAR_4->parent);
 FUNC_0(VAR_4, VAR_1);
 FUNC_2(VAR_4->parent);
}
