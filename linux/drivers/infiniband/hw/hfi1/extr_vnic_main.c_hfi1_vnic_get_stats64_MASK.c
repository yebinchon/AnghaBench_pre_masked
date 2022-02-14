
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {int dummy; } ;
struct opa_vnic_stats {int dummy; } ;
struct net_device {int dummy; } ;
struct hfi1_vnic_vport_info {int dummy; } ;


 int FUNC_0 (struct hfi1_vnic_vport_info*,struct opa_vnic_stats*) ;
 struct hfi1_vnic_vport_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
      struct rtnl_link_stats64 *VAR_1)
{
 struct opa_vnic_stats *VAR_2 = (struct opa_vnic_stats *)VAR_1;
 struct hfi1_vnic_vport_info *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, VAR_2);
}
