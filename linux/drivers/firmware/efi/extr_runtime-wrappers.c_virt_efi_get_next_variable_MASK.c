
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int efi_status_t ;
typedef int efi_guid_t ;
typedef int efi_char16_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,unsigned long*,int *,int *,int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static efi_status_t FUNC_3(unsigned long *VAR_3,
            efi_char16_t *VAR_4,
            efi_guid_t *VAR_5)
{
 efi_status_t VAR_6;

 if (FUNC_0(&VAR_2))
  return VAR_0;
 VAR_6 = FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5,
    ((void*)0), ((void*)0));
 FUNC_2(&VAR_2);
 return VAR_6;
}
