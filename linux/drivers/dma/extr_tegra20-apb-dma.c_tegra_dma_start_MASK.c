
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_dma_channel_regs {int csr; int apb_seq; int apb_ptr; int ahb_seq; int ahb_ptr; int wcount; } ;
struct tegra_dma_sg_req {struct tegra_dma_channel_regs ch_regs; } ;
struct tegra_dma_channel {TYPE_2__* tdma; } ;
struct TYPE_4__ {TYPE_1__* chip_data; } ;
struct TYPE_3__ {scalar_t__ support_separate_wcount_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct tegra_dma_channel*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct tegra_dma_channel *VAR_7,
  struct tegra_dma_sg_req *VAR_8)
{
 struct tegra_dma_channel_regs *VAR_9 = &VAR_8->ch_regs;

 FUNC_0(VAR_7, VAR_4, VAR_9->csr);
 FUNC_0(VAR_7, VAR_3, VAR_9->apb_seq);
 FUNC_0(VAR_7, VAR_2, VAR_9->apb_ptr);
 FUNC_0(VAR_7, VAR_1, VAR_9->ahb_seq);
 FUNC_0(VAR_7, VAR_0, VAR_9->ahb_ptr);
 if (VAR_7->tdma->chip_data->support_separate_wcount_reg)
  FUNC_0(VAR_7, VAR_5, VAR_9->wcount);


 FUNC_0(VAR_7, VAR_4,
    VAR_9->csr | VAR_6);
}
