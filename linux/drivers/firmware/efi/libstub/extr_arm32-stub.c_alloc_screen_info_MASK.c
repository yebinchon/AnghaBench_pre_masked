
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct screen_info {int dummy; } ;
typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct screen_info*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

struct screen_info *FUNC_1(efi_system_table_t *VAR_6)
{
 struct screen_info *VAR_7;
 efi_status_t VAR_8;







 VAR_8 = FUNC_0(VAR_2, VAR_0,
    sizeof(*VAR_7), (void **)&VAR_7);

 if (VAR_8 != VAR_1)
  return ((void*)0);

 VAR_8 = FUNC_0(VAR_4,
    &VAR_5, VAR_7);
 if (VAR_8 == VAR_1)
  return VAR_7;

 FUNC_0(VAR_3, VAR_7);
 return ((void*)0);
}
