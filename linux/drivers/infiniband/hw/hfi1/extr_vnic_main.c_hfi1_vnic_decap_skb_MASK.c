
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct hfi1_vnic_vport_info {TYPE_1__* stats; TYPE_2__* netdev; } ;
struct hfi1_vnic_rx_queue {size_t idx; struct hfi1_vnic_vport_info* vinfo; } ;
struct TYPE_4__ {int mtu; } ;
struct TYPE_3__ {int rx_runt; int rx_oversize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(struct hfi1_vnic_rx_queue *VAR_4,
          struct sk_buff *VAR_5)
{
 struct hfi1_vnic_vport_info *VAR_6 = VAR_4->vinfo;
 int VAR_7 = VAR_6->netdev->mtu + VAR_3;
 int VAR_8 = -VAR_0;

 FUNC_0(VAR_5, VAR_2);


 if (FUNC_1(VAR_5->len > VAR_7))
  VAR_6->stats[VAR_4->idx].rx_oversize++;
 else if (FUNC_1(VAR_5->len < VAR_1))
  VAR_6->stats[VAR_4->idx].rx_runt++;
 else
  VAR_8 = 0;
 return VAR_8;
}
