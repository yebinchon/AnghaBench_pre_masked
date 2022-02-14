
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_dma_chan {int slave_cfg; } ;
struct dma_slave_config {int dummy; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct dma_slave_config*,int) ;
 struct zx_dma_chan* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_2(struct dma_chan *VAR_1,
    struct dma_slave_config *VAR_2)
{
 struct zx_dma_chan *VAR_3 = FUNC_1(VAR_1);

 if (!VAR_2)
  return -VAR_0;

 FUNC_0(&VAR_3->slave_cfg, VAR_2, sizeof(*VAR_2));

 return 0;
}
