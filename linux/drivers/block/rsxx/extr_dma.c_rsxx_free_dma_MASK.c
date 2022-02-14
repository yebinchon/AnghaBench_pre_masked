
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rsxx_dma_ctrl {TYPE_2__* card; } ;
struct rsxx_dma {scalar_t__ cmd; int dma_addr; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct rsxx_dma*) ;
 int FUNC_3 (int ,struct rsxx_dma*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct rsxx_dma_ctrl *VAR_5, struct rsxx_dma *VAR_6)
{
 if (VAR_6->cmd != VAR_2) {
  if (!FUNC_0(&VAR_5->card->dev->dev, VAR_6->dma_addr)) {
   FUNC_1(&VAR_5->card->dev->dev, VAR_6->dma_addr,
           FUNC_2(VAR_6),
           VAR_6->cmd == VAR_3 ?
         VAR_1 :
         VAR_0);
  }
 }

 FUNC_3(VAR_4, VAR_6);
}
