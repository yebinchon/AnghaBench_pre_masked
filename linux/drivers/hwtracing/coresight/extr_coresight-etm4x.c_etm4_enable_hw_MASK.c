
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct etmv4_config {int pe_sel; int cfg; int eventctrl0; int eventctrl1; int stall_ctrl; int ts_ctrl; int syncfreq; int ccctlr; int bb_ctrl; int vinst_ctrl; int viiectlr; int vissctlr; int vipcssctlr; int* seq_ctrl; int seq_rst; int seq_state; int ext_inp; int* cntrldvr; int* cntr_ctrl; int* cntr_val; int* res_ctrl; int* ss_ctrl; int* ss_status; int* ss_pe_cmp; int ctxid_mask0; int ctxid_mask1; int vmid_mask0; int vmid_mask1; int * vmid_val; int * ctxid_pid; int * addr_acc; int * addr_val; } ;
struct etmv4_drvdata {int trcid; int nrseqstate; int nr_cntr; int nr_resource; int nr_ss_cmp; int nr_addr_cmp; int numcidc; int numvmidc; int cpu; scalar_t__ base; TYPE_1__* csdev; struct etmv4_config config; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__,int ,int ,int) ;
 int FUNC_16 (struct device*,char*,int ,int) ;
 int FUNC_17 (struct device*,char*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct etmv4_drvdata*) ;
 int FUNC_20 () ;
 int FUNC_21 (scalar_t__) ;
 int VAR_27 ;
 int FUNC_22 (int,scalar_t__) ;
 int FUNC_23 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_24(struct etmv4_drvdata *VAR_28)
{
 int VAR_29, VAR_30;
 struct etmv4_config *VAR_31 = &VAR_28->config;
 struct device *VAR_32 = &VAR_28->csdev->dev;

 FUNC_1(VAR_28->base);

 FUNC_19(VAR_28);

 VAR_30 = FUNC_14(VAR_28->base);
 if (VAR_30)
  goto done;


 FUNC_22(0, VAR_28->base + VAR_11);


 if (FUNC_15(VAR_28->base, VAR_16, VAR_17, 1))
  FUNC_17(VAR_32,
   "timeout while waiting for Idle Trace Status\n");

 FUNC_22(VAR_31->pe_sel, VAR_28->base + VAR_12);
 FUNC_22(VAR_31->cfg, VAR_28->base + VAR_5);

 FUNC_22(0x0, VAR_28->base + VAR_0);
 FUNC_22(VAR_31->eventctrl0, VAR_28->base + VAR_6);
 FUNC_22(VAR_31->eventctrl1, VAR_28->base + VAR_7);
 FUNC_22(VAR_31->stall_ctrl, VAR_28->base + VAR_15);
 FUNC_22(VAR_31->ts_ctrl, VAR_28->base + VAR_20);
 FUNC_22(VAR_31->syncfreq, VAR_28->base + VAR_18);
 FUNC_22(VAR_31->ccctlr, VAR_28->base + VAR_2);
 FUNC_22(VAR_31->bb_ctrl, VAR_28->base + VAR_1);
 FUNC_22(VAR_28->trcid, VAR_28->base + VAR_19);
 FUNC_22(VAR_31->vinst_ctrl, VAR_28->base + VAR_21);
 FUNC_22(VAR_31->viiectlr, VAR_28->base + VAR_22);
 FUNC_22(VAR_31->vissctlr,
         VAR_28->base + VAR_24);
 FUNC_22(VAR_31->vipcssctlr,
         VAR_28->base + VAR_23);
 for (VAR_29 = 0; VAR_29 < VAR_28->nrseqstate - 1; VAR_29++)
  FUNC_22(VAR_31->seq_ctrl[VAR_29],
          VAR_28->base + FUNC_9(VAR_29));
 FUNC_22(VAR_31->seq_rst, VAR_28->base + VAR_13);
 FUNC_22(VAR_31->seq_state, VAR_28->base + VAR_14);
 FUNC_22(VAR_31->ext_inp, VAR_28->base + VAR_8);
 for (VAR_29 = 0; VAR_29 < VAR_28->nr_cntr; VAR_29++) {
  FUNC_22(VAR_31->cntrldvr[VAR_29],
          VAR_28->base + FUNC_6(VAR_29));
  FUNC_22(VAR_31->cntr_ctrl[VAR_29],
          VAR_28->base + FUNC_5(VAR_29));
  FUNC_22(VAR_31->cntr_val[VAR_29],
          VAR_28->base + FUNC_7(VAR_29));
 }





 for (VAR_29 = 2; VAR_29 < VAR_28->nr_resource * 2; VAR_29++)
  FUNC_22(VAR_31->res_ctrl[VAR_29],
          VAR_28->base + FUNC_8(VAR_29));

 for (VAR_29 = 0; VAR_29 < VAR_28->nr_ss_cmp; VAR_29++) {
  FUNC_22(VAR_31->ss_ctrl[VAR_29],
          VAR_28->base + FUNC_10(VAR_29));
  FUNC_22(VAR_31->ss_status[VAR_29],
          VAR_28->base + FUNC_11(VAR_29));
  FUNC_22(VAR_31->ss_pe_cmp[VAR_29],
          VAR_28->base + FUNC_12(VAR_29));
 }
 for (VAR_29 = 0; VAR_29 < VAR_28->nr_addr_cmp; VAR_29++) {
  FUNC_23(VAR_31->addr_val[VAR_29],
          VAR_28->base + FUNC_3(VAR_29));
  FUNC_23(VAR_31->addr_acc[VAR_29],
          VAR_28->base + FUNC_2(VAR_29));
 }
 for (VAR_29 = 0; VAR_29 < VAR_28->numcidc; VAR_29++)
  FUNC_23(VAR_31->ctxid_pid[VAR_29],
          VAR_28->base + FUNC_4(VAR_29));
 FUNC_22(VAR_31->ctxid_mask0, VAR_28->base + VAR_3);
 FUNC_22(VAR_31->ctxid_mask1, VAR_28->base + VAR_4);

 for (VAR_29 = 0; VAR_29 < VAR_28->numvmidc; VAR_29++)
  FUNC_23(VAR_31->vmid_val[VAR_29],
          VAR_28->base + FUNC_13(VAR_29));
 FUNC_22(VAR_31->vmid_mask0, VAR_28->base + VAR_25);
 FUNC_22(VAR_31->vmid_mask1, VAR_28->base + VAR_26);





 FUNC_22(FUNC_21(VAR_28->base + VAR_9) | VAR_10,
         VAR_28->base + VAR_9);


 FUNC_22(1, VAR_28->base + VAR_11);


 if (FUNC_15(VAR_28->base, VAR_16, VAR_17, 0))
  FUNC_17(VAR_32,
   "timeout while waiting for Idle Trace Status\n");





 FUNC_18(VAR_27);
 FUNC_20();

done:
 FUNC_0(VAR_28->base);

 FUNC_16(VAR_32, "cpu: %d enable smp call done: %d\n",
  VAR_28->cpu, VAR_30);
 return VAR_30;
}
