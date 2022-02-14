
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct screen_info {int dummy; } ;
typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;
typedef int efi_guid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct screen_info* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int *,unsigned long*,void**) ;
 int FUNC_2 (int *,struct screen_info*,int *,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static struct screen_info *FUNC_3(efi_system_table_t *VAR_4)
{
 efi_guid_t VAR_5 = VAR_1;
 efi_status_t VAR_6;
 unsigned long VAR_7;
 void **VAR_8 = ((void*)0);
 struct screen_info *VAR_9 = ((void*)0);

 VAR_7 = 0;
 VAR_6 = FUNC_1(VAR_3, VAR_2,
    &VAR_5, ((void*)0), &VAR_7, VAR_8);
 if (VAR_6 == VAR_0) {
  VAR_9 = FUNC_0(VAR_4);
  if (!VAR_9)
   return ((void*)0);
  FUNC_2(VAR_4, VAR_9, &VAR_5, VAR_7);
 }
 return VAR_9;
}
