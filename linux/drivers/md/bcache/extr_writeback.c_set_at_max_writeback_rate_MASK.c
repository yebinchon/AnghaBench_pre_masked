
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rate; } ;
struct cached_dev {scalar_t__ writeback_rate_change; scalar_t__ writeback_rate_integral_scaled; scalar_t__ writeback_rate_proportional; TYPE_1__ writeback_rate; } ;
struct cache_set {int at_max_writeback_rate; int attached_dev_nr; int idle_counter; int gc_mark_valid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static bool FUNC_4(struct cache_set *VAR_1,
           struct cached_dev *VAR_2)
{

 if (!VAR_1->gc_mark_valid)
  return 0;
 if (FUNC_0(&VAR_1->idle_counter) <
     FUNC_2(&VAR_1->attached_dev_nr) * 6)
  return 0;

 if (FUNC_2(&VAR_1->at_max_writeback_rate) != 1)
  FUNC_3(&VAR_1->at_max_writeback_rate, 1);

 FUNC_1(&VAR_2->writeback_rate.rate, VAR_0);


 VAR_2->writeback_rate_proportional = 0;
 VAR_2->writeback_rate_integral_scaled = 0;
 VAR_2->writeback_rate_change = 0;







 if ((FUNC_2(&VAR_1->idle_counter) <
      FUNC_2(&VAR_1->attached_dev_nr) * 6) ||
     !FUNC_2(&VAR_1->at_max_writeback_rate))
  return 0;

 return 1;
}
