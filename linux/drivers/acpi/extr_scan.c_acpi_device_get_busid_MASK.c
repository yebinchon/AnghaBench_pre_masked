
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bus_id; } ;
struct acpi_device {int device_type; TYPE_1__ pnp; int handle; } ;
struct acpi_buffer {int member_0; char* member_1; } ;
typedef int bus_id ;





 scalar_t__ FUNC_0 (struct acpi_device*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct acpi_buffer*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct acpi_device *VAR_1)
{
 char VAR_2[5] = { '?', 0 };
 struct acpi_buffer VAR_3 = { sizeof(VAR_2), VAR_2 };
 int VAR_4 = 0;







 if (FUNC_0(VAR_1)) {
  FUNC_2(VAR_1->pnp.bus_id, "ACPI");
  return;
 }

 switch (VAR_1->device_type) {
 case 129:
  FUNC_2(VAR_1->pnp.bus_id, "PWRF");
  break;
 case 128:
  FUNC_2(VAR_1->pnp.bus_id, "SLPF");
  break;
 case 130:
  FUNC_2(VAR_1->pnp.bus_id, "ECDT");
  break;
 default:
  FUNC_1(VAR_1->handle, VAR_0, &VAR_3);

  for (VAR_4 = 3; VAR_4 > 1; VAR_4--) {
   if (VAR_2[VAR_4] == '_')
    VAR_2[VAR_4] = '\0';
   else
    break;
  }
  FUNC_2(VAR_1->pnp.bus_id, VAR_2);
  break;
 }
}
