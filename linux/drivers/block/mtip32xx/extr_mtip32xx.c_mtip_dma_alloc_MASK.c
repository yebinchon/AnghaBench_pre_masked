
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtip_port {int block1_dma; int command_list_dma; int rxfis_dma; int identify_dma; int log_buf_dma; int smart_buf_dma; int * block1; int * smart_buf; int * log_buf; int * identify; int * rxfis; void* command_list; } ;
struct driver_data {TYPE_1__* pdev; struct mtip_port* port; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int *,int ,int*,int ) ;
 int FUNC_1 (int *,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct driver_data *VAR_8)
{
 struct mtip_port *VAR_9 = VAR_8->port;


 VAR_9->block1 =
  FUNC_0(&VAR_8->pdev->dev, VAR_5,
     &VAR_9->block1_dma, VAR_7);
 if (!VAR_9->block1)
  return -VAR_6;


 VAR_9->command_list =
  FUNC_0(&VAR_8->pdev->dev, VAR_0,
     &VAR_9->command_list_dma, VAR_7);
 if (!VAR_9->command_list) {
  FUNC_1(&VAR_8->pdev->dev, VAR_5,
     VAR_9->block1, VAR_9->block1_dma);
  VAR_9->block1 = ((void*)0);
  VAR_9->block1_dma = 0;
  return -VAR_6;
 }


 VAR_9->rxfis = VAR_9->block1 + VAR_2;
 VAR_9->rxfis_dma = VAR_9->block1_dma + VAR_2;
 VAR_9->identify = VAR_9->block1 + VAR_1;
 VAR_9->identify_dma = VAR_9->block1_dma + VAR_1;
 VAR_9->log_buf = VAR_9->block1 + VAR_3;
 VAR_9->log_buf_dma = VAR_9->block1_dma + VAR_3;
 VAR_9->smart_buf = VAR_9->block1 + VAR_4;
 VAR_9->smart_buf_dma = VAR_9->block1_dma + VAR_4;

 return 0;
}
