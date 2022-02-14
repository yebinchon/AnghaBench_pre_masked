
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_23__ {int Length; int Signature; } ;
struct TYPE_22__ {int * TableOffsetEntry; } ;
struct TYPE_21__ {int * TableOffsetEntry; } ;
typedef TYPE_1__ ACPI_TABLE_XSDT ;
typedef TYPE_2__ ACPI_TABLE_RSDT ;
typedef TYPE_3__ ACPI_TABLE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int VAR_15 ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int ,int ,int) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*,int,int ) ;

__attribute__((used)) static void
FUNC_22(ACPI_TABLE_HEADER *VAR_16)
{
 ACPI_TABLE_HEADER *VAR_17;
 ACPI_TABLE_RSDT *VAR_18;
 ACPI_TABLE_XSDT *VAR_19;
 vm_offset_t VAR_20;
 int VAR_21, VAR_22;

 FUNC_15(VAR_16);
 VAR_18 = (ACPI_TABLE_RSDT *)VAR_16;
 VAR_19 = (ACPI_TABLE_XSDT *)VAR_16;
 VAR_21 = (VAR_16->Length - sizeof(ACPI_TABLE_HEADER)) / VAR_15;
 for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++) {
  if (VAR_15 == 4)
   VAR_20 = FUNC_17(VAR_18->TableOffsetEntry[VAR_22]);
  else
   VAR_20 = FUNC_18(VAR_19->TableOffsetEntry[VAR_22]);
  if (VAR_20 == 0)
   continue;
  VAR_17 = (ACPI_TABLE_HEADER *)FUNC_14(VAR_20);
  if (FUNC_0(VAR_17, VAR_17->Length)) {
   FUNC_21("RSDT entry %d (sig %.4s) is corrupt", VAR_22,
       VAR_17->Signature);
   continue;
  }
  if (!FUNC_19(VAR_17->Signature, VAR_2, 4))
   FUNC_3(VAR_17);
  else if (!FUNC_19(VAR_17->Signature, VAR_5, 4))
   FUNC_6(VAR_17);
  else if (!FUNC_19(VAR_17->Signature, VAR_3, 4))
   FUNC_4(VAR_17);
  else if (!FUNC_19(VAR_17->Signature, VAR_1, 4))
   FUNC_2(VAR_17);
  else if (!FUNC_19(VAR_17->Signature, VAR_6, 4))
   FUNC_7(VAR_17);
  else if (!FUNC_19(VAR_17->Signature, VAR_8, 4))
   FUNC_9(VAR_17);
  else if (!FUNC_19(VAR_17->Signature, VAR_9, 4))
   FUNC_10(VAR_17);
  else if (!FUNC_19(VAR_17->Signature, VAR_10, 4))
   FUNC_11(VAR_17);
  else if (!FUNC_19(VAR_17->Signature, VAR_0, 4))
   FUNC_1(VAR_17);
  else if (!FUNC_19(VAR_17->Signature, VAR_7, 4))
   FUNC_8(VAR_17);
  else if (!FUNC_19(VAR_17->Signature, VAR_12, 4))
   FUNC_13(VAR_17);
  else if (!FUNC_19(VAR_17->Signature, VAR_4, 4))
   FUNC_5(VAR_17);
  else if (!FUNC_19(VAR_17->Signature, VAR_11, 4))
   FUNC_12(VAR_17);
  else {
   FUNC_20(VAR_13);
   FUNC_16(VAR_17);
   FUNC_20(VAR_14);
  }
 }
}
