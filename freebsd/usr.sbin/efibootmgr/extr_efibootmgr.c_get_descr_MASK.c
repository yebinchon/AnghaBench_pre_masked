
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef char efi_char ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3(uint8_t *VAR_0)
{
 uint8_t *VAR_1 = VAR_0;
 efi_char *VAR_2;
 int VAR_3;
 char *VAR_4;
 int VAR_5 = 0;

 VAR_1 += sizeof(uint32_t) + sizeof(uint16_t);
 VAR_2 = (efi_char*)(intptr_t)(void *)VAR_1;
 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_0(VAR_3 + 1);
 FUNC_1(VAR_4, 0, VAR_3 + 1);
 while (VAR_2[VAR_5]) {
  VAR_4[VAR_5] = VAR_2[VAR_5];
  VAR_5++;
 }
 return (char*)VAR_4;
}
