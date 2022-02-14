
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Flags; } ;
struct TYPE_5__ {int Residency; int Latency; scalar_t__ CounterFrequency; int ResidencyCounter; TYPE_1__ Header; int EntryTrigger; } ;
typedef TYPE_2__ ACPI_LPIT_NATIVE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(ACPI_LPIT_NATIVE *VAR_1)
{
 FUNC_1("\tEntryTrigger=");
 FUNC_0(&VAR_1->EntryTrigger);
 FUNC_1("\tResidency=%u\n", VAR_1->Residency);
 FUNC_1("\tLatency=%u\n", VAR_1->Latency);
 if (VAR_1->Header.Flags & VAR_0)
  FUNC_1("\tResidencyCounter=Not Present");
 else {
  FUNC_1("\tResidencyCounter=");
  FUNC_0(&VAR_1->ResidencyCounter);
 }
 if (VAR_1->CounterFrequency)
  FUNC_1("\tCounterFrequency=%ju\n", VAR_1->CounterFrequency);
 else
  FUNC_1("\tCounterFrequency=TSC\n");
}
