
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int sysfs_dir_lock; int sysfs_lock; TYPE_1__* elevator; int kobj; int q_usage_counter; } ;
struct gendisk {struct request_queue* queue; } ;
struct device {int kobj; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct device*,struct request_queue*) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (int ,struct request_queue*) ;
 int FUNC_5 (struct request_queue*) ;
 int FUNC_6 (struct request_queue*) ;
 int FUNC_7 (struct request_queue*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 struct device* FUNC_10 (struct gendisk*) ;
 int FUNC_11 (struct request_queue*,int) ;
 int FUNC_12 (int *,int ,char*,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_21 (struct request_queue*) ;
 int FUNC_22 (int *,int *) ;
 int FUNC_23 (struct request_queue*) ;

int FUNC_24(struct gendisk *VAR_5)
{
 int VAR_6;
 struct device *VAR_7 = FUNC_10(VAR_5);
 struct request_queue *VAR_8 = VAR_5->queue;
 bool VAR_9 = 0;

 if (FUNC_0(!VAR_8))
  return -VAR_0;

 FUNC_1(FUNC_6(VAR_8),
    "%s is registering an already registered queue\n",
    FUNC_15(&VAR_7->kobj));
 if (!FUNC_5(VAR_8)) {
  FUNC_4(VAR_2, VAR_8);
  FUNC_20(&VAR_8->q_usage_counter);
 }

 VAR_6 = FUNC_8(VAR_7);
 if (VAR_6)
  return VAR_6;

 FUNC_18(&VAR_8->sysfs_dir_lock);

 VAR_6 = FUNC_12(&VAR_8->kobj, FUNC_14(&VAR_7->kobj), "%s", "queue");
 if (VAR_6 < 0) {
  FUNC_9(VAR_7);
  goto unlock;
 }

 VAR_6 = FUNC_22(&VAR_8->kobj, &VAR_4);
 if (VAR_6) {
  FUNC_9(VAR_7);
  FUNC_13(&VAR_8->kobj);
  FUNC_16(&VAR_7->kobj);
  goto unlock;
 }

 if (FUNC_21(VAR_8)) {
  FUNC_2(VAR_7, VAR_8);
  FUNC_3(VAR_8);
 }

 FUNC_18(&VAR_8->sysfs_lock);
 if (VAR_8->elevator) {
  VAR_6 = FUNC_11(VAR_8, 0);
  if (VAR_6) {
   FUNC_19(&VAR_8->sysfs_lock);
   FUNC_19(&VAR_8->sysfs_dir_lock);
   FUNC_13(&VAR_8->kobj);
   FUNC_9(VAR_7);
   FUNC_16(&VAR_7->kobj);
   return VAR_6;
  }
  VAR_9 = 1;
 }

 FUNC_4(VAR_3, VAR_8);
 FUNC_23(VAR_8);
 FUNC_7(VAR_8);


 FUNC_17(&VAR_8->kobj, VAR_1);
 if (VAR_9)
  FUNC_17(&VAR_8->elevator->kobj, VAR_1);
 FUNC_19(&VAR_8->sysfs_lock);

 VAR_6 = 0;
unlock:
 FUNC_19(&VAR_8->sysfs_dir_lock);
 return VAR_6;
}
