
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efi_variable {int DataSize; int Attributes; int Data; } ;
struct efivar_entry {struct efi_variable var; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct efivar_entry*,int*,int*,int ) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct efivar_entry *VAR_9, char *VAR_10)
{
 struct efi_variable *VAR_11 = &VAR_9->var;
 char *VAR_12 = VAR_10;

 if (!VAR_9 || !VAR_10)
  return -VAR_7;

 VAR_11->DataSize = 1024;
 if (FUNC_0(VAR_9, &VAR_11->Attributes, &VAR_11->DataSize, VAR_11->Data))
  return -VAR_8;

 if (VAR_11->Attributes & VAR_4)
  VAR_12 += FUNC_1(VAR_12, "EFI_VARIABLE_NON_VOLATILE\n");
 if (VAR_11->Attributes & VAR_2)
  VAR_12 += FUNC_1(VAR_12, "EFI_VARIABLE_BOOTSERVICE_ACCESS\n");
 if (VAR_11->Attributes & VAR_5)
  VAR_12 += FUNC_1(VAR_12, "EFI_VARIABLE_RUNTIME_ACCESS\n");
 if (VAR_11->Attributes & VAR_3)
  VAR_12 += FUNC_1(VAR_12, "EFI_VARIABLE_HARDWARE_ERROR_RECORD\n");
 if (VAR_11->Attributes & VAR_1)
  VAR_12 += FUNC_1(VAR_12,
   "EFI_VARIABLE_AUTHENTICATED_WRITE_ACCESS\n");
 if (VAR_11->Attributes &
   VAR_6)
  VAR_12 += FUNC_1(VAR_12,
   "EFI_VARIABLE_TIME_BASED_AUTHENTICATED_WRITE_ACCESS\n");
 if (VAR_11->Attributes & VAR_0)
  VAR_12 += FUNC_1(VAR_12, "EFI_VARIABLE_APPEND_WRITE\n");
 return VAR_12 - VAR_10;
}
