
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct counter_signal_unit {struct counter_signal* signal; } ;
struct counter_signal_read_value {char* buf; int len; } ;
struct counter_signal {int dummy; } ;
struct counter_device_attr {struct counter_signal_unit* component; } ;
struct counter_device {TYPE_1__* ops; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* signal_read ) (struct counter_device* const,struct counter_signal* const,struct counter_signal_read_value*) ;} ;


 struct counter_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct counter_device* const,struct counter_signal* const,struct counter_signal_read_value*) ;
 struct counter_device_attr* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
       struct device_attribute *VAR_1, char *VAR_2)
{
 struct counter_device *const VAR_3 = FUNC_0(VAR_0);
 const struct counter_device_attr *const VAR_4 = FUNC_2(VAR_1);
 const struct counter_signal_unit *const VAR_5 = VAR_4->component;
 struct counter_signal *const VAR_6 = VAR_5->signal;
 int VAR_7;
 struct counter_signal_read_value VAR_8 = { .buf = VAR_2 };

 VAR_7 = VAR_3->ops->signal_read(VAR_3, VAR_6, &VAR_8);
 if (VAR_7)
  return VAR_7;

 return VAR_8.len;
}
