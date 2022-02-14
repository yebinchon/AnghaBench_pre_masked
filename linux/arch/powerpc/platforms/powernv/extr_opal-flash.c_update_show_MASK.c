
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct update_flash_t {int status; } ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct update_flash_t VAR_0 ;

__attribute__((used)) static ssize_t FUNC_1(struct kobject *VAR_1,
      struct kobj_attribute *VAR_2, char *VAR_3)
{
 struct update_flash_t *const VAR_4 = &VAR_0;
 return FUNC_0(VAR_3, "%d\n", VAR_4->status);
}
