
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct efivar_operations {scalar_t__ (* set_variable ) (int *,int *,int ,unsigned long,void*) ;scalar_t__ set_variable_nonblocking; int query_variable_store; } ;
typedef scalar_t__ efi_status_t ;
typedef int efi_guid_t ;
typedef int efi_char16_t ;
struct TYPE_2__ {struct efivar_operations* ops; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int ,int ,unsigned long,void*) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int *,int *,int ,unsigned long,void*) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;

int FUNC_8(efi_char16_t *VAR_8, efi_guid_t VAR_9, u32 VAR_10,
     bool VAR_11, unsigned long VAR_12, void *VAR_13)
{
 const struct efivar_operations *VAR_14;
 efi_status_t VAR_15;

 if (!VAR_6)
  return -VAR_3;

 VAR_14 = VAR_6->ops;
 if (!VAR_14->query_variable_store)
  return -VAR_5;
 if (!VAR_11 && VAR_14->set_variable_nonblocking)
  return FUNC_4(VAR_8, VAR_9, VAR_10,
          VAR_12, VAR_13);

 if (!VAR_11) {
  if (FUNC_2(&VAR_7))
   return -VAR_0;
 } else {
  if (FUNC_1(&VAR_7))
   return -VAR_2;
 }

 VAR_15 = FUNC_0(VAR_10, VAR_12 + FUNC_6(VAR_8, 1024));
 if (VAR_15 != VAR_1) {
  FUNC_7(&VAR_7);
  return -VAR_4;
 }

 VAR_15 = VAR_14->set_variable(VAR_8, &VAR_9, VAR_10, VAR_12, VAR_13);

 FUNC_7(&VAR_7);

 return FUNC_3(VAR_15);
}
