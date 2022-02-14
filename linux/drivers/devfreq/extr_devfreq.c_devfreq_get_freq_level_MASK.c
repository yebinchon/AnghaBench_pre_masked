
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devfreq {TYPE_1__* profile; } ;
struct TYPE_2__ {int max_state; unsigned long* freq_table; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct devfreq *VAR_1, unsigned long VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->profile->max_state; VAR_3++)
  if (VAR_2 == VAR_1->profile->freq_table[VAR_3])
   return VAR_3;

 return -VAR_0;
}
