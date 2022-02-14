
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1conf {int resync_lock; int * nr_waiting; int * nr_pending; int array_frozen; int wait_barrier; } ;
typedef int sector_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct r1conf *VAR_0, sector_t VAR_1)
{
 int VAR_2 = FUNC_3(VAR_1);
 FUNC_2(&VAR_0->nr_pending[VAR_2]);

 if (!FUNC_0(VAR_0->array_frozen))
  return;

 FUNC_4(&VAR_0->resync_lock);
 FUNC_2(&VAR_0->nr_waiting[VAR_2]);
 FUNC_1(&VAR_0->nr_pending[VAR_2]);




 FUNC_7(&VAR_0->wait_barrier);

 FUNC_6(VAR_0->wait_barrier,
       !VAR_0->array_frozen,
       VAR_0->resync_lock);
 FUNC_2(&VAR_0->nr_pending[VAR_2]);
 FUNC_1(&VAR_0->nr_waiting[VAR_2]);
 FUNC_5(&VAR_0->resync_lock);
}
