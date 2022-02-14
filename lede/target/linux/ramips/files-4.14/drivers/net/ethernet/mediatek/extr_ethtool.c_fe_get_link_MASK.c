
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct fe_priv {scalar_t__ phy_flags; TYPE_1__* phy_dev; } ;
struct TYPE_2__ {int link; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct fe_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_3(struct net_device *VAR_1)
{
 struct fe_priv *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 if (!VAR_2->phy_dev)
  goto out_get_link;

 if (VAR_2->phy_flags == VAR_0) {
  VAR_3 = FUNC_1(VAR_2->phy_dev);
  if (VAR_3)
   goto out_get_link;
 }

 return VAR_2->phy_dev->link;

out_get_link:
 return FUNC_0(VAR_1);
}
