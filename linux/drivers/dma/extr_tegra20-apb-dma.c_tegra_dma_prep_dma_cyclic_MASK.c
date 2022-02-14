
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {unsigned long apb_ptr; int ahb_ptr; unsigned long csr; unsigned long apb_seq; unsigned long ahb_seq; } ;
struct tegra_dma_sg_req {int configured; int last_sg; int req_len; int node; struct tegra_dma_desc* dma_desc; TYPE_3__ ch_regs; } ;
struct dma_async_tx_descriptor {unsigned long flags; } ;
struct tegra_dma_desc {size_t bytes_requested; struct dma_async_tx_descriptor txd; int tx_list; scalar_t__ bytes_transferred; scalar_t__ cb_count; int cb_node; } ;
struct tegra_dma_channel {unsigned long slave_id; int cyclic; scalar_t__ isr_handler; TYPE_2__* tdma; scalar_t__ busy; int config_init; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;
typedef int dma_addr_t ;
struct TYPE_5__ {TYPE_1__* chip_data; } ;
struct TYPE_4__ {int max_dma_count; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 unsigned long FUNC_3 (struct tegra_dma_channel*,int ,int,int) ;
 scalar_t__ FUNC_4 (struct tegra_dma_channel*,int,unsigned long*,unsigned long*,unsigned long*,int *,int*) ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct tegra_dma_channel*) ;
 struct tegra_dma_desc* FUNC_7 (struct tegra_dma_channel*) ;
 int FUNC_8 (struct tegra_dma_channel*,struct tegra_dma_desc*) ;
 int FUNC_9 (struct tegra_dma_channel*,TYPE_3__*,int) ;
 struct tegra_dma_sg_req* FUNC_10 (struct tegra_dma_channel*) ;
 struct tegra_dma_channel* FUNC_11 (struct dma_chan*) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_12(
 struct dma_chan *VAR_12, dma_addr_t VAR_13, size_t VAR_14,
 size_t VAR_15, enum dma_transfer_direction VAR_16,
 unsigned long VAR_17)
{
 struct tegra_dma_channel *VAR_18 = FUNC_11(VAR_12);
 struct tegra_dma_desc *VAR_19 = ((void*)0);
 struct tegra_dma_sg_req *VAR_20 = ((void*)0);
 unsigned long VAR_21, VAR_22, VAR_23, VAR_24;
 int VAR_25;
 size_t VAR_26;
 dma_addr_t VAR_27 = VAR_13;
 u32 VAR_28;
 enum dma_slave_buswidth VAR_29;

 if (!VAR_14 || !VAR_15) {
  FUNC_2(FUNC_6(VAR_18), "Invalid buffer/period len\n");
  return ((void*)0);
 }

 if (!VAR_18->config_init) {
  FUNC_2(FUNC_6(VAR_18), "DMA slave is not configured\n");
  return ((void*)0);
 }







 if (VAR_18->busy) {
  FUNC_2(FUNC_6(VAR_18), "Request not allowed when DMA running\n");
  return ((void*)0);
 }





 if (VAR_14 % VAR_15) {
  FUNC_2(FUNC_6(VAR_18), "buf_len is not multiple of period_len\n");
  return ((void*)0);
 }

 VAR_25 = VAR_15;
 if ((VAR_25 & 3) || (VAR_13 & 3) ||
   (VAR_25 > VAR_18->tdma->chip_data->max_dma_count)) {
  FUNC_2(FUNC_6(VAR_18), "Req len/mem address is not correct\n");
  return ((void*)0);
 }

 if (FUNC_4(VAR_18, VAR_16, &VAR_23, &VAR_24, &VAR_21,
    &VAR_28, &VAR_29) < 0)
  return ((void*)0);

 VAR_22 = VAR_3;
 VAR_22 |= VAR_4 <<
     VAR_5;
 VAR_22 |= VAR_2;

 if (VAR_18->slave_id != VAR_10) {
  VAR_21 |= VAR_7;
  VAR_21 |= VAR_18->slave_id << VAR_9;
 }

 if (VAR_17 & VAR_1) {
  VAR_21 |= VAR_8;
 } else {
  FUNC_1(1);
  return ((void*)0);
 }

 VAR_24 |= VAR_6;

 VAR_19 = FUNC_7(VAR_18);
 if (!VAR_19) {
  FUNC_2(FUNC_6(VAR_18), "not enough descriptors available\n");
  return ((void*)0);
 }

 FUNC_0(&VAR_19->tx_list);
 FUNC_0(&VAR_19->cb_node);
 VAR_19->cb_count = 0;

 VAR_19->bytes_transferred = 0;
 VAR_19->bytes_requested = VAR_14;
 VAR_26 = VAR_14;


 while (VAR_26) {
  VAR_20 = FUNC_10(VAR_18);
  if (!VAR_20) {
   FUNC_2(FUNC_6(VAR_18), "DMA sg-req not available\n");
   FUNC_8(VAR_18, VAR_19);
   return ((void*)0);
  }

  VAR_22 |= FUNC_3(VAR_18, VAR_28, VAR_29, VAR_25);
  VAR_20->ch_regs.apb_ptr = VAR_23;
  VAR_20->ch_regs.ahb_ptr = VAR_27;
  VAR_20->ch_regs.csr = VAR_21;
  FUNC_9(VAR_18, &VAR_20->ch_regs, VAR_25);
  VAR_20->ch_regs.apb_seq = VAR_24;
  VAR_20->ch_regs.ahb_seq = VAR_22;
  VAR_20->configured = 0;
  VAR_20->last_sg = 0;
  VAR_20->dma_desc = VAR_19;
  VAR_20->req_len = VAR_25;

  FUNC_5(&VAR_20->node, &VAR_19->tx_list);
  VAR_26 -= VAR_25;
  VAR_27 += VAR_25;
 }
 VAR_20->last_sg = 1;
 if (VAR_17 & VAR_0)
  VAR_19->txd.flags = VAR_0;





 if (!VAR_18->isr_handler) {
  VAR_18->isr_handler = VAR_11;
  VAR_18->cyclic = 1;
 } else {
  if (!VAR_18->cyclic) {
   FUNC_2(FUNC_6(VAR_18), "DMA configuration conflict\n");
   FUNC_8(VAR_18, VAR_19);
   return ((void*)0);
  }
 }

 return &VAR_19->txd;
}
