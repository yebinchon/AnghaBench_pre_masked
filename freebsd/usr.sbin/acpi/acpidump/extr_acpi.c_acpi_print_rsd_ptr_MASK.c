
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_3__ {int Revision; int RsdtPhysicalAddress; int Checksum; int ExtendedChecksum; int Length; scalar_t__ XsdtPhysicalAddress; int OemId; } ;
typedef TYPE_1__ ACPI_TABLE_RSDP ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(ACPI_TABLE_RSDP *VAR_3)
{
 FUNC_1(VAR_1);
 FUNC_1("  RSD PTR: OEM=");
 FUNC_0(VAR_3->OemId, VAR_0);
 FUNC_1(", ACPI_Rev=%s (%d)\n", VAR_3->Revision < 2 ? "1.0x" : "2.0x",
        VAR_3->Revision);
 if (VAR_3->Revision < 2) {
  FUNC_1("\tRSDT=0x%08x, cksum=%u\n", VAR_3->RsdtPhysicalAddress,
      VAR_3->Checksum);
 } else {
  FUNC_1("\tXSDT=0x%016jx, length=%u, cksum=%u\n",
      (uintmax_t)VAR_3->XsdtPhysicalAddress, VAR_3->Length,
      VAR_3->ExtendedChecksum);
 }
 FUNC_1(VAR_2);
}
