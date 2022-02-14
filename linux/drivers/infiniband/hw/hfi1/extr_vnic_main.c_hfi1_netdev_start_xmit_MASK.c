
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
typedef int u32 ;
struct sk_buff {size_t queue_mapping; int len; scalar_t__ data; } ;
struct opa_vnic_skb_mdata {int flags; int vl; } ;
struct net_device {int dummy; } ;
struct hfi1_vnic_vport_info {TYPE_2__* stats; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {int (* process_vnic_dma_send ) (struct hfi1_devdata*,size_t,struct hfi1_vnic_vport_info*,struct sk_buff*,int ,size_t) ;} ;
typedef int netdev_tx_t ;
struct TYPE_3__ {int tx_carrier_errors; int tx_fifo_errors; } ;
struct TYPE_4__ {TYPE_1__ netstats; int tx_dlid_zero; int tx_drop_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct hfi1_vnic_vport_info*,size_t) ;
 int FUNC_3 (struct hfi1_vnic_vport_info*,size_t,struct sk_buff*,int) ;
 int FUNC_4 (struct net_device*) ;
 struct hfi1_vnic_vport_info* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct hfi1_devdata*,size_t,struct hfi1_vnic_vport_info*,struct sk_buff*,int ,size_t) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (char*,size_t,size_t,...) ;

__attribute__((used)) static netdev_tx_t FUNC_11(struct sk_buff *VAR_8,
       struct net_device *VAR_9)
{
 struct hfi1_vnic_vport_info *VAR_10 = FUNC_5(VAR_9);
 u8 VAR_11, VAR_12 = VAR_8->queue_mapping;
 struct hfi1_devdata *VAR_13 = VAR_10->dd;
 struct opa_vnic_skb_mdata *VAR_14;
 u32 VAR_15, VAR_16;
 int VAR_17 = -VAR_1;
 u64 VAR_18;

 FUNC_10("xmit: queue %d skb len %d\n", VAR_12, VAR_8->len);
 if (FUNC_9(!FUNC_4(VAR_9))) {
  VAR_10->stats[VAR_12].tx_drop_state++;
  goto tx_finish;
 }


 VAR_14 = (struct opa_vnic_skb_mdata *)VAR_8->data;
 FUNC_7(VAR_8, sizeof(*VAR_14));
 if (FUNC_9(VAR_14->flags & VAR_7)) {
  VAR_10->stats[VAR_12].tx_dlid_zero++;
  goto tx_finish;
 }


 VAR_11 = -(VAR_8->len + VAR_6) & 0x7;
 VAR_11 += VAR_6;






 VAR_15 = (VAR_8->len + VAR_11) >> 2;
 VAR_16 = VAR_15 + 2;

 VAR_18 = FUNC_0(VAR_14->vl, VAR_16);

 FUNC_6(VAR_8);
 FUNC_10("pbc 0x%016llX len %d pad_len %d\n", VAR_18, VAR_8->len, VAR_11);
 VAR_17 = VAR_13->process_vnic_dma_send(VAR_13, VAR_12, VAR_10, VAR_8, VAR_18, VAR_11);
 if (FUNC_9(VAR_17)) {
  if (VAR_17 == -VAR_2)
   VAR_10->stats[VAR_12].netstats.tx_fifo_errors++;
  else if (VAR_17 != -VAR_0)
   VAR_10->stats[VAR_12].netstats.tx_carrier_errors++;
 }

 FUNC_7(VAR_8, VAR_5);

 if (FUNC_9(VAR_17 == -VAR_0)) {
  FUNC_2(VAR_10, VAR_12);
  FUNC_1(VAR_8);
  return VAR_3;
 }

tx_finish:

 FUNC_3(VAR_10, VAR_12, VAR_8, VAR_17);
 FUNC_1(VAR_8);
 return VAR_4;
}
