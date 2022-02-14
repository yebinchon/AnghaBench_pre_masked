
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtnl_link_stats64 {int dummy; } ;
struct net_device {int stats; } ;
struct ipoib_dev_priv {TYPE_1__* rn_ops; } ;
struct TYPE_2__ {int (* ndo_get_stats64 ) (struct net_device*,struct rtnl_link_stats64*) ;} ;


 struct ipoib_dev_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct rtnl_link_stats64*,int *) ;
 int FUNC_2 (struct net_device*,struct rtnl_link_stats64*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
       struct rtnl_link_stats64 *VAR_1)
{
 struct ipoib_dev_priv *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->rn_ops->ndo_get_stats64)
  VAR_2->rn_ops->ndo_get_stats64(VAR_0, VAR_1);
 else
  FUNC_1(VAR_1, &VAR_0->stats);
}
