
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct efi_generic_dev_path {int length; scalar_t__ type; scalar_t__ sub_type; } ;
typedef int efi_char16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool
FUNC_0(efi_char16_t *VAR_3, int VAR_4, u8 *VAR_5,
       unsigned long VAR_6)
{
 struct efi_generic_dev_path *VAR_7;
 int VAR_8 = 0;

 VAR_7 = (struct efi_generic_dev_path *)VAR_5;

 if (VAR_6 < sizeof(*VAR_7))
  return 0;

 while (VAR_8 <= VAR_6 - sizeof(*VAR_7) &&
        VAR_7->length >= sizeof(*VAR_7) &&
  VAR_7->length <= VAR_6 - VAR_8) {
  VAR_8 += VAR_7->length;

  if ((VAR_7->type == VAR_1 ||
       VAR_7->type == VAR_2) &&
      VAR_7->sub_type == VAR_0)
   return 1;

  VAR_7 = (struct efi_generic_dev_path *)(VAR_5 + VAR_8);
 }






 return 0;
}
