
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct devfreq {unsigned long max_freq; unsigned long min_freq; int lock; TYPE_1__* profile; } ;
typedef int ssize_t ;
struct TYPE_2__ {unsigned long* freq_table; int max_state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,char*,unsigned long*) ;
 struct devfreq* FUNC_3 (struct device*) ;
 int FUNC_4 (struct devfreq*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct devfreq *VAR_5 = FUNC_3(VAR_1);
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3, "%lu", &VAR_6);
 if (VAR_7 != 1)
  return -VAR_0;

 FUNC_0(&VAR_5->lock);

 if (VAR_6) {
  if (VAR_6 > VAR_5->max_freq) {
   VAR_7 = -VAR_0;
   goto unlock;
  }
 } else {
  unsigned long *VAR_8 = VAR_5->profile->freq_table;


  if (VAR_8[0] < VAR_8[VAR_5->profile->max_state - 1])
   VAR_6 = VAR_8[0];
  else
   VAR_6 = VAR_8[VAR_5->profile->max_state - 1];
 }

 VAR_5->min_freq = VAR_6;
 FUNC_4(VAR_5);
 VAR_7 = VAR_4;
unlock:
 FUNC_1(&VAR_5->lock);
 return VAR_7;
}
