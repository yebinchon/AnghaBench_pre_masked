
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int tx_ring_size; } ;
struct TYPE_3__ {int rx_ring_size; } ;
struct fe_priv {TYPE_2__ tx_ring; TYPE_1__ rx_ring; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; void* tx_max_pending; void* rx_max_pending; } ;


 void* VAR_0 ;
 struct fe_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1,
        struct ethtool_ringparam *VAR_2)
{
 struct fe_priv *VAR_3 = FUNC_0(VAR_1);

 VAR_2->rx_max_pending = VAR_0;
 VAR_2->tx_max_pending = VAR_0;
 VAR_2->rx_pending = VAR_3->rx_ring.rx_ring_size;
 VAR_2->tx_pending = VAR_3->tx_ring.tx_ring_size;
}
