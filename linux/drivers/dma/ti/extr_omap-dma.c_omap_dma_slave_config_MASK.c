
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_chan {int cfg; } ;
struct dma_slave_config {scalar_t__ src_addr_width; scalar_t__ dst_addr_width; scalar_t__ src_maxburst; scalar_t__ dst_maxburst; } ;
struct dma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {scalar_t__ max_burst; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct dma_slave_config*,int) ;
 struct omap_chan* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_2(struct dma_chan *VAR_2, struct dma_slave_config *VAR_3)
{
 struct omap_chan *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3->src_addr_width == VAR_0 ||
     VAR_3->dst_addr_width == VAR_0)
  return -VAR_1;

 if (VAR_3->src_maxburst > VAR_2->device->max_burst ||
     VAR_3->dst_maxburst > VAR_2->device->max_burst)
  return -VAR_1;

 FUNC_0(&VAR_4->cfg, VAR_3, sizeof(VAR_4->cfg));

 return 0;
}
