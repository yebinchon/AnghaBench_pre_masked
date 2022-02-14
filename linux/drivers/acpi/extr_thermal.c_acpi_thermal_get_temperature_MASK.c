
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_thermal {unsigned long long last_temperature; unsigned long long temperature; TYPE_1__* device; } ;
typedef int acpi_status ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;

__attribute__((used)) static int FUNC_3(struct acpi_thermal *VAR_4)
{
 acpi_status VAR_5 = VAR_1;
 unsigned long long VAR_6;

 if (!VAR_4)
  return -VAR_2;

 VAR_4->last_temperature = VAR_4->temperature;

 VAR_5 = FUNC_2(VAR_4->device->handle, "_TMP", ((void*)0), &VAR_6);
 if (FUNC_1(VAR_5))
  return -VAR_3;

 VAR_4->temperature = VAR_6;
 FUNC_0((VAR_0, "Temperature is %lu dK\n",
     VAR_4->temperature));

 return 0;
}
