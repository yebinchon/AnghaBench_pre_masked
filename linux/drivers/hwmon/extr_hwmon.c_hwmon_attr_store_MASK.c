
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwmon_device_attribute {int name; int type; scalar_t__ index; int attr; TYPE_1__* ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* write ) (struct device*,int ,int ,scalar_t__,long) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char const*,int,long*) ;
 int FUNC_2 (struct device*,int ,int ,scalar_t__,long) ;
 struct hwmon_device_attribute* FUNC_3 (struct device_attribute*) ;
 int FUNC_4 (scalar_t__,int ,long) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
    struct device_attribute *VAR_1,
    const char *VAR_2, size_t VAR_3)
{
 struct hwmon_device_attribute *VAR_4 = FUNC_3(VAR_1);
 long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, 10, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = VAR_4->ops->write(VAR_0, VAR_4->type, VAR_4->attr, VAR_4->index,
    VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_4(VAR_4->index + FUNC_0(VAR_4->type),
          VAR_4->name, VAR_5);

 return VAR_3;
}
