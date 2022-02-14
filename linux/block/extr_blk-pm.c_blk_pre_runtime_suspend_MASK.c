
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {scalar_t__ rpm_status; int queue_lock; int dev; int q_usage_counter; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct request_queue*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct request_queue *VAR_3)
{
 int VAR_4 = 0;

 if (!VAR_3->dev)
  return VAR_4;

 FUNC_0(VAR_3->rpm_status != VAR_1);







 FUNC_4(VAR_3);
 VAR_4 = -VAR_0;

 FUNC_2(VAR_3);






 FUNC_6(&VAR_3->q_usage_counter);
 if (FUNC_5(&VAR_3->q_usage_counter))
  VAR_4 = 0;

 FUNC_3(VAR_3);

 FUNC_8(&VAR_3->queue_lock);
 if (VAR_4 < 0)
  FUNC_7(VAR_3->dev);
 else
  VAR_3->rpm_status = VAR_2;
 FUNC_9(&VAR_3->queue_lock);

 if (VAR_4)
  FUNC_1(VAR_3);

 return VAR_4;
}
