
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_3__ {int Flags; int ProximityDomain; scalar_t__ Length; scalar_t__ BaseAddress; } ;
typedef TYPE_1__ ACPI_SRAT_MEM_AFFINITY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(ACPI_SRAT_MEM_AFFINITY *VAR_3)
{

 FUNC_0("\tFlags={");
 if (VAR_3->Flags & VAR_0)
  FUNC_0("ENABLED");
 else
  FUNC_0("DISABLED");
 if (VAR_3->Flags & VAR_1)
  FUNC_0(",HOT_PLUGGABLE");
 if (VAR_3->Flags & VAR_2)
  FUNC_0(",NON_VOLATILE");
 FUNC_0("}\n");
 FUNC_0("\tBase Address=0x%016jx\n", (uintmax_t)VAR_3->BaseAddress);
 FUNC_0("\tLength=0x%016jx\n", (uintmax_t)VAR_3->Length);
 FUNC_0("\tProximity Domain=%d\n", VAR_3->ProximityDomain);
}
