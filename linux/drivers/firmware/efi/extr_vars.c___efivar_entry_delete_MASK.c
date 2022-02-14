
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int VendorGuid; int VariableName; } ;
struct efivar_entry {TYPE_2__ var; } ;
typedef int efi_status_t ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* set_variable ) (int ,int *,int ,int ,int *) ;} ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int ,int *) ;

int FUNC_2(struct efivar_entry *VAR_2)
{
 efi_status_t VAR_3;

 if (!VAR_1)
  return -VAR_0;

 VAR_3 = VAR_1->ops->set_variable(VAR_2->var.VariableName,
           &VAR_2->var.VendorGuid,
           0, 0, ((void*)0));

 return FUNC_0(VAR_3);
}
