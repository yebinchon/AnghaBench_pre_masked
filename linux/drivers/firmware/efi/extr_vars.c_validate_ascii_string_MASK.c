
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int efi_char16_t ;



__attribute__((used)) static bool
FUNC_0(efi_char16_t *VAR_0, int VAR_1, u8 *VAR_2,
        unsigned long VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_2[VAR_4] > 127)
   return 0;

  if (VAR_2[VAR_4] == 0)
   return 1;
 }

 return 0;
}
