
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linux_efi_random_seed {int size; int bits; } ;
struct efi_rng_protocol {scalar_t__ (* get_rng ) (struct efi_rng_protocol*,int *,int ,int ) ;} ;
typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;
typedef int efi_guid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,struct linux_efi_random_seed*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct efi_rng_protocol*,int *,int ,int ) ;
 scalar_t__ FUNC_2 (struct efi_rng_protocol*,int *,int ,int ) ;

efi_status_t FUNC_3(efi_system_table_t *VAR_11)
{
 efi_guid_t VAR_12 = VAR_2;
 efi_guid_t VAR_13 = VAR_1;
 efi_guid_t VAR_14 = VAR_6;
 struct efi_rng_protocol *VAR_15;
 struct linux_efi_random_seed *VAR_16;
 efi_status_t VAR_17;

 VAR_17 = FUNC_0(VAR_10, &VAR_12, ((void*)0),
    (void **)&VAR_15);
 if (VAR_17 != VAR_4)
  return VAR_17;

 VAR_17 = FUNC_0(VAR_7, VAR_3,
    sizeof(*VAR_16) + VAR_0,
    (void **)&VAR_16);
 if (VAR_17 != VAR_4)
  return VAR_17;

 VAR_17 = VAR_15->get_rng(VAR_15, &VAR_13, VAR_0,
         VAR_16->bits);
 if (VAR_17 == VAR_5)




  VAR_17 = VAR_15->get_rng(VAR_15, ((void*)0), VAR_0,
          VAR_16->bits);

 if (VAR_17 != VAR_4)
  goto err_freepool;

 VAR_16->size = VAR_0;
 VAR_17 = FUNC_0(VAR_9, &VAR_14,
    VAR_16);
 if (VAR_17 != VAR_4)
  goto err_freepool;

 return VAR_4;

err_freepool:
 FUNC_0(VAR_8, VAR_16);
 return VAR_17;
}
