
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devfreq {unsigned long previous_freq; unsigned long last_stat_updated; int total_trans; TYPE_1__* profile; int * trans_table; int * time_in_state; } ;
struct TYPE_2__ {int max_state; } ;


 int FUNC_0 (struct devfreq*,unsigned long) ;
 unsigned long VAR_0 ;

int FUNC_1(struct devfreq *VAR_1, unsigned long VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;
 unsigned long VAR_6;

 VAR_6 = VAR_0;


 if (!VAR_1->previous_freq)
  goto out;

 VAR_4 = FUNC_0(VAR_1, VAR_1->previous_freq);
 if (VAR_4 < 0) {
  VAR_5 = VAR_4;
  goto out;
 }

 VAR_1->time_in_state[VAR_4] +=
    VAR_6 - VAR_1->last_stat_updated;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 < 0) {
  VAR_5 = VAR_3;
  goto out;
 }

 if (VAR_3 != VAR_4) {
  VAR_1->trans_table[(VAR_4 *
    VAR_1->profile->max_state) + VAR_3]++;
  VAR_1->total_trans++;
 }

out:
 VAR_1->last_stat_updated = VAR_6;
 return VAR_5;
}
