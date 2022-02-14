
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int GlobalIrq; int IntiFlags; } ;
typedef TYPE_1__ ACPI_MADT_NMI_SOURCE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int ,int ) ;
 int FUNC_4 (void*,int ,int ) ;
 scalar_t__ FUNC_5 (int,void**,int *) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void
FUNC_7(ACPI_MADT_NMI_SOURCE *VAR_2)
{
 void *VAR_3;
 u_int VAR_4;

 if (FUNC_5(VAR_2->GlobalIrq, &VAR_3, &VAR_4) != 0) {
  FUNC_6("MADT: Could not find APIC for vector %u\n",
      VAR_2->GlobalIrq);
  return;
 }

 FUNC_2(VAR_3, VAR_4);
 if (!(VAR_2->IntiFlags & VAR_1))
  FUNC_4(VAR_3, VAR_4,
      FUNC_1(VAR_2->IntiFlags, 0));
 if (!(VAR_2->IntiFlags & VAR_0))
  FUNC_3(VAR_3, VAR_4,
      FUNC_0(VAR_2->IntiFlags, 0));
}
