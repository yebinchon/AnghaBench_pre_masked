
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_thermal {TYPE_1__* device; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,int *,unsigned long long*) ;

__attribute__((used)) static void FUNC_1(struct acpi_thermal *VAR_2)
{
 acpi_handle VAR_3 = VAR_2->device->handle;
 unsigned long long VAR_4;
 int VAR_5;

 FUNC_0(VAR_3, "_CRT", ((void*)0), &VAR_4);
 FUNC_0(VAR_3, "_HOT", ((void*)0), &VAR_4);
 FUNC_0(VAR_3, "_PSV", ((void*)0), &VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  char VAR_6[5] = { '_', 'A', 'C', ('0' + VAR_5), '\0' };
  acpi_status VAR_7;

  VAR_7 = FUNC_0(VAR_3, VAR_6, ((void*)0), &VAR_4);
  if (VAR_7 == VAR_1)
   break;
 }
 FUNC_0(VAR_3, "_TMP", ((void*)0), &VAR_4);
}
