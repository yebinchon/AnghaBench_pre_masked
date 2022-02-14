
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; int * pointer; } ;
union acpi_object {TYPE_1__ buffer; void* type; } ;
typedef int u8 ;
struct TYPE_6__ {TYPE_2__* device; } ;
struct ata_port {int tdev; TYPE_3__ link; } ;
struct ata_acpi_gtm {int dummy; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
typedef scalar_t__ acpi_status ;
struct TYPE_5__ {scalar_t__ id; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,char*,struct acpi_object_list*,int *) ;
 int FUNC_3 (struct ata_port*,char*,scalar_t__) ;

int FUNC_4(struct ata_port *VAR_4, const struct ata_acpi_gtm *VAR_5)
{
 acpi_status VAR_6;
 struct ata_acpi_gtm VAR_7 = *VAR_5;
 struct acpi_object_list VAR_8;
 union acpi_object VAR_9[3];

 VAR_9[0].type = VAR_0;
 VAR_9[0].buffer.length = sizeof(struct ata_acpi_gtm);
 VAR_9[0].buffer.pointer = (u8 *)&VAR_7;

 VAR_9[1].type = VAR_0;
 VAR_9[1].buffer.length = 512;
 VAR_9[1].buffer.pointer = (u8 *)VAR_4->link.device[0].id;
 VAR_9[2].type = VAR_0;
 VAR_9[2].buffer.length = 512;
 VAR_9[2].buffer.pointer = (u8 *)VAR_4->link.device[1].id;

 VAR_8.count = 3;
 VAR_8.pointer = VAR_9;

 VAR_6 = FUNC_2(FUNC_1(&VAR_4->tdev), "_STM",
          &VAR_8, ((void*)0));

 if (VAR_6 == VAR_1)
  return -VAR_3;
 if (FUNC_0(VAR_6)) {
  FUNC_3(VAR_4, "ACPI set timing mode failed (status=0x%x)\n",
        VAR_6);
  return -VAR_2;
 }
 return 0;
}
