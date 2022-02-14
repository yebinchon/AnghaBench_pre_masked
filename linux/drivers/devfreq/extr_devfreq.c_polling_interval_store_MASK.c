
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct devfreq {TYPE_1__* governor; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* event_handler ) (struct devfreq*,int ,unsigned int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*,unsigned int*) ;
 int FUNC_1 (struct devfreq*,int ,unsigned int*) ;
 struct devfreq* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5)
{
 struct devfreq *VAR_6 = FUNC_2(VAR_2);
 unsigned int VAR_7;
 int VAR_8;

 if (!VAR_6->governor)
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_4, "%u", &VAR_7);
 if (VAR_8 != 1)
  return -VAR_1;

 VAR_6->governor->event_handler(VAR_6, VAR_0, &VAR_7);
 VAR_8 = VAR_5;

 return VAR_8;
}
