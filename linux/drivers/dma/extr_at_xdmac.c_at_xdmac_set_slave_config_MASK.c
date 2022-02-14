
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_slave_config {int dummy; } ;
struct dma_chan {int dummy; } ;
struct at_xdmac_chan {int sconfig; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dma_slave_config*) ;
 int FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,struct dma_slave_config*,int) ;
 struct at_xdmac_chan* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_5(struct dma_chan *VAR_1,
          struct dma_slave_config *VAR_2)
{
 struct at_xdmac_chan *VAR_3 = FUNC_4(VAR_1);

 if (FUNC_0(VAR_2)) {
  FUNC_2(FUNC_1(VAR_1), "invalid slave configuration\n");
  return -VAR_0;
 }

 FUNC_3(&VAR_3->sconfig, VAR_2, sizeof(VAR_3->sconfig));

 return 0;
}
