
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int port; int ca; } ;


 int FUNC_0 (int ,int,int ,int) ;
 struct ipoib_dev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, int VAR_1, int VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3->ca, VAR_1, VAR_3->port, VAR_2);
}
