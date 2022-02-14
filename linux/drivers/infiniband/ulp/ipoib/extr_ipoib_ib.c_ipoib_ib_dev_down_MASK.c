
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ipoib_dev_priv*,char*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 struct ipoib_dev_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

void FUNC_7(struct net_device *VAR_1)
{
 struct ipoib_dev_priv *VAR_2 = FUNC_5(VAR_1);

 FUNC_1(VAR_2, "downing ib_dev\n");

 FUNC_0(VAR_0, &VAR_2->flags);
 FUNC_6(VAR_1);

 FUNC_4(VAR_1);
 FUNC_3(VAR_1);

 FUNC_2(VAR_1);
}
