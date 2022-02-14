
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; int rpm_status; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct request_queue *VAR_2, int VAR_3)
{
 if (!VAR_2->dev)
  return;

 FUNC_3(&VAR_2->queue_lock);
 if (!VAR_3) {
  VAR_2->rpm_status = VAR_0;
  FUNC_2(VAR_2->dev);
  FUNC_1(VAR_2->dev);
 } else {
  VAR_2->rpm_status = VAR_1;
 }
 FUNC_4(&VAR_2->queue_lock);

 if (!VAR_3)
  FUNC_0(VAR_2);
}
