
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ uint16_t ;
struct inst_rmrr_iter_args {struct dmar_unit* dmar; } ;
struct dmar_unit {scalar_t__ segment; int unit; } ;
typedef int * device_t ;
struct TYPE_9__ {int Length; scalar_t__ EntryType; int Bus; } ;
struct TYPE_8__ {scalar_t__ Type; } ;
struct TYPE_6__ {int Length; } ;
struct TYPE_7__ {scalar_t__ Segment; scalar_t__ EndAddress; scalar_t__ BaseAddress; TYPE_1__ Header; } ;
typedef TYPE_2__ ACPI_DMAR_RESERVED_MEMORY ;
typedef int ACPI_DMAR_PCI_PATH ;
typedef TYPE_3__ ACPI_DMAR_HEADER ;
typedef TYPE_4__ ACPI_DMAR_DEVICE_SCOPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct dmar_unit* FUNC_0 (int *,int) ;
 struct dmar_unit* FUNC_1 (scalar_t__,int ,int const*,int) ;
 int FUNC_2 (struct dmar_unit*,scalar_t__,scalar_t__,int ,int const*,int,int,int) ;
 int FUNC_3 (struct dmar_unit*,int *,int) ;
 int * FUNC_4 (scalar_t__,int,int ,int const*,scalar_t__*) ;
 int FUNC_5 (int ,int,int const*) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int
FUNC_7(ACPI_DMAR_HEADER *VAR_3, void *VAR_4)
{
 const ACPI_DMAR_RESERVED_MEMORY *VAR_5;
 const ACPI_DMAR_DEVICE_SCOPE *VAR_6;
 struct inst_rmrr_iter_args *VAR_7;
 const char *VAR_8, *VAR_9;
 device_t VAR_10;
 struct dmar_unit *VAR_11;
 int VAR_12;
 uint16_t VAR_13;

 VAR_7 = VAR_4;

 if (VAR_3->Type != VAR_1)
  return (1);

 VAR_5 = (ACPI_DMAR_RESERVED_MEMORY *)VAR_3;
 if (VAR_5->Segment != VAR_7->dmar->segment)
  return (1);

 VAR_8 = (const char *)VAR_5 + sizeof(*VAR_5);
 VAR_9 = (const char *)VAR_5 + VAR_5->Header.Length;
 for (;;) {
  if (VAR_8 >= VAR_9)
   break;
  VAR_6 = (const ACPI_DMAR_DEVICE_SCOPE *)VAR_8;
  VAR_8 += VAR_6->Length;

  if (VAR_6->EntryType != VAR_0)
   continue;
  VAR_13 = 0;
  VAR_12 = (VAR_6->Length -
      sizeof(ACPI_DMAR_DEVICE_SCOPE)) / 2;
  VAR_10 = FUNC_4(VAR_5->Segment, VAR_12,
      VAR_6->Bus,
      (const ACPI_DMAR_PCI_PATH *)(VAR_6 + 1), &VAR_13);
  if (VAR_10 == ((void*)0)) {
   if (VAR_2) {
    FUNC_6("dmar%d no dev found for RMRR "
        "[%#jx, %#jx] rid %#x scope path ",
         VAR_7->dmar->unit,
         (uintmax_t)VAR_5->BaseAddress,
         (uintmax_t)VAR_5->EndAddress,
         VAR_13);
    FUNC_5(VAR_6->Bus, VAR_12,
        (const ACPI_DMAR_PCI_PATH *)(VAR_6 + 1));
    FUNC_6("\n");
   }
   VAR_11 = FUNC_1(VAR_5->Segment,
       VAR_6->Bus,
       (const ACPI_DMAR_PCI_PATH *)(VAR_6 + 1),
       VAR_12);
   if (VAR_7->dmar != VAR_11)
    continue;
   FUNC_2(VAR_7->dmar, VAR_13,
       VAR_5->Segment, VAR_6->Bus,
       (const ACPI_DMAR_PCI_PATH *)(VAR_6 + 1),
       VAR_12, 0, 1);
  } else {
   VAR_11 = FUNC_0(VAR_10, 0);
   if (VAR_7->dmar != VAR_11)
    continue;
   FUNC_3(VAR_7->dmar, VAR_10, 1);
  }
 }

 return (1);

}
