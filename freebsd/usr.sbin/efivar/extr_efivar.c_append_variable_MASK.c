
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int efi_guid_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,char**) ;
 scalar_t__ FUNC_1 (int ,char*,int *,size_t,int ) ;
 int FUNC_2 (int,char*) ;
 int * FUNC_3 (char*,size_t*) ;

__attribute__((used)) static void
FUNC_4(char *VAR_1, char *VAR_2)
{
 char *VAR_3;
 efi_guid_t VAR_4;
 size_t VAR_5;
 uint8_t *VAR_6;

 FUNC_0(VAR_1, &VAR_4, &VAR_3);
 VAR_6 = FUNC_3(VAR_2, &VAR_5);
 if (FUNC_1(VAR_4, VAR_3, VAR_6, VAR_5, VAR_0) < 0)
  FUNC_2(1, "efi_append_variable");
}
