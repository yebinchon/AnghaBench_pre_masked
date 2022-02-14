
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct sk_buff {size_t queue_mapping; int len; } ;
struct TYPE_4__ {void* desc; scalar_t__ stat; } ;
struct sge_eth_txq {int vlan_ins; TYPE_2__ q; } ;
struct port_info {size_t first_qset; int tx_chan; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct ipsec_sa_entry {scalar_t__ esn; } ;
struct cpl_tx_pkt_core {int ctrl1; void* len; void* pack; int ctrl0; } ;
struct TYPE_3__ {struct sge_eth_txq* ethtxq; } ;
struct adapter {int pf; TYPE_1__ sge; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 void* FUNC_4 (struct sk_buff*,struct net_device*,void*,struct ipsec_sa_entry*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (size_t) ;
 void* FUNC_7 (int ) ;
 struct port_info* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;

inline void *FUNC_11(struct sk_buff *VAR_4,
         struct net_device *VAR_5,
         void *VAR_6,
         struct ipsec_sa_entry *VAR_7)
{
 struct cpl_tx_pkt_core *VAR_8;
 struct sge_eth_txq *VAR_9;
 struct adapter *VAR_10;
 struct port_info *VAR_11;
 u32 VAR_12, VAR_13;
 u64 VAR_14 = 0;
 int VAR_15;

 VAR_11 = FUNC_8(VAR_5);
 VAR_10 = VAR_11->adapter;
 VAR_13 = VAR_4->queue_mapping;
 VAR_9 = &VAR_10->sge.ethtxq[VAR_13 + VAR_11->first_qset];

 VAR_15 = (void *)VAR_9->q.stat - VAR_6;
 if (!VAR_15)
  VAR_6 = VAR_9->q.desc;

 VAR_8 = (struct cpl_tx_pkt_core *)VAR_6;

 VAR_14 = VAR_2 | VAR_1;
 VAR_12 = FUNC_1(VAR_0) | FUNC_0(VAR_11->tx_chan) |
          FUNC_2(VAR_10->pf);
 if (FUNC_10(VAR_4)) {
  VAR_9->vlan_ins++;
  VAR_14 |= VAR_3 | FUNC_3(FUNC_9(VAR_4));
 }

 VAR_8->ctrl0 = FUNC_6(VAR_12);
 VAR_8->pack = FUNC_7(0);
 VAR_8->len = FUNC_7(VAR_4->len);
 VAR_8->ctrl1 = FUNC_5(VAR_14);

 VAR_6 += sizeof(struct cpl_tx_pkt_core);

 if (VAR_7->esn)
  VAR_6 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);
 return VAR_6;
}
