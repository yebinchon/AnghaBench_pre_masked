
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef size_t u32 ;
struct TYPE_6__ {scalar_t__ hi; } ;
struct xfrm_offload {TYPE_3__ seq; } ;
struct ulptx_idata {int len; int cmd_more; } ;
struct sk_buff {size_t queue_mapping; int len; } ;
struct TYPE_5__ {void* desc; scalar_t__ stat; } ;
struct sge_eth_txq {TYPE_2__ q; } ;
struct port_info {size_t first_qset; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct ipsec_sa_entry {int dummy; } ;
struct ip_esp_hdr {int seq_no; int spi; } ;
struct chcr_ipsec_aadiv {int iv; int seq_no; int spi; } ;
struct TYPE_4__ {struct sge_eth_txq* ethtxq; } ;
struct adapter {TYPE_1__ sge; } ;
typedef int __be64 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (size_t) ;
 size_t FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,struct ipsec_sa_entry*) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (void*,int ,int) ;
 struct port_info* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct sk_buff*) ;
 int * FUNC_10 (struct sk_buff*) ;
 struct xfrm_offload* FUNC_11 (struct sk_buff*) ;

inline void *FUNC_12(struct sk_buff *VAR_0,
       struct net_device *VAR_1,
       void *VAR_2,
       struct ipsec_sa_entry *VAR_3)
{
 struct chcr_ipsec_aadiv *VAR_4;
 struct ulptx_idata *VAR_5;
 struct ip_esp_hdr *VAR_6;
 struct xfrm_offload *VAR_7;
 struct sge_eth_txq *VAR_8;
 struct adapter *VAR_9;
 struct port_info *VAR_10;
 __be64 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u8 *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_10 = FUNC_8(VAR_1);
 VAR_9 = VAR_10->adapter;
 VAR_12 = VAR_0->queue_mapping;
 VAR_8 = &VAR_9->sge.ethtxq[VAR_12 + VAR_10->first_qset];


 VAR_15 = (void *)VAR_8->q.stat - VAR_2;
 if (!VAR_15)
  VAR_2 = VAR_8->q.desc;

 VAR_16 = FUNC_0(sizeof(struct chcr_ipsec_aadiv), 16) << 4;
 FUNC_7(VAR_2, 0, VAR_16);
 VAR_4 = (struct chcr_ipsec_aadiv *)VAR_2;
 VAR_6 = (struct ip_esp_hdr *)FUNC_10(VAR_0);
 VAR_14 = FUNC_10(VAR_0) + sizeof(struct ip_esp_hdr);
 VAR_7 = FUNC_11(VAR_0);

 VAR_4->spi = (VAR_6->spi);
 VAR_13 = FUNC_4(VAR_6->seq_no);
 VAR_11 = FUNC_3(VAR_13 + ((u64)VAR_7->seq.hi << 32));
 FUNC_6(VAR_4->seq_no, &VAR_11, 8);
 VAR_14 = FUNC_10(VAR_0) + sizeof(struct ip_esp_hdr);
 FUNC_6(VAR_4->iv, VAR_14, 8);

 if (FUNC_5(VAR_0, VAR_3) && !FUNC_9(VAR_0)) {
  VAR_5 = (struct ulptx_idata *)(VAR_2 +
     (FUNC_0(sizeof(struct chcr_ipsec_aadiv),
     sizeof(__be64)) << 3));
  VAR_5->cmd_more = FUNC_1(0);
  VAR_5->len = FUNC_2(VAR_0->len);
 }
 VAR_2 += VAR_16;
 return VAR_2;
}
