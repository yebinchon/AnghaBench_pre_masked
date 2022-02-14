
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int efi_system_table_t ;
typedef char efi_char16_t ;


 int FUNC_0 (int *,char*) ;

void FUNC_1(efi_system_table_t *VAR_0, char *VAR_1)
{
 char *VAR_2;

 for (VAR_2 = VAR_1; *VAR_2; VAR_2++) {
  efi_char16_t VAR_3[2] = { 0 };

  VAR_3[0] = *VAR_2;
  if (*VAR_2 == '\n') {
   efi_char16_t VAR_4[2] = { '\r', 0 };
   FUNC_0(VAR_0, VAR_4);
  }

  FUNC_0(VAR_0, VAR_3);
 }
}
