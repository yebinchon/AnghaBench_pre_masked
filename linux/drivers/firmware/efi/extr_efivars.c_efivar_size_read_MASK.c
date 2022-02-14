
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efi_variable {int DataSize; int Data; int Attributes; } ;
struct efivar_entry {struct efi_variable var; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct efivar_entry*,int *,int*,int ) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct efivar_entry *VAR_2, char *VAR_3)
{
 struct efi_variable *VAR_4 = &VAR_2->var;
 char *VAR_5 = VAR_3;

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 VAR_4->DataSize = 1024;
 if (FUNC_0(VAR_2, &VAR_4->Attributes, &VAR_4->DataSize, VAR_4->Data))
  return -VAR_1;

 VAR_5 += FUNC_1(VAR_5, "0x%lx\n", VAR_4->DataSize);
 return VAR_5 - VAR_3;
}
