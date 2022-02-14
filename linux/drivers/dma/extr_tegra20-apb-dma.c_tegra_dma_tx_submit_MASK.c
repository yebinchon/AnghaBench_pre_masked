
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dma_desc {int tx_list; int txd; int dma_status; } ;
struct tegra_dma_channel {int lock; int pending_sg_req; } ;
struct dma_async_tx_descriptor {int chan; } ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct tegra_dma_channel* FUNC_4 (int ) ;
 struct tegra_dma_desc* FUNC_5 (struct dma_async_tx_descriptor*) ;

__attribute__((used)) static dma_cookie_t FUNC_6(struct dma_async_tx_descriptor *VAR_1)
{
 struct tegra_dma_desc *VAR_2 = FUNC_5(VAR_1);
 struct tegra_dma_channel *VAR_3 = FUNC_4(VAR_1->chan);
 unsigned long VAR_4;
 dma_cookie_t VAR_5;

 FUNC_2(&VAR_3->lock, VAR_4);
 VAR_2->dma_status = VAR_0;
 VAR_5 = FUNC_0(&VAR_2->txd);
 FUNC_1(&VAR_2->tx_list, &VAR_3->pending_sg_req);
 FUNC_3(&VAR_3->lock, VAR_4);
 return VAR_5;
}
