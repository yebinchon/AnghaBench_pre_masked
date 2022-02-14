
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hfi1_vnic_vport_info {int lock; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_vnic_vport_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct hfi1_vnic_vport_info* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 struct hfi1_vnic_vport_info *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(&VAR_2->lock);
 if (FUNC_4(VAR_0, &VAR_2->flags))
  FUNC_0(VAR_2);
 FUNC_2(&VAR_2->lock);
 return 0;
}
