
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Length; int EntryType; int Bus; } ;
typedef int ACPI_DMAR_PCI_PATH ;
typedef TYPE_1__ ACPI_DMAR_DEVICE_SCOPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int,int,int const*,int,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(ACPI_DMAR_DEVICE_SCOPE *VAR_2, int VAR_3,
    const ACPI_DMAR_PCI_PATH *VAR_4, int VAR_5)
{
 ACPI_DMAR_PCI_PATH *VAR_6;
 int VAR_7;

 if (VAR_2->Length < sizeof(*VAR_2)) {
  FUNC_1("dmar_match_devscope: corrupted DMAR table, dl %d\n",
      VAR_2->Length);
  return (-1);
 }
 if (VAR_2->EntryType != VAR_1 &&
     VAR_2->EntryType != VAR_0)
  return (0);
 VAR_7 = VAR_2->Length - sizeof(*VAR_2);
 if (VAR_7 % 2 != 0) {
  FUNC_1("dmar_match_devscope: corrupted DMAR table, dl %d\n",
      VAR_2->Length);
  return (-1);
 }
 VAR_7 /= 2;
 VAR_6 = (ACPI_DMAR_PCI_PATH *)(VAR_2 + 1);
 if (VAR_7 == 0) {
  FUNC_1("dmar_match_devscope: corrupted DMAR table, dl %d\n",
      VAR_2->Length);
  return (-1);
 }

 return (FUNC_0(VAR_2->Bus, VAR_6, VAR_7, VAR_3,
     VAR_4, VAR_5, VAR_2->EntryType));
}
