
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


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
 int FUNC_1 (TYPE_1__*,int*,int*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int,int) ;

__attribute__((used)) static void
FUNC_5(ACPI_MADT_INTERRUPT_OVERRIDE *VAR_4)
{
 enum intr_trigger VAR_5;
 enum intr_polarity VAR_6;
 int VAR_7;

 if (VAR_2 & VAR_0 && VAR_4->SourceIrq == 0 &&
     VAR_4->GlobalIrq == 2) {
  if (VAR_3)
   FUNC_3("MADT: Skipping timer override\n");
  return;
 }

 FUNC_1(VAR_4, &VAR_5, &VAR_6);


 if (VAR_4->SourceIrq != VAR_4->GlobalIrq && VAR_4->GlobalIrq > 15 &&
     VAR_4->SourceIrq == VAR_1.SciInterrupt)




  FUNC_0(VAR_4->GlobalIrq);


 VAR_7 = FUNC_4(VAR_4->GlobalIrq, VAR_5, VAR_6);
 if (VAR_7 != 0)
  FUNC_2("Unable to register interrupt override");
}
