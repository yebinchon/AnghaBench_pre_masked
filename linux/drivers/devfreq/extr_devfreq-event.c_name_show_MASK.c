
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct devfreq_event_dev {TYPE_1__* desc; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 struct devfreq_event_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct devfreq_event_dev *VAR_4 = FUNC_1(VAR_1);

 if (!VAR_4 || !VAR_4->desc)
  return -VAR_0;

 return FUNC_0(VAR_3, "%s\n", VAR_4->desc->name);
}
