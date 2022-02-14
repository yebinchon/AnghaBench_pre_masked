
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_device {int acquired_lock_work; int task_wq; int lock_cookie; int lock_state; } ;
struct rbd_client_id {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct rbd_client_id FUNC_1 (struct rbd_device*) ;
 int FUNC_2 (struct rbd_device*,struct rbd_client_id*) ;
 int FUNC_3 (int ,char const*) ;

__attribute__((used)) static void FUNC_4(struct rbd_device *VAR_1, const char *VAR_2)
{
 struct rbd_client_id VAR_3 = FUNC_1(VAR_1);

 VAR_1->lock_state = VAR_0;
 FUNC_3(VAR_1->lock_cookie, VAR_2);
 FUNC_2(VAR_1, &VAR_3);
 FUNC_0(VAR_1->task_wq, &VAR_1->acquired_lock_work);
}
