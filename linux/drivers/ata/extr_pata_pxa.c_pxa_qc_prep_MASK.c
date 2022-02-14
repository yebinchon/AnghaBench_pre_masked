
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pata_pxa_data {int dma_cookie; int dma_chan; } ;
struct dma_async_tx_descriptor {struct pata_pxa_data* callback_param; int callback; } ;
struct ata_queued_cmd {int flags; scalar_t__ dma_dir; int dev; int n_elem; int sg; TYPE_1__* ap; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
struct TYPE_2__ {struct pata_pxa_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 struct dma_async_tx_descriptor* FUNC_1 (int ,int ,int ,int,int ) ;
 int FUNC_2 (struct dma_async_tx_descriptor*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(struct ata_queued_cmd *VAR_6)
{
 struct pata_pxa_data *VAR_7 = VAR_6->ap->private_data;
 struct dma_async_tx_descriptor *VAR_8;
 enum dma_transfer_direction VAR_9;

 if (!(VAR_6->flags & VAR_0))
  return;

 VAR_9 = (VAR_6->dma_dir == VAR_4 ? VAR_2 : VAR_1);
 VAR_8 = FUNC_1(VAR_7->dma_chan, VAR_6->sg, VAR_6->n_elem, VAR_9,
         VAR_3);
 if (!VAR_8) {
  FUNC_0(VAR_6->dev, "prep_slave_sg() failed\n");
  return;
 }
 VAR_8->callback = VAR_5;
 VAR_8->callback_param = VAR_7;
 VAR_7->dma_cookie = FUNC_2(VAR_8);
}
