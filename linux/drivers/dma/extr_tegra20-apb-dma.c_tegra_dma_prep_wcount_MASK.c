
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tegra_dma_channel_regs {int wcount; int csr; } ;
struct tegra_dma_channel {TYPE_2__* tdma; } ;
struct TYPE_4__ {TYPE_1__* chip_data; } ;
struct TYPE_3__ {scalar_t__ support_separate_wcount_reg; } ;



__attribute__((used)) static void FUNC_0(struct tegra_dma_channel *VAR_0,
 struct tegra_dma_channel_regs *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = (VAR_2 - 4) & 0xFFFC;

 if (VAR_0->tdma->chip_data->support_separate_wcount_reg)
  VAR_1->wcount = VAR_3;
 else
  VAR_1->csr |= VAR_3;
}
