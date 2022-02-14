
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_queue {int in_use; int queue_id; struct sec_dev_info* dev_info; } ;
struct sec_dev_info {int dev_lock; int queues_in_use; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct sec_queue *VAR_2)
{
 struct sec_dev_info *VAR_3 = VAR_2->dev_info;

 if (VAR_2->queue_id >= VAR_1) {
  FUNC_0(VAR_3->dev, "No queue %d\n", VAR_2->queue_id);
  return -VAR_0;
 }

 if (!VAR_2->in_use) {
  FUNC_0(VAR_3->dev, "Queue %d is idle\n", VAR_2->queue_id);
  return -VAR_0;
 }

 FUNC_1(&VAR_3->dev_lock);
 VAR_2->in_use = 0;
 VAR_3->queues_in_use--;
 FUNC_2(&VAR_3->dev_lock);

 return 0;
}
