
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ctl_lo; int ctl_hi; int block_ts_lo; int llp; int dar; int sar; } ;
struct axi_dma_desc {TYPE_2__ lli; } ;
struct TYPE_3__ {int chan; } ;
struct axi_dma_chan {TYPE_1__ vc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct axi_dma_chan *VAR_0,
         struct axi_dma_desc *VAR_1)
{
 FUNC_1(FUNC_0(&VAR_0->vc.chan),
  "SAR: 0x%llx DAR: 0x%llx LLP: 0x%llx BTS 0x%x CTL: 0x%x:%08x",
  FUNC_3(VAR_1->lli.sar),
  FUNC_3(VAR_1->lli.dar),
  FUNC_3(VAR_1->lli.llp),
  FUNC_2(VAR_1->lli.block_ts_lo),
  FUNC_2(VAR_1->lli.ctl_hi),
  FUNC_2(VAR_1->lli.ctl_lo));
}
