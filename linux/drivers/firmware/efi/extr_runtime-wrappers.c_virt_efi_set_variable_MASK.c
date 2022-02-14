
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int efi_status_t ;
typedef int efi_guid_t ;
typedef int efi_char16_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int *,int *,unsigned long*,void*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static efi_status_t FUNC_3(efi_char16_t *VAR_3,
       efi_guid_t *VAR_4,
       u32 VAR_5,
       unsigned long VAR_6,
       void *VAR_7)
{
 efi_status_t VAR_8;

 if (FUNC_0(&VAR_2))
  return VAR_0;
 VAR_8 = FUNC_1(VAR_1, VAR_3, VAR_4, &VAR_5, &VAR_6,
    VAR_7);
 FUNC_2(&VAR_2);
 return VAR_8;
}
