
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct stm32_mdma_device {int dummy; } ;
struct stm32_mdma_desc {int ccr; int cyclic; int count; TYPE_2__* node; int vdesc; } ;
struct dma_slave_config {scalar_t__ src_addr; scalar_t__ dst_addr; } ;
struct stm32_mdma_chan {int desc_pool; int vchan; TYPE_1__* desc; struct dma_slave_config dma_config; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {int hwdesc_phys; int hwdesc; } ;
struct TYPE_3__ {scalar_t__ cyclic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct stm32_mdma_chan*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct stm32_mdma_desc*) ;
 struct stm32_mdma_desc* FUNC_4 (struct stm32_mdma_chan*,int) ;
 struct stm32_mdma_device* FUNC_5 (struct stm32_mdma_chan*) ;
 int FUNC_6 (struct stm32_mdma_device*,int*,int ,scalar_t__) ;
 int FUNC_7 (struct stm32_mdma_chan*,int,int*,int*,int*,scalar_t__,size_t) ;
 int FUNC_8 (struct stm32_mdma_chan*,struct stm32_mdma_desc*,int,int,scalar_t__,scalar_t__,size_t,int,int,int,int,int) ;
 struct stm32_mdma_chan* FUNC_9 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_10 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_11(struct dma_chan *VAR_8, dma_addr_t VAR_9,
      size_t VAR_10, size_t VAR_11,
      enum dma_transfer_direction VAR_12,
      unsigned long VAR_13)
{
 struct stm32_mdma_chan *VAR_14 = FUNC_9(VAR_8);
 struct stm32_mdma_device *VAR_15 = FUNC_5(VAR_14);
 struct dma_slave_config *VAR_16 = &VAR_14->dma_config;
 struct stm32_mdma_desc *VAR_17;
 dma_addr_t VAR_18, VAR_19;
 u32 VAR_20, VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25;






 if (VAR_14->desc && VAR_14->desc->cyclic) {
  FUNC_1(FUNC_0(VAR_14),
   "Request not allowed when dma in cyclic mode\n");
  return ((void*)0);
 }

 if (!VAR_10 || !VAR_11 || VAR_11 > VAR_7) {
  FUNC_1(FUNC_0(VAR_14), "Invalid buffer/period len\n");
  return ((void*)0);
 }

 if (VAR_10 % VAR_11) {
  FUNC_1(FUNC_0(VAR_14), "buf_len not multiple of period_len\n");
  return ((void*)0);
 }

 VAR_23 = VAR_10 / VAR_11;

 VAR_17 = FUNC_4(VAR_14, VAR_23);
 if (!VAR_17)
  return ((void*)0);


 if (VAR_12 == VAR_0) {
  VAR_18 = VAR_9;
  VAR_25 = FUNC_7(VAR_14, VAR_12, &VAR_20, &VAR_21,
      &VAR_22, VAR_18, VAR_11);
  FUNC_6(VAR_15, &VAR_22, VAR_6,
       VAR_18);
 } else {
  VAR_19 = VAR_9;
  VAR_25 = FUNC_7(VAR_14, VAR_12, &VAR_20, &VAR_21,
      &VAR_22, VAR_19, VAR_11);
  FUNC_6(VAR_15, &VAR_22, VAR_5,
       VAR_19);
 }

 if (VAR_25 < 0)
  goto xfer_setup_err;


 VAR_20 &= ~VAR_3;
 VAR_20 |= VAR_4 | VAR_2 | VAR_1;
 VAR_17->ccr = VAR_20;


 for (VAR_24 = 0; VAR_24 < VAR_23; VAR_24++) {
  if (VAR_12 == VAR_0) {
   VAR_18 = VAR_9 + VAR_24 * VAR_11;
   VAR_19 = VAR_16->dst_addr;
  } else {
   VAR_18 = VAR_16->src_addr;
   VAR_19 = VAR_9 + VAR_24 * VAR_11;
  }

  FUNC_8(VAR_14, VAR_17, VAR_12, VAR_24, VAR_18,
     VAR_19, VAR_11, VAR_21, VAR_22,
     VAR_24 == VAR_23 - 1, VAR_24 == 0, 1);
 }

 VAR_17->cyclic = 1;

 return FUNC_10(&VAR_14->vchan, &VAR_17->vdesc, VAR_13);

xfer_setup_err:
 for (VAR_24 = 0; VAR_24 < VAR_17->count; VAR_24++)
  FUNC_2(VAR_14->desc_pool, VAR_17->node[VAR_24].hwdesc,
         VAR_17->node[VAR_24].hwdesc_phys);
 FUNC_3(VAR_17);
 return ((void*)0);
}
