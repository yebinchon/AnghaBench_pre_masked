
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ipoib_dev_priv {int flags; TYPE_1__* rn_ops; } ;
struct TYPE_2__ {int (* ndo_stop ) (struct net_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct net_device*) ;
 struct ipoib_dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

int FUNC_4(struct net_device *VAR_1)
{
 struct ipoib_dev_priv *VAR_2 = FUNC_2(VAR_1);

 VAR_2->rn_ops->ndo_stop(VAR_1);

 FUNC_0(VAR_0, &VAR_2->flags);
 FUNC_1(VAR_1);

 return 0;
}
