
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct request {int tag; TYPE_1__* mq_hctx; } ;
struct TYPE_2__ {int queue_num; } ;


 int VAR_0 ;
 int VAR_1 ;

u32 FUNC_0(struct request *VAR_2)
{
 return (VAR_2->mq_hctx->queue_num << VAR_0) |
  (VAR_2->tag & VAR_1);
}
