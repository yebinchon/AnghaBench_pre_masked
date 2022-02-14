
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ipoib_dev_priv {int * pd; TYPE_1__* rn_ops; int flags; } ;
struct TYPE_2__ {int (* ndo_uninit ) (struct net_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ipoib_dev_priv*,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 struct ipoib_dev_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

void FUNC_9(struct net_device *VAR_1)
{
 struct ipoib_dev_priv *VAR_2 = FUNC_6(VAR_1);

 FUNC_2(VAR_2, "cleaning up ib_dev\n");




 FUNC_3(VAR_1);

 FUNC_5(VAR_1);
 FUNC_4(VAR_1);







 FUNC_7(VAR_1);

 FUNC_0(VAR_0, &VAR_2->flags);

 VAR_2->rn_ops->ndo_uninit(VAR_1);

 if (VAR_2->pd) {
  FUNC_1(VAR_2->pd);
  VAR_2->pd = ((void*)0);
 }
}
