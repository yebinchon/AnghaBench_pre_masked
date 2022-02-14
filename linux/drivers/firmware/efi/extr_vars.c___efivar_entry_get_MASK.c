
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int VendorGuid; int VariableName; } ;
struct efivar_entry {TYPE_2__ var; } ;
typedef int efi_status_t ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* get_variable ) (int ,int *,int *,unsigned long*,void*) ;} ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,unsigned long*,void*) ;

int FUNC_2(struct efivar_entry *VAR_2, u32 *VAR_3,
         unsigned long *VAR_4, void *VAR_5)
{
 efi_status_t VAR_6;

 if (!VAR_1)
  return -VAR_0;

 VAR_6 = VAR_1->ops->get_variable(VAR_2->var.VariableName,
           &VAR_2->var.VendorGuid,
           VAR_3, VAR_4, VAR_5);

 return FUNC_0(VAR_6);
}
