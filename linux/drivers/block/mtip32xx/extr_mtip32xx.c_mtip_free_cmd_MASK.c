
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct mtip_cmd {int command_dma; int command; } ;
struct driver_data {TYPE_1__* pdev; } ;
struct blk_mq_tag_set {struct driver_data* driver_data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct mtip_cmd* FUNC_0 (struct request*) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct blk_mq_tag_set *VAR_1, struct request *VAR_2,
     unsigned int VAR_3)
{
 struct driver_data *VAR_4 = VAR_1->driver_data;
 struct mtip_cmd *VAR_5 = FUNC_0(VAR_2);

 if (!VAR_5->command)
  return;

 FUNC_1(&VAR_4->pdev->dev, VAR_0, VAR_5->command,
     VAR_5->command_dma);
}
