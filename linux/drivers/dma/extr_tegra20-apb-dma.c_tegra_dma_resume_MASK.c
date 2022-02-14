
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_dma_channel {struct tegra_dma* tdma; } ;
struct tegra_dma {TYPE_1__* chip_data; } ;
struct TYPE_2__ {scalar_t__ support_channel_pause; } ;


 int VAR_0 ;
 int FUNC_0 (struct tegra_dma_channel*,int ,int ) ;
 int FUNC_1 (struct tegra_dma_channel*) ;

__attribute__((used)) static void FUNC_2(struct tegra_dma_channel *VAR_1)
{
 struct tegra_dma *VAR_2 = VAR_1->tdma;

 if (VAR_2->chip_data->support_channel_pause) {
  FUNC_0(VAR_1, VAR_0, 0);
 } else {
  FUNC_1(VAR_1);
 }
}
