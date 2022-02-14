
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct efivar_operations {int (* query_variable_store ) (int ,unsigned long,int) ;} ;
typedef int efi_status_t ;
struct TYPE_2__ {struct efivar_operations* ops; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,unsigned long,int) ;

__attribute__((used)) static efi_status_t
FUNC_1(u32 VAR_2, unsigned long VAR_3)
{
 const struct efivar_operations *VAR_4;

 if (!VAR_1)
  return VAR_0;

 VAR_4 = VAR_1->ops;

 if (!VAR_4->query_variable_store)
  return VAR_0;

 return VAR_4->query_variable_store(VAR_2, VAR_3, 1);
}
