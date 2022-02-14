
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
struct vnic_txreq {size_t plen; int txreq; int pad; struct sk_buff* skb; struct hfi1_vnic_sdma* sdma; } ;
struct sk_buff {int dummy; } ;
struct sdma_engine {int dummy; } ;
struct hfi1_vnic_vport_info {struct hfi1_vnic_sdma* sdma; } ;
struct hfi1_vnic_sdma {int pkts_sent; int wait; int state; struct sdma_engine* sde; } ;
struct TYPE_2__ {int txreq_cache; } ;
struct hfi1_devdata {TYPE_1__ vnic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sdma_engine*,struct vnic_txreq*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int *) ;
 struct vnic_txreq* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,struct vnic_txreq*) ;
 int FUNC_8 (struct sdma_engine*) ;
 int FUNC_9 (struct sdma_engine*,int ,int *,int) ;
 int FUNC_10 (struct hfi1_devdata*,int *) ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(struct hfi1_devdata *VAR_5, u8 VAR_6,
         struct hfi1_vnic_vport_info *VAR_7,
         struct sk_buff *VAR_8, u64 VAR_9, u8 VAR_10)
{
 struct hfi1_vnic_sdma *VAR_11 = &VAR_7->sdma[VAR_6];
 struct sdma_engine *VAR_12 = VAR_11->sde;
 struct vnic_txreq *VAR_13;
 int VAR_14 = -VAR_1;

 if (FUNC_11(FUNC_0(VAR_11->state) != VAR_4))
  goto tx_err;

 if (FUNC_11(!VAR_12 || !FUNC_8(VAR_12)))
  goto tx_err;

 VAR_13 = FUNC_6(VAR_5->vnic.txreq_cache, VAR_3);
 if (FUNC_11(!VAR_13)) {
  VAR_14 = -VAR_2;
  goto tx_err;
 }

 VAR_13->sdma = VAR_11;
 VAR_13->skb = VAR_8;
 FUNC_3(VAR_13->pad, VAR_10);
 VAR_13->plen = VAR_10;
 VAR_14 = FUNC_1(VAR_12, VAR_13, VAR_9);
 if (FUNC_11(VAR_14))
  goto free_desc;

 VAR_14 = FUNC_9(VAR_12, FUNC_4(&VAR_11->wait),
         &VAR_13->txreq, VAR_11->pkts_sent);

 if (FUNC_11(VAR_14 && FUNC_11(VAR_14 != -VAR_1)))
  goto free_desc;

 if (!VAR_14) {
  VAR_11->pkts_sent = 1;
  FUNC_5(VAR_11->pkts_sent, &VAR_11->wait);
 }
 return VAR_14;

free_desc:
 FUNC_10(VAR_5, &VAR_13->txreq);
 FUNC_7(VAR_5->vnic.txreq_cache, VAR_13);
tx_err:
 if (VAR_14 != -VAR_0)
  FUNC_2(VAR_8);
 else
  VAR_11->pkts_sent = 0;
 return VAR_14;
}
