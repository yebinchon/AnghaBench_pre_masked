
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {struct net_device* attached_dev; } ;
struct net_device {int priv_flags; int features; int * eth_mangle_tx; int * eth_mangle_rx; int * phy_ptr; } ;
struct mvswitch_priv {int orig_features; } ;


 int VAR_0 ;
 struct mvswitch_priv* FUNC_0 (struct phy_device*) ;

__attribute__((used)) static void
FUNC_1(struct phy_device *VAR_1)
{
 struct mvswitch_priv *VAR_2 = FUNC_0(VAR_1);
 struct net_device *VAR_3 = VAR_1->attached_dev;

 if (!VAR_3)
  return;

 VAR_3->phy_ptr = ((void*)0);
 VAR_3->eth_mangle_rx = ((void*)0);
 VAR_3->eth_mangle_tx = ((void*)0);
 VAR_3->features = VAR_2->orig_features;
 VAR_3->priv_flags &= ~VAR_0;
}
