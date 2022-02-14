
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request {TYPE_2__* q; } ;
struct mtip_cmd {int status; int unaligned; int direction; int scatter_ents; int sg; } ;
struct driver_data {TYPE_1__* port; TYPE_3__* pdev; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {struct driver_data* queuedata; } ;
struct TYPE_4__ {int cmd_slot_unal; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct request*,int ) ;
 struct mtip_cmd* FUNC_2 (struct request*) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct request *VAR_0)
{
 struct mtip_cmd *VAR_1 = FUNC_2(VAR_0);
 struct driver_data *VAR_2 = VAR_0->q->queuedata;


 FUNC_3(&VAR_2->pdev->dev, VAR_1->sg, VAR_1->scatter_ents,
       VAR_1->direction);

 if (FUNC_4(VAR_1->unaligned))
  FUNC_0(&VAR_2->port->cmd_slot_unal);

 FUNC_1(VAR_0, VAR_1->status);
}
