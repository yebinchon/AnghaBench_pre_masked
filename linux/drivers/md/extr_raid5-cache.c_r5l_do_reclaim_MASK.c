
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r5l_log {scalar_t__ max_free_space; int io_mutex; scalar_t__ last_checkpoint; int io_list_lock; int iounit_wait; TYPE_2__* rdev; int finished_ios; int flushing_ios; int io_end_ios; int running_ios; int no_space_stripes; int reclaim_target; } ;
struct r5conf {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {TYPE_1__* mddev; } ;
struct TYPE_3__ {int thread; struct r5conf* private; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct r5conf*) ;
 int FUNC_5 (struct r5l_log*) ;
 scalar_t__ FUNC_6 (struct r5l_log*) ;
 int FUNC_7 (struct r5l_log*) ;
 int FUNC_8 (struct r5l_log*,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int,int ) ;
 scalar_t__ FUNC_12 (int *,int ) ;

__attribute__((used)) static void FUNC_13(struct r5l_log *VAR_0)
{
 struct r5conf *VAR_1 = VAR_0->rdev->mddev->private;
 sector_t VAR_2 = FUNC_12(&VAR_0->reclaim_target, 0);
 sector_t VAR_3;
 sector_t VAR_4;
 bool VAR_5;

 FUNC_9(&VAR_0->io_list_lock);
 VAR_5 = FUNC_6(VAR_0) > VAR_0->max_free_space ||
  VAR_2 != 0 || !FUNC_0(&VAR_0->no_space_stripes);





 while (1) {
  VAR_3 = FUNC_6(VAR_0);
  if (VAR_3 >= VAR_2 ||
      (FUNC_0(&VAR_0->running_ios) &&
       FUNC_0(&VAR_0->io_end_ios) &&
       FUNC_0(&VAR_0->flushing_ios) &&
       FUNC_0(&VAR_0->finished_ios)))
   break;

  FUNC_1(VAR_0->rdev->mddev->thread);
  FUNC_11(VAR_0->iounit_wait,
        FUNC_6(VAR_0) > VAR_3,
        VAR_0->io_list_lock);
 }

 VAR_4 = FUNC_4(VAR_1);
 FUNC_10(&VAR_0->io_list_lock);

 if (VAR_3 == 0 || !VAR_5)
  return;






 FUNC_8(VAR_0, VAR_4);

 FUNC_2(&VAR_0->io_mutex);
 VAR_0->last_checkpoint = VAR_4;
 FUNC_5(VAR_0);
 FUNC_3(&VAR_0->io_mutex);

 FUNC_7(VAR_0);
}
