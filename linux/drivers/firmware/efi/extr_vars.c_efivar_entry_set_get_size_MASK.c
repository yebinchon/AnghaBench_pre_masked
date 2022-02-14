
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct efivar_operations {scalar_t__ (* set_variable ) (int *,int *,int ,unsigned long,void*) ;scalar_t__ (* get_variable ) (int *,int *,int *,unsigned long*,int *) ;} ;
struct TYPE_3__ {int VendorGuid; int * VariableName; } ;
struct efivar_entry {TYPE_1__ var; } ;
typedef scalar_t__ efi_status_t ;
typedef int efi_guid_t ;
typedef int efi_char16_t ;
struct TYPE_4__ {struct efivar_operations* ops; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct efivar_entry*) ;
 int FUNC_4 (int ,int *,void*,unsigned long) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int *,int *,int ,unsigned long,void*) ;
 scalar_t__ FUNC_6 (int *,int *,int *,unsigned long*,int *) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct efivar_entry *VAR_9, u32 VAR_10,
         unsigned long *VAR_11, void *VAR_12, bool *VAR_13)
{
 const struct efivar_operations *VAR_14;
 efi_char16_t *VAR_15 = VAR_9->var.VariableName;
 efi_guid_t *VAR_16 = &VAR_9->var.VendorGuid;
 efi_status_t VAR_17;
 int VAR_18;

 *VAR_13 = 0;

 if (FUNC_4(*VAR_16, VAR_15, VAR_12, *VAR_11) == 0)
  return -VAR_5;






 if (FUNC_1(&VAR_8))
  return -VAR_4;

 if (!VAR_7) {
  VAR_18 = -VAR_5;
  goto out;
 }




 VAR_17 = FUNC_0(VAR_10, *VAR_11 + FUNC_7(VAR_15, 1024));
 if (VAR_17 != VAR_2) {
  if (VAR_17 != VAR_3) {
   VAR_18 = FUNC_2(VAR_17);
   goto out;
  }

  if (*VAR_11 > 65536) {
   VAR_18 = -VAR_6;
   goto out;
  }
 }

 VAR_14 = VAR_7->ops;

 VAR_17 = VAR_14->set_variable(VAR_15, VAR_16, VAR_10, *VAR_11, VAR_12);
 if (VAR_17 != VAR_2) {
  VAR_18 = FUNC_2(VAR_17);
  goto out;
 }

 *VAR_13 = 1;







 *VAR_11 = 0;
 VAR_17 = VAR_14->get_variable(VAR_9->var.VariableName,
       &VAR_9->var.VendorGuid,
       ((void*)0), VAR_11, ((void*)0));

 if (VAR_17 == VAR_1)
  FUNC_3(VAR_9);
 else
  FUNC_8(&VAR_8);

 if (VAR_17 && VAR_17 != VAR_0)
  return FUNC_2(VAR_17);

 return 0;

out:
 FUNC_8(&VAR_8);
 return VAR_18;

}
