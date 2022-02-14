
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efivar_operations {scalar_t__ (* get_variable ) (int ,int *,int *,unsigned long*,int *) ;} ;
struct TYPE_3__ {int VendorGuid; int VariableName; } ;
struct efivar_entry {TYPE_1__ var; } ;
typedef scalar_t__ efi_status_t ;
struct TYPE_4__ {struct efivar_operations* ops; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ,int *,int *,unsigned long*,int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct efivar_entry *VAR_5, unsigned long *VAR_6)
{
 const struct efivar_operations *VAR_7;
 efi_status_t VAR_8;

 *VAR_6 = 0;

 if (FUNC_0(&VAR_4))
  return -VAR_1;
 if (!VAR_3) {
  FUNC_3(&VAR_4);
  return -VAR_2;
 }
 VAR_7 = VAR_3->ops;
 VAR_8 = VAR_7->get_variable(VAR_5->var.VariableName,
       &VAR_5->var.VendorGuid, ((void*)0), VAR_6, ((void*)0));
 FUNC_3(&VAR_4);

 if (VAR_8 != VAR_0)
  return FUNC_1(VAR_8);

 return 0;
}
