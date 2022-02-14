
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_thermal {TYPE_1__* device; } ;
struct TYPE_2__ {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct acpi_thermal *VAR_2, int VAR_3)
{
 if (!VAR_2)
  return -VAR_0;

 if (FUNC_0(FUNC_1(VAR_2->device->handle,
          "_SCP", VAR_3)))
  return -VAR_1;

 return 0;
}
