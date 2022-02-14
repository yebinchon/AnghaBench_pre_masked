
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rbd_device {scalar_t__ watch_state; int watch_mutex; int watch_dwork; int task_wq; int lock_rwsem; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rbd_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct rbd_device*,int *) ;
 int FUNC_6 (struct rbd_device*,char*,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(void *VAR_3, u64 VAR_4, int VAR_5)
{
 struct rbd_device *VAR_6 = VAR_3;

 FUNC_6(VAR_6, "encountered watch error: %d", VAR_5);

 FUNC_1(&VAR_6->lock_rwsem);
 FUNC_5(VAR_6, &VAR_2);
 FUNC_7(&VAR_6->lock_rwsem);

 FUNC_2(&VAR_6->watch_mutex);
 if (VAR_6->watch_state == VAR_1) {
  FUNC_0(VAR_6);
  VAR_6->watch_state = VAR_0;

  FUNC_4(VAR_6->task_wq, &VAR_6->watch_dwork, 0);
 }
 FUNC_3(&VAR_6->watch_mutex);
}
