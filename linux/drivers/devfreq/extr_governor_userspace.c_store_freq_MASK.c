
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userspace_data {unsigned long user_frequency; int valid; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct devfreq {int lock; struct userspace_data* data; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,char*,unsigned long*) ;
 struct devfreq* FUNC_3 (struct device*) ;
 int FUNC_4 (struct devfreq*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 struct devfreq *VAR_4 = FUNC_3(VAR_0);
 struct userspace_data *VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0;

 FUNC_0(&VAR_4->lock);
 VAR_5 = VAR_4->data;

 FUNC_2(VAR_2, "%lu", &VAR_6);
 VAR_5->user_frequency = VAR_6;
 VAR_5->valid = 1;
 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7 == 0)
  VAR_7 = VAR_3;
 FUNC_1(&VAR_4->lock);
 return VAR_7;
}
