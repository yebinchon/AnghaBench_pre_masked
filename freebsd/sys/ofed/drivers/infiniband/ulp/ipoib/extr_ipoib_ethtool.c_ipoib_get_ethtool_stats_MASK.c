
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int aggregated; int flushed; int no_desc; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;
struct TYPE_6__ {TYPE_2__ lro_mgr; } ;
struct ipoib_dev_priv {TYPE_3__ lro; } ;
struct ifnet {struct ipoib_dev_priv* if_softc; } ;
struct ethtool_stats {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct ifnet *VAR_0,
    struct ethtool_stats *VAR_1, uint64_t *VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = VAR_0->if_softc;
 int VAR_4 = 0;


 VAR_2[VAR_4++] = VAR_3->lro.lro_mgr.stats.aggregated;
 VAR_2[VAR_4++] = VAR_3->lro.lro_mgr.stats.flushed;
 if (VAR_3->lro.lro_mgr.stats.flushed)
  VAR_2[VAR_4++] = VAR_3->lro.lro_mgr.stats.aggregated /
    VAR_3->lro.lro_mgr.stats.flushed;
 else
  VAR_2[VAR_4++] = 0;
 VAR_2[VAR_4++] = VAR_3->lro.lro_mgr.stats.no_desc;
}
