
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
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *,int *,unsigned long*,void*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct efivar_entry *VAR_4, u32 *VAR_5,
       unsigned long *VAR_6, void *VAR_7)
{
 efi_status_t VAR_8;

 if (FUNC_0(&VAR_3))
  return -VAR_0;

 if (!VAR_2) {
  FUNC_3(&VAR_3);
  return -VAR_1;
 }

 VAR_8 = VAR_2->ops->get_variable(VAR_4->var.VariableName,
           &VAR_4->var.VendorGuid,
           VAR_5, VAR_6, VAR_7);
 FUNC_3(&VAR_3);

 return FUNC_1(VAR_8);
}
