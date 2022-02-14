
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dma_desc {int node; int tx_list; } ;
struct tegra_dma_channel {int lock; int free_dma_desc; int free_sg_req; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct tegra_dma_channel *VAR_0,
  struct tegra_dma_desc *VAR_1)
{
 unsigned long VAR_2;

 FUNC_3(&VAR_0->lock, VAR_2);
 if (!FUNC_1(&VAR_1->tx_list))
  FUNC_2(&VAR_1->tx_list, &VAR_0->free_sg_req);
 FUNC_0(&VAR_1->node, &VAR_0->free_dma_desc);
 FUNC_4(&VAR_0->lock, VAR_2);
}
