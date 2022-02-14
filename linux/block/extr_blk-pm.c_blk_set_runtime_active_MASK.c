
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int queue_lock; scalar_t__ dev; int rpm_status; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct request_queue *VAR_1)
{
 if (VAR_1->dev) {
  FUNC_2(&VAR_1->queue_lock);
  VAR_1->rpm_status = VAR_0;
  FUNC_1(VAR_1->dev);
  FUNC_0(VAR_1->dev);
  FUNC_3(&VAR_1->queue_lock);
 }
}
