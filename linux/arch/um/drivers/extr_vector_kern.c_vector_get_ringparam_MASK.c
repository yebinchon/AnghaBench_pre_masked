
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vector_private {TYPE_1__* tx_queue; TYPE_2__* rx_queue; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; int tx_max_pending; int rx_max_pending; } ;
struct TYPE_4__ {int max_depth; } ;
struct TYPE_3__ {int max_depth; } ;


 struct vector_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
    struct ethtool_ringparam *VAR_1)
{
 struct vector_private *VAR_2 = FUNC_0(VAR_0);

 VAR_1->rx_max_pending = VAR_2->rx_queue->max_depth;
 VAR_1->tx_max_pending = VAR_2->tx_queue->max_depth;
 VAR_1->rx_pending = VAR_2->rx_queue->max_depth;
 VAR_1->tx_pending = VAR_2->tx_queue->max_depth;
}
