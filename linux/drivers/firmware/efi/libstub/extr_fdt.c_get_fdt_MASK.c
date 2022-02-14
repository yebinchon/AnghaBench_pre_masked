
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int efi_system_table_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 unsigned long FUNC_1 (void*) ;
 void* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;

void *FUNC_4(efi_system_table_t *VAR_1, unsigned long *VAR_2)
{
 void *VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_0);

 if (!VAR_3)
  return ((void*)0);

 if (FUNC_0(VAR_3) != 0) {
  FUNC_3(VAR_1, "Invalid header detected on UEFI supplied FDT, ignoring ...\n");
  return ((void*)0);
 }
 *VAR_2 = FUNC_1(VAR_3);
 return VAR_3;
}
