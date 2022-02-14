
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pata_macio_priv {int dev; int * dma_table_cpu; int dma_table_dma; } ;
struct dbdma_cmd {int dummy; } ;
struct TYPE_2__ {int * bmdma_addr; } ;
struct ata_port {scalar_t__ udma_mask; scalar_t__ mwdma_mask; TYPE_1__ ioaddr; struct pata_macio_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct ata_port *VAR_2)
{
 struct pata_macio_priv *VAR_3 = VAR_2->private_data;

 if (VAR_2->ioaddr.bmdma_addr == ((void*)0))
  return 0;






 VAR_3->dma_table_cpu =
  FUNC_1(VAR_3->dev,
        (VAR_1 + 2) * sizeof(struct dbdma_cmd),
        &VAR_3->dma_table_dma, VAR_0);
 if (VAR_3->dma_table_cpu == ((void*)0)) {
  FUNC_0(VAR_3->dev, "Unable to allocate DMA command list\n");
  VAR_2->ioaddr.bmdma_addr = ((void*)0);
  VAR_2->mwdma_mask = 0;
  VAR_2->udma_mask = 0;
 }
 return 0;
}
