
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct scatterlist {int dummy; } ;
struct pdc_state {scalar_t__ nrxpost; size_t rxout; size_t rx_msg_start; int nrxd; int pdc_resp_hdr_len; struct pdc_rx_ctx* rx_ctx; int txout; int tx_msg_start; int rx_buf_pool; int rxnobuf; int rxin; } ;
struct pdc_rx_ctx {int rxin_numd; int resp_hdr_daddr; void* resp_hdr; struct scatterlist* dst_sg; void* rxp_ctx; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,size_t,scalar_t__) ;
 int VAR_5 ;
 void* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct pdc_state*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct pdc_state *VAR_6, struct scatterlist *VAR_7,
       void *VAR_8)
{
 u32 VAR_9 = 0;
 u32 VAR_10;
 u32 VAR_11 = 1;
 dma_addr_t VAR_12;
 void *VAR_13;
 struct pdc_rx_ctx *VAR_14;

 VAR_10 = VAR_6->nrxpost - FUNC_0(VAR_6->rxin, VAR_6->rxout,
           VAR_6->nrxpost);
 if (FUNC_3(VAR_11 > VAR_10)) {
  VAR_6->rxnobuf++;
  return -VAR_3;
 }


 VAR_13 = FUNC_1(VAR_6->rx_buf_pool, VAR_4, &VAR_12);
 if (FUNC_3(!VAR_13))
  return -VAR_2;






 VAR_6->rx_msg_start = VAR_6->rxout;
 VAR_6->tx_msg_start = VAR_6->txout;


 VAR_9 = VAR_1;
 VAR_6->rx_ctx[VAR_6->rx_msg_start].rxin_numd = 1;

 if (FUNC_3(VAR_6->rxout == (VAR_6->nrxd - 1)))
  VAR_9 |= VAR_0;

 VAR_14 = &VAR_6->rx_ctx[VAR_6->rxout];
 VAR_14->rxp_ctx = VAR_8;
 VAR_14->dst_sg = VAR_7;
 VAR_14->resp_hdr = VAR_13;
 VAR_14->resp_hdr_daddr = VAR_12;
 FUNC_2(VAR_6, VAR_12, VAR_6->pdc_resp_hdr_len, VAR_9);
 return VAR_5;
}
