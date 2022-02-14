
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int efi_guid_t ;


 int FUNC_0 (int *,char**) ;
 int FUNC_1 (int *,char**) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(efi_guid_t *VAR_1, char **VAR_2)
{
 char *VAR_3 = ((void*)0);

 if (VAR_0)
  FUNC_0(VAR_1, &VAR_3);

 if (VAR_3 == ((void*)0))
  FUNC_1(VAR_1, VAR_2);
 else
  *VAR_2 = VAR_3;
}
