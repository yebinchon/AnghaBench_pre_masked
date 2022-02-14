
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {TYPE_3__* netdev_ops; } ;
struct ethtool_ringparam {scalar_t__ rx_mini_pending; scalar_t__ rx_jumbo_pending; unsigned int rx_pending; unsigned int tx_pending; } ;
struct TYPE_5__ {void* order; } ;
struct TYPE_4__ {void* order; scalar_t__ desc_split; } ;
struct ag71xx {TYPE_2__ rx_ring; TYPE_1__ tx_ring; } ;
struct TYPE_6__ {int (* ndo_stop ) (struct net_device*) ;int (* ndo_open ) (struct net_device*) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (unsigned int) ;
 struct ag71xx* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4,
     struct ethtool_ringparam *VAR_5)
{
 struct ag71xx *VAR_6 = FUNC_1(VAR_4);
 unsigned VAR_7;
 unsigned VAR_8;
 int VAR_9 = 0;

 if (VAR_5->rx_mini_pending != 0||
     VAR_5->rx_jumbo_pending != 0 ||
     VAR_5->rx_pending == 0 ||
     VAR_5->tx_pending == 0)
  return -VAR_3;

 VAR_7 = VAR_5->tx_pending < VAR_2 ?
    VAR_5->tx_pending : VAR_2;

 VAR_8 = VAR_5->rx_pending < VAR_0 ?
    VAR_5->rx_pending : VAR_0;

 if (FUNC_2(VAR_4)) {
  VAR_9 = VAR_4->netdev_ops->ndo_stop(VAR_4);
  if (VAR_9)
   return VAR_9;
 }

 if (VAR_6->tx_ring.desc_split)
  VAR_7 *= VAR_1;

 VAR_6->tx_ring.order = FUNC_0(VAR_7);
 VAR_6->rx_ring.order = FUNC_0(VAR_8);

 if (FUNC_2(VAR_4))
  VAR_9 = VAR_4->netdev_ops->ndo_open(VAR_4);

 return VAR_9;
}
