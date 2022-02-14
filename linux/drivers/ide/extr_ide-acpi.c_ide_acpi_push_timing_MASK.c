
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; int * pointer; } ;
union acpi_object {TYPE_1__ buffer; void* type; } ;
typedef int u8 ;
struct ide_acpi_drive_link {int idbuff; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct GTM_buffer {int dummy; } ;
struct TYPE_7__ {TYPE_2__* acpidata; } ;
typedef TYPE_3__ ide_hwif_t ;
typedef int acpi_status ;
struct TYPE_6__ {int obj_handle; int gtm; struct ide_acpi_drive_link slave; struct ide_acpi_drive_link master; } ;


 scalar_t__ FUNC_0 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char*,struct acpi_object_list*,int *) ;

void FUNC_3(ide_hwif_t *VAR_2)
{
 acpi_status VAR_3;
 struct acpi_object_list VAR_4;
 union acpi_object VAR_5[3];
 struct ide_acpi_drive_link *VAR_6 = &VAR_2->acpidata->master;
 struct ide_acpi_drive_link *VAR_7 = &VAR_2->acpidata->slave;




 VAR_4.count = 3;
 VAR_4.pointer = VAR_5;
 VAR_5[0].type = VAR_0;
 VAR_5[0].buffer.length = sizeof(struct GTM_buffer);
 VAR_5[0].buffer.pointer = (u8 *)&VAR_2->acpidata->gtm;
 VAR_5[1].type = VAR_0;
 VAR_5[1].buffer.length = VAR_1 * 2;
 VAR_5[1].buffer.pointer = (u8 *)&VAR_6->idbuff;
 VAR_5[2].type = VAR_0;
 VAR_5[2].buffer.length = VAR_1 * 2;
 VAR_5[2].buffer.pointer = (u8 *)&VAR_7->idbuff;


 VAR_3 = FUNC_2(VAR_2->acpidata->obj_handle, "_STM",
          &VAR_4, ((void*)0));

 if (FUNC_0(VAR_3)) {
  FUNC_1("Run _STM error: status = 0x%x\n", VAR_3);
 }
 FUNC_1("_STM status: %d\n", VAR_3);
}
