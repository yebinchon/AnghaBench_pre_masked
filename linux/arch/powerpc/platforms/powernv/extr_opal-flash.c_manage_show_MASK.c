
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct manage_flash_t {int status; } ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct manage_flash_t VAR_1 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct kobject *VAR_2,
      struct kobj_attribute *VAR_3, char *VAR_4)
{
 struct manage_flash_t *const VAR_5 = &VAR_1;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, "%d\n", VAR_5->status);

 VAR_5->status = VAR_0;
 return VAR_6;
}
