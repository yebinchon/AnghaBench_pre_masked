
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_4__ {int Length; } ;
struct TYPE_5__ {int ProximityDomain; scalar_t__ BaseAddress; TYPE_1__ Header; } ;
typedef TYPE_2__ ACPI_DMAR_RHSA ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(ACPI_DMAR_RHSA *VAR_0)
{

 FUNC_0("\n");
 FUNC_0("\tType=RHSA\n");
 FUNC_0("\tLength=%d\n", VAR_0->Header.Length);
 FUNC_0("\tBaseAddress=0x%016jx\n", (uintmax_t)VAR_0->BaseAddress);
 FUNC_0("\tProximityDomain=0x%08x\n", VAR_0->ProximityDomain);
}
