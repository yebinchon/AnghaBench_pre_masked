
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efi_rng_protocol {scalar_t__ (* get_rng ) (struct efi_rng_protocol*,int *,unsigned long,int *) ;} ;
typedef int efi_system_table_t ;
typedef scalar_t__ efi_status_t ;
typedef int efi_guid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int *,void**) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct efi_rng_protocol*,int *,unsigned long,int *) ;

efi_status_t FUNC_2(efi_system_table_t *VAR_3,
      unsigned long VAR_4, u8 *VAR_5)
{
 efi_guid_t VAR_6 = VAR_0;
 efi_status_t VAR_7;
 struct efi_rng_protocol *VAR_8;

 VAR_7 = FUNC_0(VAR_2, &VAR_6, ((void*)0),
    (void **)&VAR_8);
 if (VAR_7 != VAR_1)
  return VAR_7;

 return VAR_8->get_rng(VAR_8, ((void*)0), VAR_4, VAR_5);
}
