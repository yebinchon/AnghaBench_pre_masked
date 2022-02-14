
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_head {int cpu; struct r5worker_group* group; int lru; struct r5conf* raid_conf; } ;
struct r5worker_group {int stripes_cnt; TYPE_2__* workers; int handle_list; int loprio_list; } ;
struct r5conf {int worker_cnt_per_group; struct r5worker_group* worker_groups; TYPE_1__* mddev; } ;
struct TYPE_4__ {int working; int work; } ;
struct TYPE_3__ {int thread; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (struct stripe_head*) ;

__attribute__((used)) static void FUNC_8(struct stripe_head *VAR_3)
{
 struct r5conf *VAR_4 = VAR_3->raid_conf;
 struct r5worker_group *VAR_5;
 int VAR_6;
 int VAR_7, VAR_8 = VAR_3->cpu;

 if (!FUNC_0(VAR_8)) {
  VAR_8 = FUNC_2(VAR_1);
  VAR_3->cpu = VAR_8;
 }

 if (FUNC_4(&VAR_3->lru)) {
  struct r5worker_group *VAR_9;
  VAR_9 = VAR_4->worker_groups + FUNC_1(VAR_8);
  if (FUNC_7(VAR_3))
   FUNC_3(&VAR_3->lru, &VAR_9->loprio_list);
  else
   FUNC_3(&VAR_3->lru, &VAR_9->handle_list);
  VAR_9->stripes_cnt++;
  VAR_3->group = VAR_9;
 }

 if (VAR_4->worker_cnt_per_group == 0) {
  FUNC_5(VAR_4->mddev->thread);
  return;
 }

 VAR_5 = VAR_4->worker_groups + FUNC_1(VAR_3->cpu);

 VAR_5->workers[0].working = 1;

 FUNC_6(VAR_3->cpu, VAR_2, &VAR_5->workers[0].work);

 VAR_6 = VAR_5->stripes_cnt / VAR_0 - 1;

 for (VAR_7 = 1; VAR_7 < VAR_4->worker_cnt_per_group && VAR_6 > 0; VAR_7++) {
  if (VAR_5->workers[VAR_7].working == 0) {
   VAR_5->workers[VAR_7].working = 1;
   FUNC_6(VAR_3->cpu, VAR_2,
          &VAR_5->workers[VAR_7].work);
   VAR_6--;
  }
 }
}
