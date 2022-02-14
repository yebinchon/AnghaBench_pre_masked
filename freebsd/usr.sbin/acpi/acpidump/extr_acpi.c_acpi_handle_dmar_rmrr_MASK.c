
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_4__ {int Length; } ;
struct TYPE_5__ {int Segment; TYPE_1__ Header; scalar_t__ EndAddress; scalar_t__ BaseAddress; } ;
typedef TYPE_2__ ACPI_DMAR_RESERVED_MEMORY ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(ACPI_DMAR_RESERVED_MEMORY *VAR_0)
{
 char *VAR_1;
 int VAR_2, VAR_3;

 FUNC_1("\n");
 FUNC_1("\tType=RMRR\n");
 FUNC_1("\tLength=%d\n", VAR_0->Header.Length);
 FUNC_1("\tSegment=%d\n", VAR_0->Segment);
 FUNC_1("\tBaseAddress=0x%016jx\n", (uintmax_t)VAR_0->BaseAddress);
 FUNC_1("\tLimitAddress=0x%016jx\n", (uintmax_t)VAR_0->EndAddress);

 VAR_2 = VAR_0->Header.Length - sizeof(ACPI_DMAR_RESERVED_MEMORY);
 if (VAR_2 > 0)
  FUNC_1("\tDevice Scope:");
 while (VAR_2 > 0) {
  VAR_1 = (char *)VAR_0 + VAR_0->Header.Length - VAR_2;
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3 <= 0)
   break;
  else
   VAR_2 -= VAR_3;
 }
}
