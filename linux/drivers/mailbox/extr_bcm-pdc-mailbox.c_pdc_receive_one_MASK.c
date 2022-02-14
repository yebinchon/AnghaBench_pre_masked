
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct mbox_controller {struct mbox_chan* chans; } ;
struct pdc_state {size_t rxin; scalar_t__ nrxpost; scalar_t__* txin_numd; size_t txin; scalar_t__ ntxpost; scalar_t__ pdc_resp_hdr_len; int pdc_replies; int rx_buf_pool; int rx_oflow; int last_rx_curr; int rxout; int txout; int pdc_idx; struct pdc_rx_ctx* rx_ctx; int * src_sg; struct mbox_controller mbc; TYPE_1__* pdev; } ;
struct pdc_rx_ctx {scalar_t__ rxin_numd; int dst_sg; int resp_hdr_daddr; int * resp_hdr; int * rxp_ctx; } ;
struct mbox_chan {int dummy; } ;
struct device {int dummy; } ;
struct brcm_message {int * ctx; int type; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (size_t,int ,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*,scalar_t__,...) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (struct device*,int ,int ,int ) ;
 int FUNC_7 (struct mbox_chan*,struct brcm_message*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(struct pdc_state *VAR_9)
{
 struct device *VAR_10 = &VAR_9->pdev->dev;
 struct mbox_controller *VAR_11;
 struct mbox_chan *VAR_12;
 struct brcm_message VAR_13;
 u32 VAR_14, VAR_15;
 u32 VAR_16;
 u8 *VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 dma_addr_t VAR_20;
 struct pdc_rx_ctx *VAR_21;

 VAR_11 = &VAR_9->mbc;
 VAR_12 = &VAR_11->chans[0];
 VAR_13.type = VAR_0;






 VAR_18 = FUNC_0(VAR_9->rxin, VAR_9->last_rx_curr, VAR_9->nrxpost);
 if ((VAR_18 == 0) ||
     (VAR_18 < VAR_9->rx_ctx[VAR_9->rxin].rxin_numd))

  return -VAR_3;

 VAR_16 = VAR_9->txin_numd[VAR_9->txin];
 FUNC_1(VAR_16 == 0);

 FUNC_6(VAR_10, VAR_9->src_sg[VAR_9->txin],
       FUNC_8(VAR_9->src_sg[VAR_9->txin]), VAR_2);

 VAR_9->txin = (VAR_9->txin + VAR_16) & VAR_9->ntxpost;

 FUNC_2(VAR_10, "PDC %u reclaimed %d tx descriptors",
  VAR_9->pdc_idx, VAR_16);

 VAR_19 = VAR_9->rxin;
 VAR_21 = &VAR_9->rx_ctx[VAR_19];
 VAR_16 = VAR_21->rxin_numd;

 VAR_13.ctx = VAR_21->rxp_ctx;
 VAR_21->rxp_ctx = ((void*)0);
 VAR_17 = VAR_21->resp_hdr;
 VAR_20 = VAR_21->resp_hdr_daddr;
 FUNC_6(VAR_10, VAR_21->dst_sg, FUNC_8(VAR_21->dst_sg),
       VAR_1);

 VAR_9->rxin = (VAR_9->rxin + VAR_16) & VAR_9->nrxpost;

 FUNC_2(VAR_10, "PDC %u reclaimed %d rx descriptors",
  VAR_9->pdc_idx, VAR_16);

 FUNC_2(VAR_10,
  "PDC %u txin %u, txout %u, rxin %u, rxout %u, last_rx_curr %u\n",
  VAR_9->pdc_idx, VAR_9->txin, VAR_9->txout, VAR_9->rxin,
  VAR_9->rxout, VAR_9->last_rx_curr);

 if (VAR_9->pdc_resp_hdr_len == VAR_5) {



  VAR_15 = *((u32 *)VAR_17);
  VAR_14 = VAR_15 & VAR_7;
  FUNC_2(VAR_10,
   "SPU response length %u bytes", VAR_14);
  if (FUNC_9(((VAR_15 & VAR_8) || (!VAR_14)))) {
   if (VAR_15 & VAR_8) {
    FUNC_3(VAR_10,
          "crypto receive overflow");
    VAR_9->rx_oflow++;
   } else {
    FUNC_4(VAR_10, "crypto rx len = 0");
   }
   return -VAR_4;
  }
 }

 FUNC_5(VAR_9->rx_buf_pool, VAR_17, VAR_20);

 FUNC_7(VAR_12, &VAR_13);

 VAR_9->pdc_replies++;
 return VAR_6;
}
