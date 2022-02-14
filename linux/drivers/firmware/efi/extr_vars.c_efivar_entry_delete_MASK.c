
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efivar_operations {scalar_t__ (* set_variable ) (int ,int *,int ,int ,int *) ;} ;
struct TYPE_3__ {int VendorGuid; int VariableName; } ;
struct efivar_entry {TYPE_1__ var; } ;
typedef scalar_t__ efi_status_t ;
struct TYPE_4__ {struct efivar_operations* ops; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct efivar_entry*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ,int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct efivar_entry *VAR_6)
{
 const struct efivar_operations *VAR_7;
 efi_status_t VAR_8;

 if (FUNC_0(&VAR_5))
  return -VAR_2;

 if (!VAR_4) {
  FUNC_4(&VAR_5);
  return -VAR_3;
 }
 VAR_7 = VAR_4->ops;
 VAR_8 = VAR_7->set_variable(VAR_6->var.VariableName,
       &VAR_6->var.VendorGuid,
       0, 0, ((void*)0));
 if (!(VAR_8 == VAR_1 || VAR_8 == VAR_0)) {
  FUNC_4(&VAR_5);
  return FUNC_1(VAR_8);
 }

 FUNC_2(VAR_6);
 return 0;
}
