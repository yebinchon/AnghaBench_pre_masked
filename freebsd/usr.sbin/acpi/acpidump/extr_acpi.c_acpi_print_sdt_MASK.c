
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Length; int Revision; int Checksum; int OemRevision; int AslCompilerRevision; int AslCompilerId; int OemTableId; int OemId; int Signature; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(ACPI_TABLE_HEADER *VAR_3)
{
 FUNC_1("  ");
 FUNC_0(VAR_3->Signature, VAR_0);
 FUNC_1(": Length=%d, Revision=%d, Checksum=%d,\n",
        VAR_3->Length, VAR_3->Revision, VAR_3->Checksum);
 FUNC_1("\tOEMID=");
 FUNC_0(VAR_3->OemId, VAR_1);
 FUNC_1(", OEM Table ID=");
 FUNC_0(VAR_3->OemTableId, VAR_2);
 FUNC_1(", OEM Revision=0x%x,\n", VAR_3->OemRevision);
 FUNC_1("\tCreator ID=");
 FUNC_0(VAR_3->AslCompilerId, VAR_0);
 FUNC_1(", Creator Revision=0x%x\n", VAR_3->AslCompilerRevision);
}
