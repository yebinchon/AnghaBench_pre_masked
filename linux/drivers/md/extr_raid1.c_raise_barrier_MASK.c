
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r1conf {int resync_lock; int nr_sync_pending; int wait_barrier; int * barrier; TYPE_1__* mddev; int * nr_pending; int array_frozen; int * nr_waiting; } ;
typedef int sector_t ;
struct TYPE_2__ {int recovery; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct r1conf *VAR_3, sector_t VAR_4)
{
 int VAR_5 = FUNC_3(VAR_4);

 FUNC_5(&VAR_3->resync_lock);


 FUNC_8(VAR_3->wait_barrier,
       !FUNC_2(&VAR_3->nr_waiting[VAR_5]),
       VAR_3->resync_lock);


 FUNC_1(&VAR_3->barrier[VAR_5]);
 FUNC_4();
 FUNC_8(VAR_3->wait_barrier,
       (!VAR_3->array_frozen &&
        !FUNC_2(&VAR_3->nr_pending[VAR_5]) &&
        FUNC_2(&VAR_3->barrier[VAR_5]) < VAR_2) ||
    FUNC_7(VAR_1, &VAR_3->mddev->recovery),
       VAR_3->resync_lock);

 if (FUNC_7(VAR_1, &VAR_3->mddev->recovery)) {
  FUNC_0(&VAR_3->barrier[VAR_5]);
  FUNC_6(&VAR_3->resync_lock);
  FUNC_9(&VAR_3->wait_barrier);
  return -VAR_0;
 }

 FUNC_1(&VAR_3->nr_sync_pending);
 FUNC_6(&VAR_3->resync_lock);

 return 0;
}
