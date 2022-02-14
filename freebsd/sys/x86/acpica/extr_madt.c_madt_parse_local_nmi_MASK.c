
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ProcessorId; int IntiFlags; int Lint; } ;
typedef TYPE_1__ ACPI_MADT_LOCAL_APIC_NMI ;


 int FUNC_0 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_1(ACPI_MADT_LOCAL_APIC_NMI *VAR_0)
{

 FUNC_0(VAR_0->ProcessorId == 0xff ? 0xffffffff :
     VAR_0->ProcessorId, VAR_0->Lint, VAR_0->IntiFlags);
}
