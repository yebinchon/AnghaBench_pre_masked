
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ Data; int VendorGuid; int * VariableName; } ;
struct efivar_entry {TYPE_1__ var; } ;
typedef int guid ;
typedef int efi_guid_t ;
typedef int efi_char16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (int *,int ,int,int,size_t,scalar_t__) ;
 int FUNC_2 (struct efivar_entry*) ;
 struct efivar_entry* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_7, const char *VAR_8)
{
 int VAR_9;
 efi_guid_t VAR_10 = VAR_6;
 struct efivar_entry *VAR_11;
 size_t VAR_12 = (FUNC_6(VAR_8) + 1) * sizeof(efi_char16_t);

 if (VAR_12 > sizeof(VAR_11->var.Data)) {
  FUNC_5("value is too large (%zu bytes) for '%s' EFI variable\n", VAR_12, VAR_7);
  return -VAR_3;
 }

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_5);
 if (!VAR_11) {
  FUNC_5("failed to allocate efivar entry for '%s' EFI variable\n", VAR_7);
  return -VAR_4;
 }

 FUNC_0(VAR_7, VAR_11->var.VariableName);
 FUNC_0(VAR_8, (efi_char16_t *)VAR_11->var.Data);
 FUNC_4(&VAR_11->var.VendorGuid, &VAR_10, sizeof(VAR_10));

 VAR_9 = FUNC_1(VAR_11->var.VariableName,
        VAR_11->var.VendorGuid,
        VAR_1
        | VAR_0
        | VAR_2,
        0, VAR_12, VAR_11->var.Data);

 if (VAR_9)
  FUNC_5("failed to set %s EFI variable: 0x%x\n",
         VAR_7, VAR_9);

 FUNC_2(VAR_11);
 return VAR_9;
}
