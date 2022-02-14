
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_device {int dev; TYPE_1__* handler; int handle; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;
struct TYPE_4__ {scalar_t__ demand_offline; } ;
struct TYPE_3__ {TYPE_2__ hotplug; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 unsigned long long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct acpi_device*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*,int *,unsigned long long*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,unsigned long long) ;
 int FUNC_7 (struct acpi_device*,int) ;
 int FUNC_8 (struct acpi_device*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct acpi_device *VAR_6)
{
 acpi_handle VAR_7 = VAR_6->handle;
 unsigned long long VAR_8;
 acpi_status VAR_9;

 if (VAR_6->handler && VAR_6->handler->hotplug.demand_offline) {
  if (!FUNC_7(VAR_6, 1))
   return -VAR_3;
 } else {
  int VAR_10 = FUNC_8(VAR_6);
  if (VAR_10)
   return VAR_10;
 }

 FUNC_0((VAR_0,
  "Hot-removing device %s...\n", FUNC_9(&VAR_6->dev)));

 FUNC_2(VAR_6);

 FUNC_5(VAR_7, 0);



 VAR_9 = FUNC_3(VAR_7);
 if (VAR_9 == VAR_2)
  return -VAR_5;
 else if (FUNC_1(VAR_9))
  return -VAR_4;





 VAR_9 = FUNC_4(VAR_7, "_STA", ((void*)0), &VAR_8);
 if (FUNC_1(VAR_9)) {
  FUNC_6(VAR_7,
   "Status check after eject failed (0x%x)\n", VAR_9);
 } else if (VAR_8 & VAR_1) {
  FUNC_6(VAR_7,
   "Eject incomplete - status 0x%llx\n", VAR_8);
 }

 return 0;
}
