
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r10conf {int resync_lock; int nr_pending; int wait_barrier; int nr_waiting; scalar_t__ barrier; int mddev; } ;
struct TYPE_2__ {int * bio_list; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct r10conf *VAR_1)
{
 FUNC_4(&VAR_1->resync_lock);
 if (VAR_1->barrier) {
  VAR_1->nr_waiting++;
  FUNC_3(VAR_1->mddev, "wait barrier");
  FUNC_6(VAR_1->wait_barrier,
        !VAR_1->barrier ||
        (FUNC_1(&VAR_1->nr_pending) &&
         VAR_0->bio_list &&
         (!FUNC_2(&VAR_0->bio_list[0]) ||
          !FUNC_2(&VAR_0->bio_list[1]))),
        VAR_1->resync_lock);
  VAR_1->nr_waiting--;
  if (!VAR_1->nr_waiting)
   FUNC_7(&VAR_1->wait_barrier);
 }
 FUNC_0(&VAR_1->nr_pending);
 FUNC_5(&VAR_1->resync_lock);
}
