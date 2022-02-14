
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hfi1_vnic_vport_info {int lock; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hfi1_vnic_vport_info*) ;
 int FUNC_2 (int *) ;
 struct hfi1_vnic_vport_info* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct hfi1_vnic_vport_info *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1);
 FUNC_2(&VAR_1->lock);
 FUNC_0(VAR_0);
}
