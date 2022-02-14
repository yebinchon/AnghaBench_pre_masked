
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virt_dma_desc {int node; } ;
struct axi_dmac_sg {int schedule_when_free; int dest_addr; int dest_stride; int src_addr; int src_stride; int x_len; int y_len; void* id; } ;
struct TYPE_3__ {int callback; } ;
struct TYPE_4__ {TYPE_1__ tx; } ;
struct axi_dmac_desc {size_t num_submitted; int num_sgs; TYPE_2__ vdesc; scalar_t__ cyclic; scalar_t__ have_partial_xfer; struct axi_dmac_sg* sg; } ;
struct axi_dmac_chan {scalar_t__ hw_partial_xfer; scalar_t__ hw_cyclic; struct axi_dmac_desc* next_desc; int active_descs; int vchan; } ;
struct axi_dmac {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 scalar_t__ FUNC_0 (struct axi_dmac_chan*) ;
 void* FUNC_1 (struct axi_dmac*,int ) ;
 scalar_t__ FUNC_2 (struct axi_dmac_chan*) ;
 int FUNC_3 (struct axi_dmac*,int ,int) ;
 struct axi_dmac* FUNC_4 (struct axi_dmac_chan*) ;
 int FUNC_5 (int *,int *) ;
 struct axi_dmac_desc* FUNC_6 (struct virt_dma_desc*) ;
 struct virt_dma_desc* FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct axi_dmac_chan *VAR_13)
{
 struct axi_dmac *VAR_14 = FUNC_4(VAR_13);
 struct virt_dma_desc *VAR_15;
 struct axi_dmac_desc *VAR_16;
 struct axi_dmac_sg *VAR_17;
 unsigned int VAR_18 = 0;
 unsigned int VAR_19;

 VAR_19 = FUNC_1(VAR_14, VAR_8);
 if (VAR_19)
  return;

 VAR_16 = VAR_13->next_desc;

 if (!VAR_16) {
  VAR_15 = FUNC_7(&VAR_13->vchan);
  if (!VAR_15)
   return;
  FUNC_5(&VAR_15->node, &VAR_13->active_descs);
  VAR_16 = FUNC_6(VAR_15);
 }
 VAR_17 = &VAR_16->sg[VAR_16->num_submitted];


 if (VAR_17->id != VAR_12) {
  VAR_17->schedule_when_free = 1;
  return;
 }

 VAR_16->num_submitted++;
 if (VAR_16->num_submitted == VAR_16->num_sgs ||
     VAR_16->have_partial_xfer) {
  if (VAR_16->cyclic)
   VAR_16->num_submitted = 0;
  else
   VAR_13->next_desc = ((void*)0);
  VAR_18 |= VAR_1;
 } else {
  VAR_13->next_desc = VAR_16;
 }

 VAR_17->id = FUNC_1(VAR_14, VAR_9);

 if (FUNC_0(VAR_13)) {
  FUNC_3(VAR_14, VAR_3, VAR_17->dest_addr);
  FUNC_3(VAR_14, VAR_4, VAR_17->dest_stride);
 }

 if (FUNC_2(VAR_13)) {
  FUNC_3(VAR_14, VAR_6, VAR_17->src_addr);
  FUNC_3(VAR_14, VAR_7, VAR_17->src_stride);
 }






 if (VAR_13->hw_cyclic && VAR_16->cyclic && !VAR_16->vdesc.tx.callback &&
  VAR_16->num_sgs == 1)
  VAR_18 |= VAR_0;

 if (VAR_13->hw_partial_xfer)
  VAR_18 |= VAR_2;

 FUNC_3(VAR_14, VAR_10, VAR_17->x_len - 1);
 FUNC_3(VAR_14, VAR_11, VAR_17->y_len - 1);
 FUNC_3(VAR_14, VAR_5, VAR_18);
 FUNC_3(VAR_14, VAR_8, 1);
}
