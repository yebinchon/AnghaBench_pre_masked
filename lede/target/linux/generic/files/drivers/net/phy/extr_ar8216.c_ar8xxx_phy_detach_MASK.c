
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {struct net_device* attached_dev; } ;
struct net_device {int * eth_mangle_tx; int * eth_mangle_rx; int priv_flags; int * phy_ptr; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct phy_device *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->attached_dev;

 if (!VAR_2)
  return;

 VAR_2->phy_ptr = ((void*)0);
 VAR_2->priv_flags &= ~VAR_0;
 VAR_2->eth_mangle_rx = ((void*)0);
 VAR_2->eth_mangle_tx = ((void*)0);
}
