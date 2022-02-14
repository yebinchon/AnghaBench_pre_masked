
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_dma_channel {struct tegra_dma* tdma; } ;
struct tegra_dma {TYPE_1__* chip_data; } ;
struct TYPE_2__ {scalar_t__ support_channel_pause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tegra_dma_channel*,int ,int ) ;
 int FUNC_1 (struct tegra_dma_channel*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct tegra_dma_channel *VAR_3,
 bool VAR_4)
{
 struct tegra_dma *VAR_5 = VAR_3->tdma;

 if (VAR_5->chip_data->support_channel_pause) {
  FUNC_0(VAR_3, VAR_1,
    VAR_2);
  if (VAR_4)
   FUNC_2(VAR_0);
 } else {
  FUNC_1(VAR_3, VAR_4);
 }
}
