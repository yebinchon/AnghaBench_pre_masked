
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dst_maxburst; int src_maxburst; } ;
struct dw_dma_chan {TYPE_1__ dma_sconfig; } ;
struct dw_dma {int (* encode_maxburst ) (struct dw_dma_chan*,int *) ;} ;
struct dma_slave_config {int dummy; } ;
struct dma_chan {int device; } ;


 int FUNC_0 (TYPE_1__*,struct dma_slave_config*,int) ;
 int FUNC_1 (struct dw_dma_chan*,int *) ;
 int FUNC_2 (struct dw_dma_chan*,int *) ;
 struct dw_dma* FUNC_3 (int ) ;
 struct dw_dma_chan* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_5(struct dma_chan *VAR_0, struct dma_slave_config *VAR_1)
{
 struct dw_dma_chan *VAR_2 = FUNC_4(VAR_0);
 struct dw_dma *VAR_3 = FUNC_3(VAR_0->device);

 FUNC_0(&VAR_2->dma_sconfig, VAR_1, sizeof(*VAR_1));

 VAR_3->encode_maxburst(VAR_2, &VAR_2->dma_sconfig.src_maxburst);
 VAR_3->encode_maxburst(VAR_2, &VAR_2->dma_sconfig.dst_maxburst);

 return 0;
}
