
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phys; int tx_submit; } ;
struct mmp_pdma_desc_sw {TYPE_1__ async_tx; int tx_list; } ;
struct mmp_pdma_chan {int chan; int dev; int desc_pool; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 struct mmp_pdma_desc_sw* FUNC_3 (int ,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static struct mmp_pdma_desc_sw *
FUNC_4(struct mmp_pdma_chan *VAR_2)
{
 struct mmp_pdma_desc_sw *VAR_3;
 dma_addr_t VAR_4;

 VAR_3 = FUNC_3(VAR_2->desc_pool, VAR_0, &VAR_4);
 if (!VAR_3) {
  FUNC_1(VAR_2->dev, "out of memory for link descriptor\n");
  return ((void*)0);
 }

 FUNC_0(&VAR_3->tx_list);
 FUNC_2(&VAR_3->async_tx, &VAR_2->chan);

 VAR_3->async_tx.tx_submit = VAR_1;
 VAR_3->async_tx.phys = VAR_4;

 return VAR_3;
}
