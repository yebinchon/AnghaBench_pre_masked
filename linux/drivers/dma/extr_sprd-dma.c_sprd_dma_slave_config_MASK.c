
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_slave_config {int dummy; } ;
struct sprd_dma_chn {struct dma_slave_config slave_cfg; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct dma_slave_config*,struct dma_slave_config*,int) ;
 struct sprd_dma_chn* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_2(struct dma_chan *VAR_0,
     struct dma_slave_config *VAR_1)
{
 struct sprd_dma_chn *VAR_2 = FUNC_1(VAR_0);
 struct dma_slave_config *VAR_3 = &VAR_2->slave_cfg;

 FUNC_0(VAR_3, VAR_1, sizeof(*VAR_1));
 return 0;
}
