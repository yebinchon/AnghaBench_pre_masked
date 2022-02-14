
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct devfreq {unsigned long previous_freq; TYPE_2__ dev; TYPE_1__* profile; } ;
typedef int ssize_t ;
struct TYPE_3__ {int (* get_cur_freq ) (int ,unsigned long*) ;} ;


 int FUNC_0 (char*,char*,unsigned long) ;
 int FUNC_1 (int ,unsigned long*) ;
 struct devfreq* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 unsigned long VAR_3;
 struct devfreq *VAR_4 = FUNC_2(VAR_0);

 if (VAR_4->profile->get_cur_freq &&
  !VAR_4->profile->get_cur_freq(VAR_4->dev.parent, &VAR_3))
  return FUNC_0(VAR_2, "%lu\n", VAR_3);

 return FUNC_0(VAR_2, "%lu\n", VAR_4->previous_freq);
}
