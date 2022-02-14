
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_adma_chan_regs {int ctrl; int tc; int fifo_ctrl; int config; void* trg_addr; void* src_addr; } ;
struct tegra_adma_desc {scalar_t__ num_periods; int period_len; struct tegra_adma_chan_regs ch_regs; } ;
struct tegra_adma_chip_data {int ch_fifo_ctrl; scalar_t__ has_outstanding_reqs; int (* adma_get_burst_config ) (unsigned int) ;int ch_req_rx_shift; int ch_req_mask; int ch_req_tx_shift; } ;
struct TYPE_4__ {unsigned int dst_maxburst; unsigned int src_maxburst; } ;
struct tegra_adma_chan {int sreq_index; TYPE_2__ sconfig; TYPE_1__* tdma; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;
typedef void* dma_addr_t ;
struct TYPE_3__ {struct tegra_adma_chip_data* cdata; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_4 (int ,int ,int ) ;
 int VAR_5 ;


 int VAR_6 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (struct tegra_adma_chan*) ;
 int FUNC_9 (struct tegra_adma_chan*,int) ;

__attribute__((used)) static int FUNC_10(struct tegra_adma_chan *VAR_7,
          struct tegra_adma_desc *VAR_8,
          dma_addr_t VAR_9,
          enum dma_transfer_direction VAR_10)
{
 struct tegra_adma_chan_regs *VAR_11 = &VAR_8->ch_regs;
 const struct tegra_adma_chip_data *VAR_12 = VAR_7->tdma->cdata;
 unsigned int VAR_13, VAR_14;

 if (VAR_8->num_periods > VAR_0)
  return -VAR_6;

 switch (VAR_10) {
 case 128:
  VAR_14 = VAR_2;
  VAR_13 = VAR_7->sconfig.dst_maxburst;
  VAR_11->config = FUNC_0(VAR_8->num_periods - 1);
  VAR_11->ctrl = FUNC_4(VAR_7->sreq_index,
            VAR_12->ch_req_mask,
            VAR_12->ch_req_tx_shift);
  VAR_11->src_addr = VAR_9;
  break;

 case 129:
  VAR_14 = VAR_1;
  VAR_13 = VAR_7->sconfig.src_maxburst;
  VAR_11->config = FUNC_1(VAR_8->num_periods - 1);
  VAR_11->ctrl = FUNC_4(VAR_7->sreq_index,
            VAR_12->ch_req_mask,
            VAR_12->ch_req_rx_shift);
  VAR_11->trg_addr = VAR_9;
  break;

 default:
  FUNC_6(FUNC_8(VAR_7), "DMA direction is not supported\n");
  return -VAR_6;
 }

 VAR_11->ctrl |= FUNC_3(VAR_14) |
    VAR_4 |
    VAR_3;
 VAR_11->config |= VAR_12->adma_get_burst_config(VAR_13);
 VAR_11->config |= FUNC_2(1);
 if (VAR_12->has_outstanding_reqs)
  VAR_11->config |= FUNC_5(8);
 VAR_11->fifo_ctrl = VAR_12->ch_fifo_ctrl;
 VAR_11->tc = VAR_8->period_len & VAR_5;

 return FUNC_9(VAR_7, VAR_10);
}
