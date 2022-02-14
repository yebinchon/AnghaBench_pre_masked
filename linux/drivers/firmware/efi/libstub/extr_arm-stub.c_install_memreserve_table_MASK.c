
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_efi_memreserve {int count; scalar_t__ size; scalar_t__ next; } ;
typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;
typedef int efi_guid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *,...) ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;

void FUNC_3(efi_system_table_t *VAR_5)
{
 struct linux_efi_memreserve *VAR_6;
 efi_guid_t VAR_7 = VAR_2;
 efi_status_t VAR_8;

 VAR_8 = FUNC_1(VAR_3, &VAR_0, sizeof(*VAR_6),
    (void **)&VAR_6);
 if (VAR_8 != VAR_1) {
  FUNC_2(VAR_5, "Failed to allocate memreserve entry!\n");
  return;
 }

 VAR_6->next = 0;
 VAR_6->size = 0;
 FUNC_0(&VAR_6->count, 0);

 VAR_8 = FUNC_1(VAR_4,
    &VAR_7,
    VAR_6);
 if (VAR_8 != VAR_1)
  FUNC_2(VAR_5, "Failed to install memreserve config table!\n");
}
