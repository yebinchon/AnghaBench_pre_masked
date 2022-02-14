
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtip_port {int command_list_dma; scalar_t__ command_list; int block1_dma; scalar_t__ block1; } ;
struct driver_data {TYPE_1__* pdev; struct mtip_port* port; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct driver_data *VAR_2)
{
 struct mtip_port *VAR_3 = VAR_2->port;

 if (VAR_3->block1)
  FUNC_0(&VAR_2->pdev->dev, VAR_1,
     VAR_3->block1, VAR_3->block1_dma);

 if (VAR_3->command_list) {
  FUNC_0(&VAR_2->pdev->dev, VAR_0,
    VAR_3->command_list, VAR_3->command_list_dma);
 }
}
