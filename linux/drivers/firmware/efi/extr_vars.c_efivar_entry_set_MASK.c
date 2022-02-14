
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct list_head {int dummy; } ;
struct efivar_operations {scalar_t__ (* set_variable ) (int *,int *,int ,unsigned long,void*) ;} ;
struct TYPE_3__ {int VendorGuid; int * VariableName; } ;
struct efivar_entry {TYPE_1__ var; } ;
typedef scalar_t__ efi_status_t ;
typedef int efi_guid_t ;
typedef int efi_char16_t ;
struct TYPE_4__ {struct efivar_operations* ops; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ,struct list_head*,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int *,int *,int ,unsigned long,void*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct efivar_entry *VAR_7, u32 VAR_8,
       unsigned long VAR_9, void *VAR_10, struct list_head *VAR_11)
{
 const struct efivar_operations *VAR_12;
 efi_status_t VAR_13;
 efi_char16_t *VAR_14 = VAR_7->var.VariableName;
 efi_guid_t VAR_15 = VAR_7->var.VendorGuid;

 if (FUNC_1(&VAR_6))
  return -VAR_3;

 if (!VAR_5) {
  FUNC_6(&VAR_6);
  return -VAR_4;
 }
 VAR_12 = VAR_5->ops;
 if (VAR_11 && FUNC_3(VAR_14, VAR_15, VAR_11, 0)) {
  FUNC_6(&VAR_6);
  return -VAR_0;
 }

 VAR_13 = FUNC_0(VAR_8, VAR_9 + FUNC_5(VAR_14, 1024));
 if (VAR_13 == VAR_1 || VAR_13 == VAR_2)
  VAR_13 = VAR_12->set_variable(VAR_14, &VAR_15,
        VAR_8, VAR_9, VAR_10);

 FUNC_6(&VAR_6);

 return FUNC_2(VAR_13);

}
