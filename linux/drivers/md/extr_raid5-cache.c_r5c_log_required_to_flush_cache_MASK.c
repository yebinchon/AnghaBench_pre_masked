
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5l_log {int stripe_in_journal_count; } ;
struct r5conf {int max_degraded; int raid_disks; int group_cnt; struct r5l_log* log; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct r5l_log*) ;

__attribute__((used)) static sector_t FUNC_2(struct r5conf *VAR_1)
{
 struct r5l_log *VAR_2 = VAR_1->log;

 if (!FUNC_1(VAR_2))
  return 0;

 return VAR_0 *
  ((VAR_1->max_degraded + 1) * FUNC_0(&VAR_2->stripe_in_journal_count) +
   (VAR_1->raid_disks - VAR_1->max_degraded) * (VAR_1->group_cnt + 1));
}
