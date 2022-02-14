
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int kset; } ;
struct TYPE_4__ {int VendorGuid; int * VariableName; } ;
struct efivar_entry {TYPE_2__ kobj; TYPE_1__ var; } ;
typedef int efi_char16_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct efivar_entry*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct efivar_entry*) ;
 int VAR_7 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_2__*,int *,int *,char*,char*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (char*,int *,int) ;
 unsigned long FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct efivar_entry *VAR_8)
{
 int VAR_9;
 char *VAR_10;
 unsigned long VAR_11;
 efi_char16_t *VAR_12 = VAR_8->var.VariableName;
 int VAR_13;





 VAR_11 = FUNC_8(VAR_12);
 VAR_9 = VAR_11 + 1 + VAR_0 + 1;

 VAR_10 = FUNC_4(VAR_9, VAR_3);
 if (!VAR_10)
  return -VAR_2;

 FUNC_7(VAR_10, VAR_12, VAR_9);



 VAR_10[VAR_11] = '-';
 FUNC_0(&VAR_8->var.VendorGuid,
    VAR_10 + VAR_11 + 1);

 VAR_8->kobj.kset = VAR_7;

 VAR_13 = FUNC_5(&VAR_8->kobj, &VAR_5,
       ((void*)0), "%s", VAR_10);
 FUNC_3(VAR_10);
 if (VAR_13)
  return VAR_13;

 FUNC_6(&VAR_8->kobj, VAR_4);
 if (FUNC_1(VAR_8, &VAR_6)) {
  FUNC_2(VAR_8);
  return -VAR_1;
 }

 return 0;
}
