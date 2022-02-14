
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct counter_device_attr {struct counter_count_unit* component; } ;
struct counter_device {TYPE_1__* ops; } ;
struct counter_count_write_value {char const* buf; } ;
struct counter_count_unit {struct counter_count* count; } ;
struct counter_count {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* count_write ) (struct counter_device* const,struct counter_count* const,struct counter_count_write_value*) ;} ;


 struct counter_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct counter_device* const,struct counter_count* const,struct counter_count_write_value*) ;
 struct counter_device_attr* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
       struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 struct counter_device *const VAR_4 = FUNC_0(VAR_0);
 const struct counter_device_attr *const VAR_5 = FUNC_2(VAR_1);
 const struct counter_count_unit *const VAR_6 = VAR_5->component;
 struct counter_count *const VAR_7 = VAR_6->count;
 int VAR_8;
 struct counter_count_write_value VAR_9 = { .buf = VAR_2 };

 VAR_8 = VAR_4->ops->count_write(VAR_4, VAR_7, &VAR_9);
 if (VAR_8)
  return VAR_8;

 return VAR_3;
}
