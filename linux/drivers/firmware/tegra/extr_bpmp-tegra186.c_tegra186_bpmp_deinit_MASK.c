
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int count; } ;
struct tegra_bpmp {int * tx_channel; int * rx_channel; int * threaded_channels; TYPE_1__ threaded; struct tegra186_bpmp* priv; } ;
struct TYPE_7__ {scalar_t__ virt; int pool; } ;
struct TYPE_6__ {scalar_t__ virt; int pool; } ;
struct TYPE_8__ {int channel; } ;
struct tegra186_bpmp {TYPE_3__ tx; TYPE_2__ rx; TYPE_4__ mbox; } ;


 int FUNC_0 (int ,unsigned long,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct tegra_bpmp *VAR_0)
{
 struct tegra186_bpmp *VAR_1 = VAR_0->priv;
 unsigned int VAR_2;

 FUNC_1(VAR_1->mbox.channel);

 for (VAR_2 = 0; VAR_2 < VAR_0->threaded.count; VAR_2++)
  FUNC_2(&VAR_0->threaded_channels[VAR_2]);

 FUNC_2(VAR_0->rx_channel);
 FUNC_2(VAR_0->tx_channel);

 FUNC_0(VAR_1->rx.pool, (unsigned long)VAR_1->rx.virt, 4096);
 FUNC_0(VAR_1->tx.pool, (unsigned long)VAR_1->tx.virt, 4096);
}
