
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct hid_device {scalar_t__ rsize; scalar_t__ rdesc; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ loff_t ;


 struct device* FUNC_0 (struct kobject*) ;
 int FUNC_1 (char*,scalar_t__,size_t) ;
 struct hid_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct file *VAR_0, struct kobject *VAR_1,
  struct bin_attribute *VAR_2,
  char *VAR_3, loff_t VAR_4, size_t VAR_5)
{
 struct device *VAR_6 = FUNC_0(VAR_1);
 struct hid_device *VAR_7 = FUNC_2(VAR_6);

 if (VAR_4 >= VAR_7->rsize)
  return 0;

 if (VAR_4 + VAR_5 > VAR_7->rsize)
  VAR_5 = VAR_7->rsize - VAR_4;

 FUNC_1(VAR_3, VAR_7->rdesc + VAR_4, VAR_5);

 return VAR_5;
}
