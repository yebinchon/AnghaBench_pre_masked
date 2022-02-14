
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct dma_slave_config {void* src_addr; void* dst_addr; } ;
struct sun6i_vchan {int cyclic; int vc; int port; struct dma_slave_config cfg; } ;
struct sun6i_dma_lli {size_t len; struct sun6i_dma_lli* v_lli_next; int p_lli_next; void* cfg; void* dst; void* src; int para; } ;
struct TYPE_3__ {int dev; } ;
struct sun6i_dma_dev {int pool; TYPE_2__* cfg; TYPE_1__ slave; } ;
struct sun6i_desc {struct sun6i_dma_lli* v_lli; int vd; int p_lli; } ;
struct dma_chan {int device; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef void* dma_addr_t ;
struct TYPE_4__ {int (* set_mode ) (void**,int ,int ) ;int (* set_drq ) (void**,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int ,char*) ;
 struct sun6i_dma_lli* FUNC_2 (int ,int ,void**) ;
 int FUNC_3 (int ,struct sun6i_dma_lli*,int ) ;
 int FUNC_4 (struct sun6i_desc*) ;
 struct sun6i_desc* FUNC_5 (int,int ) ;
 int FUNC_6 (struct sun6i_dma_dev*,struct dma_slave_config*,int,void**) ;
 int FUNC_7 (void**,int ,int ) ;
 int FUNC_8 (void**,int ,int ) ;
 int FUNC_9 (void**,int ,int ) ;
 int FUNC_10 (void**,int ,int ) ;
 struct sun6i_dma_lli* FUNC_11 (struct sun6i_dma_lli*,struct sun6i_dma_lli*,void*,struct sun6i_desc*) ;
 struct sun6i_dma_dev* FUNC_12 (int ) ;
 struct sun6i_vchan* FUNC_13 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_14 (int *,int *,unsigned long) ;
 int FUNC_15 (struct sun6i_dma_lli*) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_16(
     struct dma_chan *VAR_6,
     dma_addr_t VAR_7,
     size_t VAR_8,
     size_t VAR_9,
     enum dma_transfer_direction VAR_10,
     unsigned long VAR_11)
{
 struct sun6i_dma_dev *VAR_12 = FUNC_12(VAR_6->device);
 struct sun6i_vchan *VAR_13 = FUNC_13(VAR_6);
 struct dma_slave_config *VAR_14 = &VAR_13->cfg;
 struct sun6i_dma_lli *VAR_15, *VAR_16 = ((void*)0);
 struct sun6i_desc *VAR_17;
 dma_addr_t VAR_18;
 u32 VAR_19;
 unsigned int VAR_20, VAR_21 = VAR_8 / VAR_9;
 int VAR_22;

 VAR_22 = FUNC_6(VAR_12, VAR_14, VAR_10, &VAR_19);
 if (VAR_22) {
  FUNC_1(FUNC_0(VAR_6), "Invalid DMA configuration\n");
  return ((void*)0);
 }

 VAR_17 = FUNC_5(sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return ((void*)0);

 for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {
  VAR_15 = FUNC_2(VAR_12->pool, VAR_2, &VAR_18);
  if (!VAR_15) {
   FUNC_1(VAR_12->slave.dev, "Failed to alloc lli memory\n");
   goto err_lli_free;
  }

  VAR_15->len = VAR_9;
  VAR_15->para = VAR_5;

  if (VAR_10 == VAR_0) {
   VAR_15->src = VAR_7 + VAR_9 * VAR_20;
   VAR_15->dst = VAR_14->dst_addr;
   VAR_15->cfg = VAR_19;
   VAR_12->cfg->set_drq(&VAR_15->cfg, VAR_1, VAR_13->port);
   VAR_12->cfg->set_mode(&VAR_15->cfg, VAR_4, VAR_3);
  } else {
   VAR_15->src = VAR_14->src_addr;
   VAR_15->dst = VAR_7 + VAR_9 * VAR_20;
   VAR_15->cfg = VAR_19;
   VAR_12->cfg->set_drq(&VAR_15->cfg, VAR_13->port, VAR_1);
   VAR_12->cfg->set_mode(&VAR_15->cfg, VAR_3, VAR_4);
  }

  VAR_16 = FUNC_11(VAR_16, VAR_15, VAR_18, VAR_17);
 }

 VAR_16->p_lli_next = VAR_17->p_lli;

 VAR_13->cyclic = 1;

 return FUNC_14(&VAR_13->vc, &VAR_17->vd, VAR_11);

err_lli_free:
 for (VAR_16 = VAR_17->v_lli; VAR_16; VAR_16 = VAR_16->v_lli_next)
  FUNC_3(VAR_12->pool, VAR_16, FUNC_15(VAR_16));
 FUNC_4(VAR_17);
 return ((void*)0);
}
