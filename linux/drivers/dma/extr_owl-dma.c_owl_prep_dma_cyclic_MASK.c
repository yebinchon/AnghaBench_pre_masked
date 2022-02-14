
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_slave_config {scalar_t__ src_addr; scalar_t__ dst_addr; } ;
struct owl_dma_vchan {int vc; struct dma_slave_config cfg; } ;
struct owl_dma_txd {int cyclic; int vd; int lli_list; } ;
struct owl_dma_lli {int dummy; } ;
struct owl_dma {int dummy; } ;
struct dma_chan {int device; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int ,char*) ;
 struct owl_dma_txd* FUNC_3 (int,int ) ;
 struct owl_dma_lli* FUNC_4 (struct owl_dma_txd*,struct owl_dma_lli*,struct owl_dma_lli*,int) ;
 struct owl_dma_lli* FUNC_5 (struct owl_dma*) ;
 int FUNC_6 (struct owl_dma_vchan*,struct owl_dma_lli*,scalar_t__,scalar_t__,size_t,int,struct dma_slave_config*,int) ;
 int FUNC_7 (struct owl_dma*,struct owl_dma_txd*) ;
 struct owl_dma* FUNC_8 (int ) ;
 struct owl_dma_vchan* FUNC_9 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_10 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor
  *FUNC_11(struct dma_chan *VAR_3,
         dma_addr_t VAR_4, size_t VAR_5,
         size_t VAR_6,
         enum dma_transfer_direction VAR_7,
         unsigned long VAR_8)
{
 struct owl_dma *VAR_9 = FUNC_8(VAR_3->device);
 struct owl_dma_vchan *VAR_10 = FUNC_9(VAR_3);
 struct dma_slave_config *VAR_11 = &VAR_10->cfg;
 struct owl_dma_txd *VAR_12;
 struct owl_dma_lli *VAR_13, *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 dma_addr_t VAR_16 = 0, VAR_17 = 0;
 unsigned int VAR_18 = VAR_5 / VAR_6;
 int VAR_19, VAR_20;

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return ((void*)0);

 FUNC_0(&VAR_12->lli_list);
 VAR_12->cyclic = 1;

 for (VAR_20 = 0; VAR_20 < VAR_18; VAR_20++) {
  VAR_13 = FUNC_5(VAR_9);
  if (!VAR_13) {
   FUNC_2(FUNC_1(VAR_3), "failed to allocate lli");
   goto err_txd_free;
  }

  if (VAR_7 == VAR_1) {
   VAR_16 = VAR_4 + (VAR_6 * VAR_20);
   VAR_17 = VAR_11->dst_addr;
  } else if (VAR_7 == VAR_0) {
   VAR_16 = VAR_11->src_addr;
   VAR_17 = VAR_4 + (VAR_6 * VAR_20);
  }

  VAR_19 = FUNC_6(VAR_10, VAR_13, VAR_16, VAR_17, VAR_6,
          VAR_7, VAR_11, VAR_12->cyclic);
  if (VAR_19) {
   FUNC_2(FUNC_1(VAR_3), "failed to config lli");
   goto err_txd_free;
  }

  if (!VAR_15)
   VAR_15 = VAR_13;

  VAR_14 = FUNC_4(VAR_12, VAR_14, VAR_13, 0);
 }


 FUNC_4(VAR_12, VAR_14, VAR_15, 1);

 return FUNC_10(&VAR_10->vc, &VAR_12->vd, VAR_8);

err_txd_free:
 FUNC_7(VAR_9, VAR_12);

 return ((void*)0);
}
