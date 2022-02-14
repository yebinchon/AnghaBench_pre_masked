
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct mtip_cmd {int sg; int command; int command_dma; } ;
struct driver_data {TYPE_1__* pdev; } ;
struct blk_mq_tag_set {struct driver_data* driver_data; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mtip_cmd* FUNC_0 (struct request*) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct blk_mq_tag_set *VAR_4, struct request *VAR_5,
    unsigned int VAR_6, unsigned int VAR_7)
{
 struct driver_data *VAR_8 = VAR_4->driver_data;
 struct mtip_cmd *VAR_9 = FUNC_0(VAR_5);

 VAR_9->command = FUNC_1(&VAR_8->pdev->dev, VAR_0,
   &VAR_9->command_dma, VAR_2);
 if (!VAR_9->command)
  return -VAR_1;

 FUNC_2(VAR_9->sg, VAR_3);
 return 0;
}
