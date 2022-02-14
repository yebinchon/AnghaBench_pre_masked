
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userspace_data {int user_frequency; scalar_t__ valid; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct devfreq {int lock; struct userspace_data* data; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,...) ;
 struct devfreq* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct devfreq *VAR_3 = FUNC_3(VAR_0);
 struct userspace_data *VAR_4;
 int VAR_5 = 0;

 FUNC_0(&VAR_3->lock);
 VAR_4 = VAR_3->data;

 if (VAR_4->valid)
  VAR_5 = FUNC_2(VAR_2, "%lu\n", VAR_4->user_frequency);
 else
  VAR_5 = FUNC_2(VAR_2, "undefined\n");
 FUNC_1(&VAR_3->lock);
 return VAR_5;
}
