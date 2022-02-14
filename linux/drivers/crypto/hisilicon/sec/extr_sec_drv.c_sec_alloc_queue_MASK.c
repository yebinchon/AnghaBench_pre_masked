
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_queue {int in_use; } ;
struct sec_dev_info {int dev_lock; struct sec_queue* queues; int queues_in_use; } ;


 int VAR_0 ;
 struct sec_queue* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct sec_queue *FUNC_3(struct sec_dev_info *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_2->dev_lock);


 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if (!VAR_2->queues[VAR_3].in_use) {
   VAR_2->queues[VAR_3].in_use = 1;
   VAR_2->queues_in_use++;
   FUNC_2(&VAR_2->dev_lock);

   return &VAR_2->queues[VAR_3];
  }
 FUNC_2(&VAR_2->dev_lock);

 return FUNC_0(-VAR_0);
}
