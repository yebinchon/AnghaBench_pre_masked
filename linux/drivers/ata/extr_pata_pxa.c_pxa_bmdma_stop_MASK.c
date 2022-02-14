
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pata_pxa_data {int dma_chan; int dma_done; int dma_cookie; } ;
struct ata_queued_cmd {int dev; TYPE_1__* ap; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
struct TYPE_2__ {struct pata_pxa_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct ata_queued_cmd *VAR_3)
{
 struct pata_pxa_data *VAR_4 = VAR_3->ap->private_data;
 enum dma_status VAR_5;

 VAR_5 = FUNC_2(VAR_4->dma_chan, VAR_4->dma_cookie, ((void*)0));
 if (VAR_5 != VAR_1 && VAR_5 != VAR_0 &&
     FUNC_3(&VAR_4->dma_done, VAR_2))
  FUNC_0(VAR_3->dev, "Timeout waiting for DMA completion!");

 FUNC_1(VAR_4->dma_chan);
}
