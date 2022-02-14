
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dst_maxburst; int src_maxburst; } ;
struct idma64_chan {TYPE_1__ config; } ;
struct dma_slave_config {int dummy; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,struct dma_slave_config*,int) ;
 struct idma64_chan* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_0,
  struct dma_slave_config *VAR_1)
{
 struct idma64_chan *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(&VAR_2->config, VAR_1, sizeof(VAR_2->config));

 FUNC_0(&VAR_2->config.src_maxburst);
 FUNC_0(&VAR_2->config.dst_maxburst);

 return 0;
}
