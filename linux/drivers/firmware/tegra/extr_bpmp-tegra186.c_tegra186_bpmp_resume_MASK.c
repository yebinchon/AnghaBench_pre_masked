
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int count; } ;
struct tegra_bpmp {int * threaded_channels; TYPE_1__ threaded; int * rx_channel; int * tx_channel; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct tegra_bpmp *VAR_0)
{
 unsigned int VAR_1;


 FUNC_0(VAR_0->tx_channel);
 FUNC_0(VAR_0->rx_channel);

 for (VAR_1 = 0; VAR_1 < VAR_0->threaded.count; VAR_1++)
  FUNC_0(&VAR_0->threaded_channels[VAR_1]);

 return 0;
}
