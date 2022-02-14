
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_6__ {TYPE_1__** netdevs; int * phy_port; } ;
struct TYPE_7__ {size_t num_ports; int max_mtu; } ;
struct hns_roce_dev {TYPE_2__ iboe; TYPE_3__ caps; TYPE_4__* hw; } ;
struct TYPE_8__ {int (* set_mtu ) (struct hns_roce_dev*,int ,int ) ;} ;
struct TYPE_5__ {int dev_addr; } ;


 int FUNC_0 (struct hns_roce_dev*,size_t,int ) ;
 int FUNC_1 (struct hns_roce_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hns_roce_dev *VAR_0)
{
 int VAR_1;
 u8 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->caps.num_ports; VAR_2++) {
  if (VAR_0->hw->set_mtu)
   VAR_0->hw->set_mtu(VAR_0, VAR_0->iboe.phy_port[VAR_2],
         VAR_0->caps.max_mtu);
  VAR_1 = FUNC_0(VAR_0, VAR_2,
           VAR_0->iboe.netdevs[VAR_2]->dev_addr);
  if (VAR_1)
   return VAR_1;
 }

 return 0;
}
