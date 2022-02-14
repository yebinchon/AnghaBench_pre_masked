
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int flags; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ipoib_dev_priv* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static netdev_features_t FUNC_2(struct net_device *VAR_3, netdev_features_t VAR_4)
{
 struct ipoib_dev_priv *VAR_5 = FUNC_0(VAR_3);

 if (FUNC_1(VAR_0, &VAR_5->flags))
  VAR_4 &= ~(VAR_1 | VAR_2);

 return VAR_4;
}
