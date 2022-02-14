
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int (* private ) (char*,int ,size_t) ;} ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static ssize_t FUNC_1(struct file *VAR_1, struct kobject *VAR_2,
          struct bin_attribute *VAR_3, char *VAR_4,
          loff_t VAR_5, size_t VAR_6)
{
 ssize_t (*VAR_7)(char *, loff_t, size_t);

 VAR_7 = VAR_3->private;
 if (FUNC_0(!VAR_7))
  return -VAR_0;

 return VAR_7(VAR_4, VAR_5, VAR_6);
}
