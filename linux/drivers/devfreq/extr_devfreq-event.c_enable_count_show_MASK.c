
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct devfreq_event_dev {int enable_count; int desc; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 struct devfreq_event_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct devfreq_event_dev *VAR_4 = FUNC_1(VAR_1);

 if (!VAR_4 || !VAR_4->desc)
  return -VAR_0;

 return FUNC_0(VAR_3, "%d\n", VAR_4->enable_count);
}
