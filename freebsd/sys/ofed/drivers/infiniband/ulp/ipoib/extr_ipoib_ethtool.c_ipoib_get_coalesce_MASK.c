
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_coalesced_frames; int coalesce_usecs; } ;
struct ipoib_dev_priv {TYPE_1__ ethtool; } ;
struct ifnet {struct ipoib_dev_priv* if_softc; } ;
struct ethtool_coalesce {int tx_max_coalesced_frames; int rx_max_coalesced_frames; int tx_coalesce_usecs; int rx_coalesce_usecs; } ;



__attribute__((used)) static int FUNC_0(struct ifnet *VAR_0,
         struct ethtool_coalesce *VAR_1)
{
 struct ipoib_dev_priv *VAR_2 = VAR_0->if_softc;

 VAR_1->rx_coalesce_usecs = VAR_2->ethtool.coalesce_usecs;
 VAR_1->tx_coalesce_usecs = VAR_2->ethtool.coalesce_usecs;
 VAR_1->rx_max_coalesced_frames = VAR_2->ethtool.max_coalesced_frames;
 VAR_1->tx_max_coalesced_frames = VAR_2->ethtool.max_coalesced_frames;

 return 0;
}
