
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dma_slave_config {scalar_t__ src_addr; scalar_t__ dst_addr; } ;
struct sun4i_dma_vchan {int vc; int endpoint; scalar_t__ is_dedicated; struct dma_slave_config cfg; } ;
struct sun4i_dma_promise {int cfg; int list; } ;
struct sun4i_dma_contract {int is_cyclic; int vd; int demands; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct dma_chan*) ;
 int FUNC_6 (int ,char*) ;
 struct sun4i_dma_contract* FUNC_7 () ;
 struct sun4i_dma_promise* FUNC_8 (struct dma_chan*,scalar_t__,scalar_t__,int,struct dma_slave_config*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (size_t,size_t) ;
 struct sun4i_dma_vchan* FUNC_12 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_13 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_14(struct dma_chan *VAR_3, dma_addr_t VAR_4, size_t VAR_5,
     size_t VAR_6, enum dma_transfer_direction VAR_7,
     unsigned long VAR_8)
{
 struct sun4i_dma_vchan *VAR_9 = FUNC_12(VAR_3);
 struct dma_slave_config *VAR_10 = &VAR_9->cfg;
 struct sun4i_dma_promise *VAR_11;
 struct sun4i_dma_contract *VAR_12;
 dma_addr_t VAR_13, VAR_14;
 u32 VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;

 if (!FUNC_9(VAR_7)) {
  FUNC_6(FUNC_5(VAR_3), "Invalid DMA direction\n");
  return ((void*)0);
 }

 if (VAR_9->is_dedicated) {






  FUNC_6(FUNC_5(VAR_3),
   "Cyclic transfers are only supported on Normal DMA\n");
  return ((void*)0);
 }

 VAR_12 = FUNC_7();
 if (!VAR_12)
  return ((void*)0);

 VAR_12->is_cyclic = 1;


 if (VAR_7 == VAR_0) {
  VAR_13 = VAR_4;
  VAR_14 = VAR_10->dst_addr;
  VAR_15 = FUNC_4(VAR_2) |
       FUNC_2(VAR_9->endpoint) |
       FUNC_1(VAR_1);
 } else {
  VAR_13 = VAR_10->src_addr;
  VAR_14 = VAR_4;
  VAR_15 = FUNC_4(VAR_9->endpoint) |
       FUNC_3(VAR_1) |
       FUNC_2(VAR_2);
 }
 VAR_16 = FUNC_0(VAR_5 / VAR_6, 2);
 for (VAR_19 = 0; VAR_19 < VAR_16; VAR_19++) {

  VAR_17 = VAR_19 * VAR_6 * 2;
  VAR_18 = FUNC_11((VAR_5 - VAR_17), (VAR_6 * 2));
  if (VAR_7 == VAR_0)
   VAR_13 = VAR_4 + VAR_17;
  else
   VAR_14 = VAR_4 + VAR_17;


  VAR_11 = FUNC_8(VAR_3, VAR_13, VAR_14,
      VAR_18, VAR_10, VAR_7);
  if (!VAR_11) {

   return ((void*)0);
  }
  VAR_11->cfg |= VAR_15;


  FUNC_10(&VAR_11->list, &VAR_12->demands);
 }


 return FUNC_13(&VAR_9->vc, &VAR_12->vd, VAR_8);
}
