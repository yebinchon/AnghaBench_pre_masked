
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct kobject {int dummy; } ;
struct input_dev {scalar_t__ poller; } ;
struct device {int dummy; } ;
struct attribute {int mode; } ;


 struct device* FUNC_0 (struct kobject*) ;
 struct input_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static umode_t FUNC_2(struct kobject *VAR_0,
       struct attribute *VAR_1, int VAR_2)
{
 struct device *VAR_3 = FUNC_0(VAR_0);
 struct input_dev *VAR_4 = FUNC_1(VAR_3);

 return VAR_4->poller ? VAR_1->mode : 0;
}
