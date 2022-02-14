
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_attribute {int (* show ) (struct efi_runtime_map_entry*,char*) ;} ;
struct kobject {int dummy; } ;
struct efi_runtime_map_entry {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct efi_runtime_map_entry*,char*) ;
 struct map_attribute* FUNC_1 (struct attribute*) ;
 struct efi_runtime_map_entry* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_0, struct attribute *VAR_1,
         char *VAR_2)
{
 struct efi_runtime_map_entry *VAR_3 = FUNC_2(VAR_0);
 struct map_attribute *VAR_4 = FUNC_1(VAR_1);

 return VAR_4->show(VAR_3, VAR_2);
}
