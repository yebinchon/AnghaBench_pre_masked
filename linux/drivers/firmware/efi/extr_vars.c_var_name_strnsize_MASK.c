
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int efi_char16_t ;
typedef int c ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(efi_char16_t *VAR_0,
           unsigned long VAR_1)
{
 unsigned long VAR_2;
 efi_char16_t VAR_3;






 for (VAR_2 = 2; VAR_2 <= VAR_1; VAR_2 += sizeof(VAR_3)) {
  VAR_3 = VAR_0[(VAR_2 / sizeof(VAR_3)) - 1];
  if (!VAR_3)
   break;
 }

 return FUNC_0(VAR_2, VAR_1);
}
