
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct screen_info {int dummy; } ;
typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;
typedef int efi_guid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,void**,...) ;
 scalar_t__ FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *,struct screen_info*,int *,unsigned long,void**) ;
 scalar_t__ FUNC_3 (int *,struct screen_info*,int *,unsigned long,void**) ;

efi_status_t FUNC_4(efi_system_table_t *VAR_6,
      struct screen_info *VAR_7, efi_guid_t *VAR_8,
      unsigned long VAR_9)
{
 efi_status_t VAR_10;
 void **VAR_11 = ((void*)0);

 VAR_10 = FUNC_0(VAR_3, VAR_0,
    VAR_9, (void **)&VAR_11);
 if (VAR_10 != VAR_2)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_5,
    VAR_1,
    VAR_8, ((void*)0), &VAR_9, VAR_11);
 if (VAR_10 != VAR_2)
  goto free_handle;

 if (FUNC_1()) {
  VAR_10 = FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9,
         VAR_11);
 } else {
  VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9,
         VAR_11);
 }

free_handle:
 FUNC_0(VAR_4, VAR_11);
 return VAR_10;
}
