
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int bus_id; } ;
struct TYPE_3__ {int present; scalar_t__ functional; } ;
struct acpi_device {TYPE_2__ pnp; TYPE_1__ status; int handle; scalar_t__ dep_unmet; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,unsigned long long*) ;
 scalar_t__ FUNC_3 (struct acpi_device*) ;
 scalar_t__ FUNC_4 (struct acpi_device*) ;
 int FUNC_5 (struct acpi_device*,unsigned long long) ;

int FUNC_6(struct acpi_device *VAR_3)
{
 acpi_status VAR_4;
 unsigned long long VAR_5;

 if (FUNC_3(VAR_3)) {
  FUNC_5(VAR_3, VAR_1);
  return 0;
 }


 if (FUNC_4(VAR_3) && VAR_3->dep_unmet) {
  FUNC_5(VAR_3, 0);
  return 0;
 }

 VAR_4 = FUNC_2(VAR_3->handle, &VAR_5);
 if (FUNC_1(VAR_4))
  return -VAR_2;

 FUNC_5(VAR_3, VAR_5);

 if (VAR_3->status.functional && !VAR_3->status.present) {
  FUNC_0((VAR_0, "Device [%s] status [%08x]: "
         "functional but not present;\n",
   VAR_3->pnp.bus_id, (u32)VAR_5));
 }

 FUNC_0((VAR_0, "Device [%s] status [%08x]\n",
     VAR_3->pnp.bus_id, (u32)VAR_5));
 return 0;
}
