
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwmon_device_attribute {int name; int type; scalar_t__ index; int attr; TYPE_1__* ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* read ) (struct device*,int ,int ,scalar_t__,long*) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,long) ;
 int FUNC_2 (struct device*,int ,int ,scalar_t__,long*) ;
 struct hwmon_device_attribute* FUNC_3 (struct device_attribute*) ;
 int FUNC_4 (scalar_t__,int ,long) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 struct hwmon_device_attribute *VAR_3 = FUNC_3(VAR_1);
 long VAR_4;
 int VAR_5;

 VAR_5 = VAR_3->ops->read(VAR_0, VAR_3->type, VAR_3->attr, VAR_3->index,
          &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_4(VAR_3->index + FUNC_0(VAR_3->type),
         VAR_3->name, VAR_4);

 return FUNC_1(VAR_2, "%ld\n", VAR_4);
}
