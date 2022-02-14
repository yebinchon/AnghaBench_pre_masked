
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_edma_chan {int configured; int config; } ;
struct dma_slave_config {int dummy; } ;
struct dma_chan {int dummy; } ;


 struct dw_edma_chan* FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int *,struct dma_slave_config*,int) ;

__attribute__((used)) static int FUNC_2(struct dma_chan *VAR_0,
     struct dma_slave_config *VAR_1)
{
 struct dw_edma_chan *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(&VAR_2->config, VAR_1, sizeof(*VAR_1));
 VAR_2->configured = 1;

 return 0;
}
