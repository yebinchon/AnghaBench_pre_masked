
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int mcast_task; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ipoib_dev_priv*,char*) ;
 struct ipoib_dev_priv* FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_0)
{
 struct ipoib_dev_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1, "stopping multicast thread\n");

 FUNC_0(&VAR_1->mcast_task);

 return 0;
}
