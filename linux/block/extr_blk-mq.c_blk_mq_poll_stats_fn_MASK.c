
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* poll_stat; } ;
struct blk_stat_callback {TYPE_1__* stat; struct request_queue* data; } ;
struct TYPE_2__ {scalar_t__ nr_samples; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct blk_stat_callback *VAR_1)
{
 struct request_queue *VAR_2 = VAR_1->data;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->stat[VAR_3].nr_samples)
   VAR_2->poll_stat[VAR_3] = VAR_1->stat[VAR_3];
 }
}
