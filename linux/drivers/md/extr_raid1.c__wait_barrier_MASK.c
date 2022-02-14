
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1conf {int resync_lock; int * nr_waiting; int * nr_pending; int * barrier; int array_frozen; int wait_barrier; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct r1conf *VAR_0, int VAR_1)
{
 FUNC_2(&VAR_0->nr_pending[VAR_1]);
 FUNC_4();
 if (!FUNC_0(VAR_0->array_frozen) &&
     !FUNC_3(&VAR_0->barrier[VAR_1]))
  return;
 FUNC_5(&VAR_0->resync_lock);
 FUNC_2(&VAR_0->nr_waiting[VAR_1]);
 FUNC_1(&VAR_0->nr_pending[VAR_1]);




 FUNC_8(&VAR_0->wait_barrier);

 FUNC_7(VAR_0->wait_barrier,
       !VAR_0->array_frozen &&
        !FUNC_3(&VAR_0->barrier[VAR_1]),
       VAR_0->resync_lock);
 FUNC_2(&VAR_0->nr_pending[VAR_1]);
 FUNC_1(&VAR_0->nr_waiting[VAR_1]);
 FUNC_6(&VAR_0->resync_lock);
}
