
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int VendorGuid; int * VariableName; } ;
struct efivar_entry {TYPE_1__ var; } ;
typedef int efi_guid_t ;
typedef int efi_char16_t ;


 scalar_t__ FUNC_0 (int *,int ,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(efi_char16_t *VAR_1, efi_guid_t VAR_2,
         unsigned long VAR_3, void *VAR_4)
{
 struct efivar_entry *VAR_5 = VAR_4;

 if (FUNC_0(VAR_1, VAR_2, &VAR_0, 0))
  return 0;

 FUNC_1(VAR_5->var.VariableName, VAR_1, VAR_3);
 FUNC_1(&(VAR_5->var.VendorGuid), &VAR_2, sizeof(efi_guid_t));

 return 1;
}
