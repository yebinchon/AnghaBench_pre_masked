
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int efi_guid_t ;


 int FUNC_0 (int **,char**) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_0;
 char *VAR_1 = ((void*)0);
 efi_guid_t *VAR_2 = ((void*)0);

 while ((VAR_0 = FUNC_0(&VAR_2, &VAR_1)) > 0)
  FUNC_2(VAR_2, VAR_1);

 if (VAR_0 < 0)
  FUNC_1(1, "Error listing names");
}
