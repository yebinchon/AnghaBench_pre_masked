
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dma_interleaved_template {int frame_size; scalar_t__ dir; int numf; TYPE_2__* sgl; int dst_start; int src_start; int dst_inc; int src_inc; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
struct axi_dmac_desc {int cyclic; int vdesc; TYPE_1__* sg; } ;
struct axi_dmac_chan {scalar_t__ direction; size_t max_length; int vchan; scalar_t__ hw_2d; } ;
struct TYPE_5__ {int size; } ;
struct TYPE_4__ {size_t src_stride; size_t dest_stride; size_t x_len; int y_len; int dest_addr; int src_addr; } ;


 unsigned long VAR_0 ;
 struct axi_dmac_desc* FUNC_0 (int) ;
 int FUNC_1 (struct axi_dmac_chan*,int ) ;
 int FUNC_2 (struct axi_dmac_chan*,int) ;
 scalar_t__ FUNC_3 (struct axi_dmac_chan*) ;
 scalar_t__ FUNC_4 (struct axi_dmac_chan*) ;
 size_t FUNC_5 (struct dma_interleaved_template*,TYPE_2__*) ;
 size_t FUNC_6 (struct dma_interleaved_template*,TYPE_2__*) ;
 struct axi_dmac_chan* FUNC_7 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_8 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_9(
 struct dma_chan *VAR_1, struct dma_interleaved_template *VAR_2,
 unsigned long VAR_3)
{
 struct axi_dmac_chan *VAR_4 = FUNC_7(VAR_1);
 struct axi_dmac_desc *VAR_5;
 size_t VAR_6, VAR_7;

 if (VAR_2->frame_size != 1)
  return ((void*)0);

 if (VAR_2->dir != VAR_4->direction)
  return ((void*)0);

 if (FUNC_4(VAR_4)) {
  if (!VAR_2->src_inc || !FUNC_1(VAR_4, VAR_2->src_start))
   return ((void*)0);
 }

 if (FUNC_3(VAR_4)) {
  if (!VAR_2->dst_inc || !FUNC_1(VAR_4, VAR_2->dst_start))
   return ((void*)0);
 }

 VAR_6 = FUNC_5(VAR_2, &VAR_2->sgl[0]);
 VAR_7 = FUNC_6(VAR_2, &VAR_2->sgl[0]);

 if (VAR_4->hw_2d) {
  if (!FUNC_2(VAR_4, VAR_2->sgl[0].size) ||
      VAR_2->numf == 0)
   return ((void*)0);
  if (VAR_2->sgl[0].size + VAR_6 > VAR_4->max_length ||
      VAR_2->sgl[0].size + VAR_7 > VAR_4->max_length)
   return ((void*)0);
 } else {
  if (VAR_6 != 0 || VAR_7 != 0)
   return ((void*)0);
  if (VAR_4->max_length / VAR_2->sgl[0].size < VAR_2->numf)
   return ((void*)0);
  if (!FUNC_2(VAR_4, VAR_2->sgl[0].size * VAR_2->numf))
   return ((void*)0);
 }

 VAR_5 = FUNC_0(1);
 if (!VAR_5)
  return ((void*)0);

 if (FUNC_4(VAR_4)) {
  VAR_5->sg[0].src_addr = VAR_2->src_start;
  VAR_5->sg[0].src_stride = VAR_2->sgl[0].size + VAR_7;
 }

 if (FUNC_3(VAR_4)) {
  VAR_5->sg[0].dest_addr = VAR_2->dst_start;
  VAR_5->sg[0].dest_stride = VAR_2->sgl[0].size + VAR_6;
 }

 if (VAR_4->hw_2d) {
  VAR_5->sg[0].x_len = VAR_2->sgl[0].size;
  VAR_5->sg[0].y_len = VAR_2->numf;
 } else {
  VAR_5->sg[0].x_len = VAR_2->sgl[0].size * VAR_2->numf;
  VAR_5->sg[0].y_len = 1;
 }

 if (VAR_3 & VAR_0)
  VAR_5->cyclic = 1;

 return FUNC_8(&VAR_4->vchan, &VAR_5->vdesc, VAR_3);
}
