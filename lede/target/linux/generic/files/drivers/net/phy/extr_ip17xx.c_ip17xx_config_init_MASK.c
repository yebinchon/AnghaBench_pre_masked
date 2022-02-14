
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {struct net_device* attached_dev; struct ip17xx_state* priv; } ;
struct net_device {int dummy; } ;
struct ip17xx_state {int registered; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_0)
{
 struct ip17xx_state *VAR_1 = VAR_0->priv;
 struct net_device *VAR_2 = VAR_0->attached_dev;
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_1->dev, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_1->registered = 1;
 FUNC_0(&VAR_1->dev);
 return 0;
}
