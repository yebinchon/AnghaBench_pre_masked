
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int VendorGuid; int * VariableName; } ;
struct efivar_entry {TYPE_1__ var; } ;
typedef int efi_guid_t ;
typedef int efi_char16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efivar_entry*) ;
 struct efivar_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(efi_char16_t *VAR_2, efi_guid_t VAR_3,
      unsigned long VAR_4, void *VAR_5)
{
 struct efivar_entry *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_2(VAR_6->var.VariableName, VAR_2, VAR_4);
 FUNC_2(&(VAR_6->var.VendorGuid), &VAR_3, sizeof(efi_guid_t));

 FUNC_0(VAR_6);

 return 0;
}
