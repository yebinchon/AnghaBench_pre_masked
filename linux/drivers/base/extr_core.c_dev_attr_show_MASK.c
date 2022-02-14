
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct device_attribute {scalar_t__ (* show ) (struct device*,struct device_attribute*,char*) ;} ;
struct device {int dummy; } ;
struct attribute {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct device* FUNC_0 (struct kobject*) ;
 int FUNC_1 (char*,scalar_t__ (*) (struct device*,struct device_attribute*,char*)) ;
 scalar_t__ FUNC_2 (struct device*,struct device_attribute*,char*) ;
 struct device_attribute* FUNC_3 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_2, struct attribute *VAR_3,
        char *VAR_4)
{
 struct device_attribute *VAR_5 = FUNC_3(VAR_3);
 struct device *VAR_6 = FUNC_0(VAR_2);
 ssize_t VAR_7 = -VAR_0;

 if (VAR_5->show)
  VAR_7 = VAR_5->show(VAR_6, VAR_5, VAR_4);
 if (VAR_7 >= (ssize_t)VAR_1) {
  FUNC_1("dev_attr_show: %pS returned bad count\n",
    VAR_5->show);
 }
 return VAR_7;
}
