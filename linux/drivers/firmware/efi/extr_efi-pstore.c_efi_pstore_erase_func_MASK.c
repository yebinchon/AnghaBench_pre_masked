
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int VariableName; int VendorGuid; } ;
struct efivar_entry {int deleting; int list; scalar_t__ scanning; TYPE_1__ var; } ;
typedef int efi_guid_t ;
typedef int efi_char16_t ;


 int VAR_0 ;
 int FUNC_0 (struct efivar_entry*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *,size_t) ;

__attribute__((used)) static int FUNC_5(struct efivar_entry *VAR_1, void *VAR_2)
{
 efi_char16_t *VAR_3 = VAR_2;
 efi_guid_t VAR_4 = VAR_0;
 unsigned long VAR_5 = FUNC_3(VAR_3);

 if (FUNC_1(VAR_1->var.VendorGuid, VAR_4))
  return 0;

 if (FUNC_4(VAR_1->var.VariableName, VAR_3, (size_t)VAR_5))
  return 0;

 if (VAR_1->scanning) {




  VAR_1->deleting = 1;
 } else
  FUNC_2(&VAR_1->list);


 FUNC_0(VAR_1);

 return 1;
}
