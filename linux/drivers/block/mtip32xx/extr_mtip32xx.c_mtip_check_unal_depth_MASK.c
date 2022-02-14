
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct mtip_cmd {int unaligned; } ;
struct driver_data {TYPE_1__* port; int unal_qdepth; } ;
struct blk_mq_hw_ctx {TYPE_2__* queue; } ;
struct TYPE_4__ {struct driver_data* queuedata; } ;
struct TYPE_3__ {int cmd_slot_unal; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct mtip_cmd* FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct request*) ;

__attribute__((used)) static bool FUNC_5(struct blk_mq_hw_ctx *VAR_1,
      struct request *VAR_2)
{
 struct driver_data *VAR_3 = VAR_1->queue->queuedata;
 struct mtip_cmd *VAR_4 = FUNC_1(VAR_2);

 if (FUNC_4(VAR_2) == VAR_0 || !VAR_3->unal_qdepth)
  return 0;





 if (FUNC_3(VAR_2) <= 64) {
  if ((FUNC_2(VAR_2) & 7) || (FUNC_3(VAR_2) & 7))
   VAR_4->unaligned = 1;
 }

 if (VAR_4->unaligned && FUNC_0(&VAR_3->port->cmd_slot_unal) >= 0)
  return 1;

 return 0;
}
