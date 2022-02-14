
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_edma_chan {int cfg; } ;
struct dma_slave_config {int dummy; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct fsl_edma_chan*) ;
 int FUNC_1 (int *,struct dma_slave_config*,int) ;
 struct fsl_edma_chan* FUNC_2 (struct dma_chan*) ;

int FUNC_3(struct dma_chan *VAR_0,
     struct dma_slave_config *VAR_1)
{
 struct fsl_edma_chan *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(&VAR_2->cfg, VAR_1, sizeof(*VAR_1));
 FUNC_0(VAR_2);

 return 0;
}
