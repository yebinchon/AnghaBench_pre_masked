
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pata_pxa_data {int dma_chan; int dma_done; } ;
struct ata_queued_cmd {TYPE_1__* ap; } ;
struct TYPE_2__ {struct pata_pxa_data* private_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ata_queued_cmd *VAR_0)
{
 struct pata_pxa_data *VAR_1 = VAR_0->ap->private_data;
 FUNC_1(&VAR_1->dma_done);
 FUNC_0(VAR_1->dma_chan);
}
