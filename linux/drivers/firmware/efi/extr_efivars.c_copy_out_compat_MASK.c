
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efi_variable {int Attributes; int DataSize; int VendorGuid; int Data; int VariableName; } ;
struct compat_efi_variable {int Attributes; int DataSize; int VendorGuid; int Data; int VariableName; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct efi_variable *VAR_1, struct compat_efi_variable *VAR_2)
{
 FUNC_0(VAR_1->VariableName, VAR_2->VariableName, VAR_0);
 FUNC_0(VAR_1->Data, VAR_2->Data, sizeof(VAR_2->Data));

 VAR_1->VendorGuid = VAR_2->VendorGuid;
 VAR_1->DataSize = VAR_2->DataSize;
 VAR_1->Attributes = VAR_2->Attributes;
}
