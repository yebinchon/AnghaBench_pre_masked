
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_3__ {int Length; int HardwareSignature; int FirmwareWakingVector; int GlobalLock; int Flags; scalar_t__ XFirmwareWakingVector; int Version; } ;
typedef TYPE_1__ ACPI_TABLE_FACS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(ACPI_TABLE_FACS *VAR_5)
{
 FUNC_0(VAR_3);
 FUNC_0("  FACS:\tLength=%u, ", VAR_5->Length);
 FUNC_0("HwSig=0x%08x, ", VAR_5->HardwareSignature);
 FUNC_0("Firm_Wake_Vec=0x%08x\n", VAR_5->FirmwareWakingVector);

 FUNC_0("\tGlobal_Lock=");
 if (VAR_5->GlobalLock != 0) {
  if (VAR_5->GlobalLock & VAR_2)
   FUNC_0("PENDING,");
  if (VAR_5->GlobalLock & VAR_1)
   FUNC_0("OWNED");
 }
 FUNC_0("\n");

 FUNC_0("\tFlags=");
 if (VAR_5->Flags & VAR_0)
  FUNC_0("S4BIOS");
 FUNC_0("\n");

 if (VAR_5->XFirmwareWakingVector != 0)
  FUNC_0("\tX_Firm_Wake_Vec=%016jx\n",
      (uintmax_t)VAR_5->XFirmwareWakingVector);
 FUNC_0("\tVersion=%u\n", VAR_5->Version);

 FUNC_0(VAR_4);
}
