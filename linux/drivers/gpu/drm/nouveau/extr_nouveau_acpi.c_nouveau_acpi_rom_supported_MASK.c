
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;
struct TYPE_2__ {int rom_handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ,char*,int *) ;
 TYPE_1__ VAR_0 ;

bool FUNC_3(struct device *VAR_1)
{
 acpi_status VAR_2;
 acpi_handle VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3)
  return 0;

 VAR_2 = FUNC_2(VAR_3, "_ROM", &VAR_4);
 if (FUNC_0(VAR_2))
  return 0;

 VAR_0.rom_handle = VAR_4;
 return 1;
}
