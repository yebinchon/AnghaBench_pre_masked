
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct devfreq {int lock; TYPE_1__* profile; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int max_state; int * freq_table; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,size_t,char*,int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 struct devfreq* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
       struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct devfreq *VAR_4 = FUNC_4(VAR_1);
 ssize_t VAR_5 = 0;
 int VAR_6;

 FUNC_0(&VAR_4->lock);

 for (VAR_6 = 0; VAR_6 < VAR_4->profile->max_state; VAR_6++)
  VAR_5 += FUNC_2(&VAR_3[VAR_5], (VAR_0 - VAR_5 - 2),
    "%lu ", VAR_4->profile->freq_table[VAR_6]);

 FUNC_1(&VAR_4->lock);

 if (VAR_5)
  VAR_5--;

 VAR_5 += FUNC_3(&VAR_3[VAR_5], "\n");

 return VAR_5;
}
