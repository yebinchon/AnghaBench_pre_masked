
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
struct TYPE_11__ {int phys; } ;
struct TYPE_12__ {TYPE_5__ tx; } ;
struct TYPE_10__ {void* ctl_lo; void* ctl_hi; void* block_ts_lo; } ;
struct axi_dma_desc {TYPE_6__ vd; int xfer_list; TYPE_4__ lli; } ;
struct axi_dma_chan {size_t id; int vc; TYPE_3__* chip; } ;
typedef size_t dma_addr_t ;
struct TYPE_9__ {TYPE_2__* dw; } ;
struct TYPE_8__ {TYPE_1__* hdata; } ;
struct TYPE_7__ {size_t* block_size; size_t axi_rw_burst_len; scalar_t__ restrict_axi_burst_len; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t FUNC_0 (struct axi_dma_chan*,size_t,size_t,size_t) ;
 int FUNC_1 (struct axi_dma_chan*) ;
 struct axi_dma_desc* FUNC_2 (struct axi_dma_chan*) ;
 int FUNC_3 (struct axi_dma_desc*) ;
 int FUNC_4 (struct axi_dma_chan*) ;
 void* FUNC_5 (size_t) ;
 struct axi_dma_chan* FUNC_6 (struct dma_chan*) ;
 int FUNC_7 (int ,char*,int ,size_t*,size_t*,size_t,unsigned long) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct axi_dma_desc*) ;
 int FUNC_10 (struct axi_dma_desc*) ;
 int FUNC_11 (struct axi_dma_desc*) ;
 scalar_t__ FUNC_12 (int) ;
 struct dma_async_tx_descriptor* FUNC_13 (int *,TYPE_6__*,unsigned long) ;
 int FUNC_14 (struct axi_dma_desc*,size_t) ;
 int FUNC_15 (struct axi_dma_desc*,int) ;
 int FUNC_16 (struct axi_dma_desc*,size_t) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_17(struct dma_chan *VAR_13, dma_addr_t VAR_14,
    dma_addr_t VAR_15, size_t VAR_16, unsigned long VAR_17)
{
 struct axi_dma_desc *VAR_18 = ((void*)0), *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
 struct axi_dma_chan *VAR_21 = FUNC_6(VAR_13);
 size_t VAR_22, VAR_23, VAR_24;
 u32 VAR_25, VAR_26;
 u8 VAR_27 = 0;

 FUNC_7(FUNC_4(VAR_21), "%s: memcpy: src: %pad dst: %pad length: %zd flags: %#lx",
  FUNC_1(VAR_21), &VAR_15, &VAR_14, VAR_16, VAR_17);

 VAR_23 = VAR_21->chip->dw->hdata->block_size[VAR_21->id];

 while (VAR_16) {
  VAR_24 = VAR_16;






  VAR_25 = FUNC_0(VAR_21, VAR_15, VAR_14, VAR_24);






  VAR_22 = VAR_24 >> VAR_25;
  if (VAR_22 > VAR_23) {
   VAR_22 = VAR_23;
   VAR_24 = VAR_23 << VAR_25;
  }

  VAR_19 = FUNC_2(VAR_21);
  if (FUNC_12(!VAR_19))
   goto err_desc_get;

  FUNC_16(VAR_19, VAR_15);
  FUNC_14(VAR_19, VAR_14);
  VAR_19->lli.block_ts_lo = FUNC_5(VAR_22 - 1);

  VAR_26 = VAR_4;
  if (VAR_21->chip->dw->hdata->restrict_axi_burst_len) {
   u32 VAR_28 = VAR_21->chip->dw->hdata->axi_rw_burst_len;

   VAR_26 |= (VAR_0 |
    VAR_28 << VAR_1 |
    VAR_2 |
    VAR_28 << VAR_3);
  }
  VAR_19->lli.ctl_hi = FUNC_5(VAR_26);

  VAR_26 = (VAR_11 << VAR_6 |
         VAR_11 << VAR_9 |
         VAR_25 << VAR_7 |
         VAR_25 << VAR_10 |
         VAR_12 << VAR_5 |
         VAR_12 << VAR_8);
  VAR_19->lli.ctl_lo = FUNC_5(VAR_26);

  FUNC_11(VAR_19);
  FUNC_9(VAR_19);


  if (!VAR_18) {
   VAR_18 = VAR_19;
  } else {
   FUNC_8(&VAR_19->xfer_list, &VAR_18->xfer_list);
   FUNC_15(VAR_20, VAR_19->vd.tx.phys | VAR_27);
  }
  VAR_20 = VAR_19;


  VAR_16 -= VAR_24;
  VAR_14 += VAR_24;
  VAR_15 += VAR_24;
 }


 if (FUNC_12(!VAR_18))
  return ((void*)0);


 FUNC_10(VAR_19);

 return FUNC_13(&VAR_21->vc, &VAR_18->vd, VAR_17);

err_desc_get:
 if (VAR_18)
  FUNC_3(VAR_18);
 return ((void*)0);
}
