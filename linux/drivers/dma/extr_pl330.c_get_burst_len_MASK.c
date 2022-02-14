
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int data_bus_width; int data_buf_dep; int num_chan; } ;
struct pl330_dmac {TYPE_2__ pcfg; } ;
struct TYPE_3__ {int brst_size; } ;
struct dma_pl330_desc {TYPE_1__ rqcfg; struct dma_pl330_chan* pchan; } ;
struct dma_pl330_chan {struct pl330_dmac* dmac; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct dma_pl330_desc *VAR_1, size_t VAR_2)
{
 struct dma_pl330_chan *VAR_3 = VAR_1->pchan;
 struct pl330_dmac *VAR_4 = VAR_3->dmac;
 int VAR_5;

 VAR_5 = VAR_4->pcfg.data_bus_width / 8;
 VAR_5 *= VAR_4->pcfg.data_buf_dep / VAR_4->pcfg.num_chan;
 VAR_5 >>= VAR_1->rqcfg.brst_size;


 if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;

 return VAR_5;
}
