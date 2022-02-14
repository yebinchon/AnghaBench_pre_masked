
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int setupmode ;
typedef int secboot ;
typedef int moksbstate ;
typedef enum efi_secureboot_mode { ____Placeholder_efi_secureboot_mode } efi_secureboot_mode ;
typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int *,int*,unsigned long*,scalar_t__*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int VAR_9 ;
 int VAR_10 ;

enum efi_secureboot_mode FUNC_3(efi_system_table_t *VAR_11)
{
 u32 VAR_12;
 u8 VAR_13, VAR_14, VAR_15;
 unsigned long VAR_16;
 efi_status_t VAR_17;

 VAR_16 = sizeof(VAR_13);
 VAR_17 = FUNC_0(VAR_3, &VAR_8,
        ((void*)0), &VAR_16, &VAR_13);
 if (VAR_17 == VAR_0)
  return VAR_5;
 if (VAR_17 != VAR_1)
  goto out_efi_err;

 VAR_16 = sizeof(VAR_14);
 VAR_17 = FUNC_0(VAR_4, &VAR_8,
        ((void*)0), &VAR_16, &VAR_14);
 if (VAR_17 != VAR_1)
  goto out_efi_err;

 if (VAR_13 == 0 || VAR_14 == 1)
  return VAR_5;






 VAR_16 = sizeof(VAR_15);
 VAR_17 = FUNC_0(VAR_9, &VAR_10,
        &VAR_12, &VAR_16, &VAR_15);


 if (VAR_17 != VAR_1)
  goto secure_boot_enabled;
 if (!(VAR_12 & VAR_2) && VAR_15 == 1)
  return VAR_5;

secure_boot_enabled:
 FUNC_1(VAR_11, "UEFI Secure Boot is enabled.\n");
 return VAR_6;

out_efi_err:
 FUNC_2(VAR_11, "Could not determine UEFI Secure Boot status.\n");
 return VAR_7;
}
