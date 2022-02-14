
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct devfreq {int stop_polling; unsigned long previous_freq; int lock; TYPE_2__ dev; TYPE_1__* profile; int last_stat_updated; int work; } ;
struct TYPE_3__ {int (* get_cur_freq ) (int ,unsigned long*) ;scalar_t__ polling_ms; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,unsigned long*) ;

void FUNC_6(struct devfreq *VAR_2)
{
 unsigned long VAR_3;

 FUNC_2(&VAR_2->lock);
 if (!VAR_2->stop_polling)
  goto out;

 if (!FUNC_0(&VAR_2->work) &&
   VAR_2->profile->polling_ms)
  FUNC_4(VAR_0, &VAR_2->work,
   FUNC_1(VAR_2->profile->polling_ms));

 VAR_2->last_stat_updated = VAR_1;
 VAR_2->stop_polling = 0;

 if (VAR_2->profile->get_cur_freq &&
  !VAR_2->profile->get_cur_freq(VAR_2->dev.parent, &VAR_3))
  VAR_2->previous_freq = VAR_3;

out:
 FUNC_3(&VAR_2->lock);
}
