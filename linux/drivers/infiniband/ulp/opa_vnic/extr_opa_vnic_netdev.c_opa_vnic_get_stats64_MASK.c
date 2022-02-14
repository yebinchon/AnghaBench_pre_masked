
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vstats ;
struct rtnl_link_stats64 {int dummy; } ;
struct opa_vnic_stats {int netstats; } ;
struct opa_vnic_adapter {int stats_lock; TYPE_1__* rn_ops; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* ndo_get_stats64 ) (struct net_device*,int *) ;} ;


 int FUNC_0 (struct rtnl_link_stats64*,int *,int) ;
 int FUNC_1 (struct opa_vnic_stats*,int ,int) ;
 struct opa_vnic_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*,int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0,
     struct rtnl_link_stats64 *VAR_1)
{
 struct opa_vnic_adapter *VAR_2 = FUNC_2(VAR_0);
 struct opa_vnic_stats VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 FUNC_3(&VAR_2->stats_lock);
 VAR_2->rn_ops->ndo_get_stats64(VAR_0, &VAR_3.netstats);
 FUNC_4(&VAR_2->stats_lock);
 FUNC_0(VAR_1, &VAR_3.netstats, sizeof(*VAR_1));
}
