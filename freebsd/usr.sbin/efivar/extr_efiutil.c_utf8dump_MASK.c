
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef char efi_char ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,int *,size_t) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char**) ;

void
FUNC_5(uint8_t *VAR_0, size_t VAR_1)
{
 char *VAR_2 = ((void*)0);
 efi_char *VAR_3;





 VAR_3 = FUNC_1(VAR_1 + sizeof(efi_char));
 FUNC_2(VAR_3, VAR_0, VAR_1);
 VAR_3[VAR_1 / sizeof(efi_char)] = 0;
 FUNC_4(VAR_3, &VAR_2);
 FUNC_3("%s\n", VAR_2);
 FUNC_0(VAR_2);
 FUNC_0(VAR_3);
}
