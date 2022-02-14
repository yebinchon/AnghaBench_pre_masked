
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct efivar_entry {int scanning; } ;
struct efi_variable {int VendorGuid; int * VariableName; } ;
struct compat_efi_variable {int VendorGuid; int * VariableName; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
typedef int efi_guid_t ;
typedef int efi_char16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct efivar_entry*) ;
 int FUNC_1 (int ) ;
 struct efivar_entry* FUNC_2 (int *,int ,int *,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (struct efivar_entry*) ;
 scalar_t__ FUNC_6 () ;

__attribute__((used)) static ssize_t FUNC_7(struct file *VAR_6, struct kobject *VAR_7,
        struct bin_attribute *VAR_8,
        char *VAR_9, loff_t VAR_10, size_t VAR_11)
{
 struct efi_variable *VAR_12 = (struct efi_variable *)VAR_9;
 struct compat_efi_variable *VAR_13;
 struct efivar_entry *VAR_14;
 efi_char16_t *VAR_15;
 efi_guid_t VAR_16;
 int VAR_17 = 0;

 if (!FUNC_1(VAR_0))
  return -VAR_1;

 if (FUNC_6()) {
  if (VAR_11 != sizeof(*VAR_13))
   return -VAR_3;

  VAR_13 = (struct compat_efi_variable *)VAR_9;
  VAR_15 = VAR_13->VariableName;
  VAR_16 = VAR_13->VendorGuid;
 } else {
  if (VAR_11 != sizeof(*VAR_12))
   return -VAR_3;

  VAR_15 = VAR_12->VariableName;
  VAR_16 = VAR_12->VendorGuid;
 }

 if (FUNC_3())
  return -VAR_2;
 VAR_14 = FUNC_2(VAR_15, VAR_16, &VAR_5, 1);
 if (!VAR_14)
  VAR_17 = -VAR_3;
 else if (FUNC_0(VAR_14))
  VAR_17 = -VAR_4;

 if (VAR_17) {
  FUNC_4();
  return VAR_17;
 }

 if (!VAR_14->scanning) {
  FUNC_4();
  FUNC_5(VAR_14);
 } else
  FUNC_4();


 return VAR_11;
}
