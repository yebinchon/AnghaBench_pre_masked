
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blk_mq_hw_ctx {int next_cpu; scalar_t__ next_cpu_batch; int cpumask; TYPE_1__* queue; } ;
struct TYPE_2__ {int nr_hw_queues; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct blk_mq_hw_ctx*) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct blk_mq_hw_ctx *VAR_4)
{
 bool VAR_5 = 0;
 int VAR_6 = VAR_4->next_cpu;

 if (VAR_4->queue->nr_hw_queues == 1)
  return VAR_1;

 if (--VAR_4->next_cpu_batch <= 0) {
select_cpu:
  VAR_6 = FUNC_2(VAR_6, VAR_4->cpumask,
    VAR_2);
  if (VAR_6 >= VAR_3)
   VAR_6 = FUNC_0(VAR_4);
  VAR_4->next_cpu_batch = VAR_0;
 }





 if (!FUNC_1(VAR_6)) {
  if (!VAR_5) {
   VAR_5 = 1;
   goto select_cpu;
  }





  VAR_4->next_cpu = VAR_6;
  VAR_4->next_cpu_batch = 1;
  return VAR_1;
 }

 VAR_4->next_cpu = VAR_6;
 return VAR_6;
}
