
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct opa_vnic_grp_stats {int untagged; int vlan; int unicast; int mcastbcast; } ;
struct opa_vnic_stats {TYPE_1__ netstats; struct opa_vnic_grp_stats tx_grp; } ;
struct hfi1_vnic_vport_info {struct opa_vnic_stats* stats; } ;
struct ethhdr {int h_dest; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct opa_vnic_grp_stats*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct hfi1_vnic_vport_info *VAR_1,
      u8 VAR_2, struct sk_buff *VAR_3, int VAR_4)
{
 struct ethhdr *VAR_5 = (struct ethhdr *)FUNC_2(VAR_3);
 struct opa_vnic_stats *VAR_6 = &VAR_1->stats[VAR_2];
 struct opa_vnic_grp_stats *VAR_7 = &VAR_6->tx_grp;
 u16 VAR_8;

 VAR_6->netstats.tx_packets++;
 VAR_6->netstats.tx_bytes += VAR_3->len + VAR_0;

 FUNC_4(VAR_7, VAR_3->len);


 if (FUNC_3(VAR_4))
  return;

 if (FUNC_1(VAR_5->h_dest))
  VAR_7->mcastbcast++;
 else
  VAR_7->unicast++;

 if (!FUNC_0(VAR_3, &VAR_8))
  VAR_7->vlan++;
 else
  VAR_7->untagged++;
}
