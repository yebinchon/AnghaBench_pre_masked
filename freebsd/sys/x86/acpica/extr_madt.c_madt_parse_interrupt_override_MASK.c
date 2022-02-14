
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef enum intr_trigger { ____Placeholder_intr_trigger } intr_trigger ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;
struct TYPE_6__ {int SciInterrupt; } ;
struct TYPE_5__ {int SourceIrq; int GlobalIrq; } ;
typedef TYPE_1__ ACPI_MADT_INTERRUPT_OVERRIDE ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int ,int) ;
 int FUNC_4 (void*,int ,int) ;
 int FUNC_5 (void*,int ,int) ;
 scalar_t__ FUNC_6 (int,void**,int *) ;
 int FUNC_7 (TYPE_1__*,int*,int*) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static void
FUNC_9(ACPI_MADT_INTERRUPT_OVERRIDE *VAR_4)
{
 void *VAR_5, *VAR_6;
 u_int VAR_7, VAR_8;
 enum intr_trigger VAR_9;
 enum intr_polarity VAR_10;

 if (VAR_2 & VAR_0 && VAR_4->SourceIrq == 0 &&
     VAR_4->GlobalIrq == 2) {
  if (VAR_3)
   FUNC_8("MADT: Skipping timer override\n");
  return;
 }

 if (FUNC_6(VAR_4->GlobalIrq, &VAR_5, &VAR_7) != 0) {
  FUNC_8("MADT: Could not find APIC for vector %u (IRQ %u)\n",
      VAR_4->GlobalIrq, VAR_4->SourceIrq);
  return;
 }

 FUNC_7(VAR_4, &VAR_9, &VAR_10);


 if (VAR_4->SourceIrq != VAR_4->GlobalIrq) {





  if (VAR_4->GlobalIrq > 15 &&
      VAR_4->SourceIrq == VAR_1.SciInterrupt)
   FUNC_0(VAR_4->GlobalIrq);
  else
   FUNC_3(VAR_5, VAR_7,
       VAR_4->SourceIrq);
  if (FUNC_6(VAR_4->SourceIrq, &VAR_6,
      &VAR_8) != 0)
   FUNC_8("MADT: Could not find APIC for source IRQ %u\n",
       VAR_4->SourceIrq);
  else if (FUNC_2(VAR_6, VAR_8) ==
      VAR_4->SourceIrq)
   FUNC_1(VAR_6, VAR_8);
 }


 FUNC_5(VAR_5, VAR_7, VAR_9);
 FUNC_4(VAR_5, VAR_7, VAR_10);
}
