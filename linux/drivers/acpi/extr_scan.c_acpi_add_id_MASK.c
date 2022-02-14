
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_hardware_id {int list; int id; } ;
struct TYPE_2__ {int hardware_id; } ;
struct acpi_device_pnp {TYPE_1__ type; int ids; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_hardware_id*) ;
 struct acpi_hardware_id* FUNC_1 (int,int ) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct acpi_device_pnp *VAR_1, const char *VAR_2)
{
 struct acpi_hardware_id *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;

 VAR_3->id = FUNC_2(VAR_2, VAR_0);
 if (!VAR_3->id) {
  FUNC_0(VAR_3);
  return;
 }

 FUNC_3(&VAR_3->list, &VAR_1->ids);
 VAR_1->type.hardware_id = 1;
}
