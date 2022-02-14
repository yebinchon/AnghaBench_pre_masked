
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dma_channel {scalar_t__ slave_id; int config_init; int dma_sconfig; int pending_sg_req; } ;
struct dma_slave_config {scalar_t__ slave_id; scalar_t__ device_fc; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct dma_slave_config*,int) ;
 int FUNC_3 (struct tegra_dma_channel*) ;
 struct tegra_dma_channel* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_5(struct dma_chan *VAR_4,
  struct dma_slave_config *VAR_5)
{
 struct tegra_dma_channel *VAR_6 = FUNC_4(VAR_4);

 if (!FUNC_1(&VAR_6->pending_sg_req)) {
  FUNC_0(FUNC_3(VAR_6), "Configuration not allowed\n");
  return -VAR_0;
 }

 FUNC_2(&VAR_6->dma_sconfig, VAR_5, sizeof(*VAR_5));
 if (VAR_6->slave_id == VAR_3 &&
     VAR_5->device_fc) {
  if (VAR_5->slave_id > VAR_2)
   return -VAR_1;
  VAR_6->slave_id = VAR_5->slave_id;
 }
 VAR_6->config_init = 1;
 return 0;
}
