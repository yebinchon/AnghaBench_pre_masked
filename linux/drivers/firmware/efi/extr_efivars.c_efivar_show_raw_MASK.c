
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efi_variable {int DataSize; int Attributes; int VendorGuid; struct efi_variable* Data; struct efi_variable* VariableName; } ;
struct efivar_entry {struct efi_variable var; } ;
struct compat_efi_variable {char* VariableName; char* Data; int DataSize; int Attributes; int VendorGuid; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct efivar_entry*,int *,int*,struct efi_variable*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,struct efi_variable*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_3(struct efivar_entry *VAR_2, char *VAR_3)
{
 struct efi_variable *VAR_4 = &VAR_2->var;
 struct compat_efi_variable *VAR_5;
 size_t VAR_6;

 if (!VAR_2 || !VAR_3)
  return 0;

 VAR_4->DataSize = 1024;
 if (FUNC_0(VAR_2, &VAR_2->var.Attributes,
        &VAR_2->var.DataSize, VAR_2->var.Data))
  return -VAR_1;

 if (FUNC_1()) {
  VAR_5 = (struct compat_efi_variable *)VAR_3;

  VAR_6 = sizeof(*VAR_5);
  FUNC_2(VAR_5->VariableName, VAR_4->VariableName,
   VAR_0);
  FUNC_2(VAR_5->Data, VAR_4->Data, sizeof(VAR_5->Data));

  VAR_5->VendorGuid = VAR_4->VendorGuid;
  VAR_5->DataSize = VAR_4->DataSize;
  VAR_5->Attributes = VAR_4->Attributes;
 } else {
  VAR_6 = sizeof(*VAR_4);
  FUNC_2(VAR_3, VAR_4, VAR_6);
 }

 return VAR_6;
}
