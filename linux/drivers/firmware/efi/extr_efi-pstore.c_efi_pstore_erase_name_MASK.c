
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efivar_entry {int scanning; } ;
typedef char efi_char16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,char*,struct efivar_entry**) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (struct efivar_entry*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_5)
{
 struct efivar_entry *VAR_6 = ((void*)0);
 efi_char16_t VAR_7[VAR_0];
 int VAR_8, VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_7[VAR_9] = VAR_5[VAR_9];
  if (VAR_5[VAR_9] == '\0')
   break;
 }

 if (FUNC_1())
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_3, &VAR_4,
        VAR_7, &VAR_6);
 FUNC_2();

 if (VAR_8 && !VAR_6->scanning)
  FUNC_3(VAR_6);

 return VAR_8 ? 0 : -VAR_2;
}
