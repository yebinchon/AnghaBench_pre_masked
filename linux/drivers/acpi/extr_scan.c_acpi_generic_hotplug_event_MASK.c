
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct acpi_device {int handle; int dev; TYPE_2__* handler; } ;
struct TYPE_3__ {int enabled; } ;
struct TYPE_4__ {TYPE_1__ hotplug; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int const,int ,int *) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_3, u32 VAR_4)
{
 switch (VAR_4) {
 case 131:
  return FUNC_1(VAR_3);
 case 130:
  return FUNC_2(VAR_3);
 case 129:
 case 128:
  if (VAR_3->handler && !VAR_3->handler->hotplug.enabled) {
   FUNC_4(&VAR_3->dev, "Eject disabled\n");
   return -VAR_2;
  }
  FUNC_0(VAR_3->handle, 129,
      VAR_0, ((void*)0));
  return FUNC_3(VAR_3);
 }
 return -VAR_1;
}
