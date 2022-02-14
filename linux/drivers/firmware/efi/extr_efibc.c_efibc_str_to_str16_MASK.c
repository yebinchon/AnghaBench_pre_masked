
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char efi_char16_t ;


 size_t FUNC_0 (char const*) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, efi_char16_t *VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  VAR_1[VAR_2] = VAR_0[VAR_2];

 VAR_1[VAR_2] = '\0';
}
