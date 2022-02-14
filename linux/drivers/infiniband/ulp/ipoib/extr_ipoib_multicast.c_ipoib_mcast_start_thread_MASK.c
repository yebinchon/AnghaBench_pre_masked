
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int lock; } ;


 int FUNC_0 (struct ipoib_dev_priv*,int *,int ) ;
 int FUNC_1 (struct ipoib_dev_priv*,char*) ;
 struct ipoib_dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct net_device *VAR_0)
{
 struct ipoib_dev_priv *VAR_1 = FUNC_2(VAR_0);
 unsigned long VAR_2;

 FUNC_1(VAR_1, "starting multicast thread\n");

 FUNC_3(&VAR_1->lock, VAR_2);
 FUNC_0(VAR_1, ((void*)0), 0);
 FUNC_4(&VAR_1->lock, VAR_2);
}
