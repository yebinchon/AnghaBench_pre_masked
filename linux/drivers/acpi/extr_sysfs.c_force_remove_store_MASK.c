
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_1,
      struct kobj_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 bool VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5) {
  FUNC_0("Enabling force_remove is not supported anymore. Please report to linux-acpi@vger.kernel.org if you depend on this functionality\n");
  return -VAR_0;
 }
 return VAR_4;
}
