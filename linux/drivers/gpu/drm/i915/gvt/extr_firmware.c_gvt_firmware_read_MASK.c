
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {scalar_t__ private; } ;
typedef size_t ssize_t ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (char*,scalar_t__,size_t) ;

__attribute__((used)) static ssize_t
FUNC_1(struct file *VAR_0, struct kobject *VAR_1,
      struct bin_attribute *VAR_2, char *VAR_3,
      loff_t VAR_4, size_t VAR_5)
{
 FUNC_0(VAR_3, VAR_2->private + VAR_4, VAR_5);
 return VAR_5;
}
