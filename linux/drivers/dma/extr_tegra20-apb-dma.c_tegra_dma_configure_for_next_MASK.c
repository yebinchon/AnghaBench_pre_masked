
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int apb_ptr; int ahb_ptr; int wcount; int csr; } ;
struct tegra_dma_sg_req {int configured; scalar_t__ words_xferred; TYPE_3__ ch_regs; } ;
struct tegra_dma_channel {TYPE_2__* tdma; } ;
struct TYPE_5__ {TYPE_1__* chip_data; } ;
struct TYPE_4__ {scalar_t__ support_separate_wcount_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct tegra_dma_channel*) ;
 unsigned long FUNC_2 (struct tegra_dma_channel*,int ) ;
 int FUNC_3 (struct tegra_dma_channel*,int ,int) ;
 int FUNC_4 (struct tegra_dma_channel*,int) ;
 int FUNC_5 (struct tegra_dma_channel*) ;

__attribute__((used)) static void FUNC_6(struct tegra_dma_channel *VAR_7,
  struct tegra_dma_sg_req *VAR_8)
{
 unsigned long VAR_9;
 FUNC_4(VAR_7, 0);
 VAR_9 = FUNC_2(VAR_7, VAR_3);





 if (VAR_9 & VAR_6) {
  FUNC_0(FUNC_1(VAR_7),
   "Skipping new configuration as interrupt is pending\n");
  FUNC_5(VAR_7);
  return;
 }


 FUNC_3(VAR_7, VAR_1, VAR_8->ch_regs.apb_ptr);
 FUNC_3(VAR_7, VAR_0, VAR_8->ch_regs.ahb_ptr);
 if (VAR_7->tdma->chip_data->support_separate_wcount_reg)
  FUNC_3(VAR_7, VAR_4,
      VAR_8->ch_regs.wcount);
 FUNC_3(VAR_7, VAR_2,
    VAR_8->ch_regs.csr | VAR_5);
 VAR_8->configured = 1;
 VAR_8->words_xferred = 0;

 FUNC_5(VAR_7);
}
