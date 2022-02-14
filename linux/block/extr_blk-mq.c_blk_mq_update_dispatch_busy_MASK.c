
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blk_mq_hw_ctx {unsigned int dispatch_busy; TYPE_1__* queue; } ;
struct TYPE_2__ {scalar_t__ elevator; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct blk_mq_hw_ctx *VAR_2, bool VAR_3)
{
 unsigned int VAR_4;

 if (VAR_2->queue->elevator)
  return;

 VAR_4 = VAR_2->dispatch_busy;

 if (!VAR_4 && !VAR_3)
  return;

 VAR_4 *= VAR_1 - 1;
 if (VAR_3)
  VAR_4 += 1 << VAR_0;
 VAR_4 /= VAR_1;

 VAR_2->dispatch_busy = VAR_4;
}
