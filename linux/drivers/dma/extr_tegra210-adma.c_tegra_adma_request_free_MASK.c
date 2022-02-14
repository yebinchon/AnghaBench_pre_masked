
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chan; } ;
struct tegra_adma_chan {int sreq_reserved; int sreq_dir; TYPE_1__ vc; int sreq_index; struct tegra_adma* tdma; } ;
struct tegra_adma {int dev; int rx_requests_reserved; int tx_requests_reserved; } ;




 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct tegra_adma_chan *VAR_0)
{
 struct tegra_adma *VAR_1 = VAR_0->tdma;

 if (!VAR_0->sreq_reserved)
  return;

 switch (VAR_0->sreq_dir) {
 case 128:
  FUNC_0(VAR_0->sreq_index, &VAR_1->tx_requests_reserved);
  break;

 case 129:
  FUNC_0(VAR_0->sreq_index, &VAR_1->rx_requests_reserved);
  break;

 default:
  FUNC_1(VAR_1->dev, "channel %s has invalid transfer type\n",
    FUNC_2(&VAR_0->vc.chan));
  return;
 }

 VAR_0->sreq_reserved = 0;
}
