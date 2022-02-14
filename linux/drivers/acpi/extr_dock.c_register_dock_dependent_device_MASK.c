
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dock_station {int dummy; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_handle ;


 int FUNC_0 (struct dock_station*,struct acpi_device*) ;
 int FUNC_1 (struct dock_station*,struct acpi_device*) ;
 struct dock_station* FUNC_2 (int ) ;

void FUNC_3(struct acpi_device *VAR_0,
        acpi_handle VAR_1)
{
 struct dock_station *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2 && !FUNC_1(VAR_2, VAR_0))
  FUNC_0(VAR_2, VAR_0);
}
