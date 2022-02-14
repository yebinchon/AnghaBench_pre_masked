
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int LapicFlags; int Id; int ProcessorId; } ;
struct TYPE_6__ {int LapicFlags; int LocalApicId; int Uid; } ;
struct TYPE_5__ {int Type; } ;
typedef TYPE_1__ ACPI_SUBTABLE_HEADER ;
typedef TYPE_2__ ACPI_MADT_LOCAL_X2APIC ;
typedef TYPE_3__ ACPI_MADT_LOCAL_APIC ;




 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(ACPI_SUBTABLE_HEADER *VAR_0, void *VAR_1)
{
 ACPI_MADT_LOCAL_APIC *VAR_2;
 ACPI_MADT_LOCAL_X2APIC *VAR_3;

 switch (VAR_0->Type) {
 case 129:
  VAR_2 = (ACPI_MADT_LOCAL_APIC *)VAR_0;
  FUNC_0(VAR_2->ProcessorId, VAR_2->Id, VAR_2->LapicFlags);
  break;
 case 128:
  VAR_3 = (ACPI_MADT_LOCAL_X2APIC *)VAR_0;
  FUNC_0(VAR_3->Uid, VAR_3->LocalApicId,
      VAR_3->LapicFlags);
  break;
 }
}
