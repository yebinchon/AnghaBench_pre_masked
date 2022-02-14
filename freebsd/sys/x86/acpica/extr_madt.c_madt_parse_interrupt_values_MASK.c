
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum intr_trigger { ____Placeholder_intr_trigger } intr_trigger ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;
typedef int buf ;
struct TYPE_4__ {scalar_t__ SciInterrupt; } ;
struct TYPE_3__ {int SourceIrq; int GlobalIrq; scalar_t__ Bus; int IntiFlags; } ;
typedef TYPE_1__ ACPI_MADT_INTERRUPT_OVERRIDE ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_6 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,...) ;
 char FUNC_6 (char) ;

void
FUNC_7(void *VAR_7,
    enum intr_trigger *VAR_8, enum intr_polarity *VAR_9)
{
 ACPI_MADT_INTERRUPT_OVERRIDE *VAR_10;
 char VAR_11[64];

 VAR_10 = VAR_7;

 if (VAR_5)
  FUNC_5("MADT: Interrupt override: source %u, irq %u\n",
      VAR_10->SourceIrq, VAR_10->GlobalIrq);
 FUNC_0(VAR_10->Bus == 0, ("bus for interrupt overrides must be zero"));





 *VAR_8 = FUNC_3(VAR_10->IntiFlags, VAR_10->SourceIrq);
 *VAR_9 = FUNC_2(VAR_10->IntiFlags, VAR_10->SourceIrq);






 if (VAR_10->SourceIrq == VAR_0.SciInterrupt) {
  VAR_6 = 1;
  if (FUNC_1("hw.acpi.sci.trigger", VAR_11, sizeof(VAR_11))) {
   if (FUNC_6(VAR_11[0]) == 'e')
    *VAR_8 = VAR_3;
   else if (FUNC_6(VAR_11[0]) == 'l')
    *VAR_8 = VAR_4;
   else
    FUNC_4(
    "Invalid trigger %s: must be 'edge' or 'level'",
        VAR_11);
   FUNC_5("MADT: Forcing SCI to %s trigger\n",
       *VAR_8 == VAR_3 ? "edge" : "level");
  }
  if (FUNC_1("hw.acpi.sci.polarity", VAR_11, sizeof(VAR_11))) {
   if (FUNC_6(VAR_11[0]) == 'h')
    *VAR_9 = VAR_1;
   else if (FUNC_6(VAR_11[0]) == 'l')
    *VAR_9 = VAR_2;
   else
    FUNC_4(
    "Invalid polarity %s: must be 'high' or 'low'",
        VAR_11);
   FUNC_5("MADT: Forcing SCI to active %s polarity\n",
       *VAR_9 == VAR_1 ? "high" : "low");
  }
 }
}
