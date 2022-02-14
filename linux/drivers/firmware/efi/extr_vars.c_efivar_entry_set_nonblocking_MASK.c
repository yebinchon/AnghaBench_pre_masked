
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct efivar_operations {scalar_t__ (* set_variable_nonblocking ) (int *,int *,int ,unsigned long,void*) ;} ;
typedef scalar_t__ efi_status_t ;
typedef int efi_guid_t ;
typedef int efi_char16_t ;
struct TYPE_2__ {struct efivar_operations* ops; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *,int *,int ,unsigned long,void*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(efi_char16_t *VAR_6, efi_guid_t VAR_7,
        u32 VAR_8, unsigned long VAR_9, void *VAR_10)
{
 const struct efivar_operations *VAR_11;
 efi_status_t VAR_12;

 if (FUNC_1(&VAR_5))
  return -VAR_0;

 if (!VAR_4) {
  FUNC_5(&VAR_5);
  return -VAR_2;
 }

 VAR_12 = FUNC_0(VAR_8,
         VAR_9 + FUNC_4(VAR_6, 1024));
 if (VAR_12 != VAR_1) {
  FUNC_5(&VAR_5);
  return -VAR_3;
 }

 VAR_11 = VAR_4->ops;
 VAR_12 = VAR_11->set_variable_nonblocking(VAR_6, &VAR_7, VAR_8,
            VAR_9, VAR_10);

 FUNC_5(&VAR_5);
 return FUNC_2(VAR_12);
}
