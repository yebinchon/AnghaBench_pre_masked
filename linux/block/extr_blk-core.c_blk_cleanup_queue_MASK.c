
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int q_usage_counter; int sysfs_lock; scalar_t__ elevator; TYPE_1__* backing_dev_info; } ;
struct TYPE_2__ {int laptop_mode_wb_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct request_queue*) ;
 int FUNC_5 (int ,struct request_queue*) ;
 int FUNC_6 (struct request_queue*) ;
 int FUNC_7 (struct request_queue*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct request_queue*) ;
 int FUNC_13 (struct request_queue*) ;

void FUNC_14(struct request_queue *VAR_4)
{

 FUNC_9(&VAR_4->sysfs_lock);
 FUNC_6(VAR_4);

 FUNC_5(VAR_2, VAR_4);
 FUNC_5(VAR_3, VAR_4);
 FUNC_5(VAR_1, VAR_4);
 FUNC_10(&VAR_4->sysfs_lock);






 FUNC_1(VAR_4);

 FUNC_13(VAR_4);

 FUNC_5(VAR_0, VAR_4);


 FUNC_0();


 FUNC_8(&VAR_4->backing_dev_info->laptop_mode_wb_timer);
 FUNC_7(VAR_4);

 if (FUNC_12(VAR_4))
  FUNC_2(VAR_4);
 FUNC_9(&VAR_4->sysfs_lock);
 if (VAR_4->elevator)
  FUNC_3(VAR_4);
 FUNC_10(&VAR_4->sysfs_lock);

 FUNC_11(&VAR_4->q_usage_counter);


 FUNC_4(VAR_4);
}
