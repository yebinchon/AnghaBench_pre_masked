
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtip_cmd {int dummy; } ;
struct driver_data {TYPE_1__* queue; } ;
struct blk_mq_hw_ctx {int tags; } ;
struct TYPE_2__ {struct blk_mq_hw_ctx** queue_hw_ctx; } ;


 struct mtip_cmd* FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static struct mtip_cmd *FUNC_2(struct driver_data *VAR_0,
       unsigned int VAR_1)
{
 struct blk_mq_hw_ctx *VAR_2 = VAR_0->queue->queue_hw_ctx[0];

 return FUNC_0(FUNC_1(VAR_2->tags, VAR_1));
}
