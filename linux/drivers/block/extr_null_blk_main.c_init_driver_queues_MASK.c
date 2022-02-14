
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nullb_queue {int dummy; } ;
struct nullb {int nr_queues; struct nullb_queue* queues; TYPE_1__* dev; } ;
struct TYPE_2__ {int submit_queues; } ;


 int FUNC_0 (struct nullb*,struct nullb_queue*) ;
 int FUNC_1 (struct nullb_queue*) ;

__attribute__((used)) static int FUNC_2(struct nullb *VAR_0)
{
 struct nullb_queue *VAR_1;
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->dev->submit_queues; VAR_2++) {
  VAR_1 = &VAR_0->queues[VAR_2];

  FUNC_0(VAR_0, VAR_1);

  VAR_3 = FUNC_1(VAR_1);
  if (VAR_3)
   return VAR_3;
  VAR_0->nr_queues++;
 }
 return 0;
}
