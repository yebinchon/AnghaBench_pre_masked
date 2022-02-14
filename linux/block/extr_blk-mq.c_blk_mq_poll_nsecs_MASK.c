
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* poll_stat; } ;
struct request {int dummy; } ;
struct blk_mq_hw_ctx {int dummy; } ;
struct TYPE_2__ {int mean; scalar_t__ nr_samples; } ;


 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct request_queue*) ;

__attribute__((used)) static unsigned long FUNC_2(struct request_queue *VAR_0,
           struct blk_mq_hw_ctx *VAR_1,
           struct request *VAR_2)
{
 unsigned long VAR_3 = 0;
 int VAR_4;





 if (!FUNC_1(VAR_0))
  return 0;
 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 < 0)
  return VAR_3;

 if (VAR_0->poll_stat[VAR_4].nr_samples)
  VAR_3 = (VAR_0->poll_stat[VAR_4].mean + 1) / 2;

 return VAR_3;
}
