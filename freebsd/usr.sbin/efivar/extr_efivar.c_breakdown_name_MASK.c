
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int efi_guid_t ;


 scalar_t__ FUNC_0 (char*,int *) ;
 int FUNC_1 (int,char*,char*) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static void
FUNC_3(char *VAR_0, efi_guid_t *VAR_1, char **VAR_2)
{
 char *VAR_3;

 VAR_3 = FUNC_2(VAR_0, '-');
 if (VAR_3 == ((void*)0))
  FUNC_1(1, "Invalid name: %s", VAR_0);
 *VAR_2 = VAR_3 + 1;
 *VAR_3 = '\0';
 if (FUNC_0(VAR_0, VAR_1) < 0)
  FUNC_1(1, "Invalid guid %s", VAR_0);
}
