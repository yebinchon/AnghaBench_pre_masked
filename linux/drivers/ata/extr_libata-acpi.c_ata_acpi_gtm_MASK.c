
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
struct ata_port {int tdev; } ;
struct ata_acpi_gtm {int dummy; } ;
struct acpi_buffer {union acpi_object* pointer; int length; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_3 (struct ata_port*,char*,scalar_t__) ;
 int FUNC_4 (struct ata_port*,char*,scalar_t__) ;
 int FUNC_5 (union acpi_object*) ;
 int FUNC_6 (struct ata_acpi_gtm*,int ,int) ;

int FUNC_7(struct ata_port *VAR_5, struct ata_acpi_gtm *VAR_6)
{
 struct acpi_buffer VAR_7 = { .length = VAR_0 };
 union acpi_object *VAR_8;
 acpi_status VAR_9;
 int VAR_10 = 0;
 acpi_handle VAR_11 = FUNC_1(&VAR_5->tdev);

 if (!VAR_11)
  return -VAR_3;

 VAR_9 = FUNC_2(VAR_11, "_GTM", ((void*)0), &VAR_7);

 VAR_10 = -VAR_4;
 if (VAR_9 == VAR_2)
  goto out_free;

 VAR_10 = -VAR_3;
 if (FUNC_0(VAR_9)) {
  FUNC_3(VAR_5, "ACPI get timing mode failed (AE 0x%x)\n",
        VAR_9);
  goto out_free;
 }

 VAR_8 = VAR_7.pointer;
 if (VAR_8->type != VAR_1) {
  FUNC_4(VAR_5, "_GTM returned unexpected object type 0x%x\n",
         VAR_8->type);

  goto out_free;
 }

 if (VAR_8->buffer.length != sizeof(struct ata_acpi_gtm)) {
  FUNC_3(VAR_5, "_GTM returned invalid length %d\n",
        VAR_8->buffer.length);
  goto out_free;
 }

 FUNC_6(VAR_6, VAR_8->buffer.pointer, sizeof(struct ata_acpi_gtm));
 VAR_10 = 0;
 out_free:
 FUNC_5(VAR_7.pointer);
 return VAR_10;
}
