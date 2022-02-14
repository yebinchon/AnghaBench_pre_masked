
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dmar_unit {int unit; } ;
struct TYPE_8__ {int Length; } ;
struct TYPE_6__ {int Length; } ;
struct TYPE_7__ {int Segment; int Flags; TYPE_1__ Header; } ;
typedef int ACPI_DMAR_PCI_PATH ;
typedef TYPE_2__ ACPI_DMAR_HARDWARE_UNIT ;
typedef TYPE_3__ ACPI_DMAR_DEVICE_SCOPE ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int,int const*,int) ;

__attribute__((used)) static bool
FUNC_2(struct dmar_unit *VAR_1, int VAR_2, int VAR_3,
    const ACPI_DMAR_PCI_PATH *VAR_4, int VAR_5, const char **VAR_6)
{
 ACPI_DMAR_HARDWARE_UNIT *VAR_7;
 ACPI_DMAR_DEVICE_SCOPE *VAR_8;
 char *VAR_9, *VAR_10;
 int VAR_11;

 VAR_7 = FUNC_0(VAR_1->unit);
 if (VAR_7 == ((void*)0))
  return (0);
 if (VAR_7->Segment != VAR_2)
  return (0);
 if ((VAR_7->Flags & VAR_0) != 0) {
  if (VAR_6 != ((void*)0))
   *VAR_6 = "INCLUDE_ALL";
  return (1);
 }
 VAR_9 = (char *)VAR_7 + sizeof(*VAR_7);
 VAR_10 = (char *)VAR_7 + VAR_7->Header.Length;
 while (VAR_9 < VAR_10) {
  VAR_8 = (ACPI_DMAR_DEVICE_SCOPE *)VAR_9;
  VAR_9 += VAR_8->Length;
  VAR_11 = FUNC_1(VAR_8, VAR_3, VAR_4,
      VAR_5);
  if (VAR_11 == -1)
   return (0);
  if (VAR_11 == 1) {
   if (VAR_6 != ((void*)0))
    *VAR_6 = "specific match";
   return (1);
  }
 }
 return (0);
}
