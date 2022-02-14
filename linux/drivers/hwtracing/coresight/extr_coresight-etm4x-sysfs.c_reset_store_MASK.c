
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etmv4_config {int mode; int cfg; int eventctrl0; int eventctrl1; int ts_ctrl; int stall_ctrl; int syncfreq; int vinst_ctrl; int viiectlr; int vissctlr; int* seq_ctrl; int seq_rst; int seq_state; int ext_inp; int cntr_idx; int* cntrldvr; int* cntr_ctrl; int* cntr_val; int res_idx; int* res_ctrl; int* ss_ctrl; int* ss_pe_cmp; int addr_idx; int* addr_val; int* addr_acc; int ctxid_idx; int* ctxid_pid; int ctxid_mask0; int ctxid_mask1; int vmid_idx; int* vmid_val; int vmid_mask0; int vmid_mask1; int * addr_type; } ;
struct etmv4_drvdata {int syncpr; int nr_addr_cmp; int nrseqstate; int nr_cntr; int nr_resource; int nr_ss_cmp; int numcidc; int numvmidc; int spinlock; scalar_t__ cpu; scalar_t__ trcid; struct etmv4_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct etmv4_drvdata* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_7,
      struct device_attribute *VAR_8,
      const char *VAR_9, size_t VAR_10)
{
 int VAR_11;
 unsigned long VAR_12;
 struct etmv4_drvdata *VAR_13 = FUNC_1(VAR_7->parent);
 struct etmv4_config *VAR_14 = &VAR_13->config;

 if (FUNC_2(VAR_9, 16, &VAR_12))
  return -VAR_0;

 FUNC_3(&VAR_13->spinlock);
 if (VAR_12)
  VAR_14->mode = 0x0;


 VAR_14->mode &= ~(VAR_4 | VAR_5);
 VAR_14->cfg &= ~(FUNC_0(1) | FUNC_0(2));


 VAR_14->mode &= ~(VAR_2 |
      VAR_3);
 VAR_14->cfg &= ~(FUNC_0(16) | FUNC_0(17));


 VAR_14->eventctrl0 = 0x0;
 VAR_14->eventctrl1 = 0x0;


 VAR_14->ts_ctrl = 0x0;


 VAR_14->stall_ctrl = 0x0;


 if (VAR_13->syncpr == 0)
  VAR_14->syncfreq = 0x8;






 VAR_14->vinst_ctrl |= FUNC_0(0);
 if (VAR_13->nr_addr_cmp == 1) {
  VAR_14->mode |= VAR_6;

  VAR_14->vinst_ctrl |= FUNC_0(9);
 }


 VAR_14->viiectlr = 0x0;


 VAR_14->vissctlr = 0x0;


 for (VAR_11 = 0; VAR_11 < VAR_13->nrseqstate-1; VAR_11++)
  VAR_14->seq_ctrl[VAR_11] = 0x0;
 VAR_14->seq_rst = 0x0;
 VAR_14->seq_state = 0x0;


 VAR_14->ext_inp = 0x0;

 VAR_14->cntr_idx = 0x0;
 for (VAR_11 = 0; VAR_11 < VAR_13->nr_cntr; VAR_11++) {
  VAR_14->cntrldvr[VAR_11] = 0x0;
  VAR_14->cntr_ctrl[VAR_11] = 0x0;
  VAR_14->cntr_val[VAR_11] = 0x0;
 }

 VAR_14->res_idx = 0x0;
 for (VAR_11 = 0; VAR_11 < VAR_13->nr_resource; VAR_11++)
  VAR_14->res_ctrl[VAR_11] = 0x0;

 for (VAR_11 = 0; VAR_11 < VAR_13->nr_ss_cmp; VAR_11++) {
  VAR_14->ss_ctrl[VAR_11] = 0x0;
  VAR_14->ss_pe_cmp[VAR_11] = 0x0;
 }

 VAR_14->addr_idx = 0x0;
 for (VAR_11 = 0; VAR_11 < VAR_13->nr_addr_cmp * 2; VAR_11++) {
  VAR_14->addr_val[VAR_11] = 0x0;
  VAR_14->addr_acc[VAR_11] = 0x0;
  VAR_14->addr_type[VAR_11] = VAR_1;
 }

 VAR_14->ctxid_idx = 0x0;
 for (VAR_11 = 0; VAR_11 < VAR_13->numcidc; VAR_11++)
  VAR_14->ctxid_pid[VAR_11] = 0x0;

 VAR_14->ctxid_mask0 = 0x0;
 VAR_14->ctxid_mask1 = 0x0;

 VAR_14->vmid_idx = 0x0;
 for (VAR_11 = 0; VAR_11 < VAR_13->numvmidc; VAR_11++)
  VAR_14->vmid_val[VAR_11] = 0x0;
 VAR_14->vmid_mask0 = 0x0;
 VAR_14->vmid_mask1 = 0x0;

 VAR_13->trcid = VAR_13->cpu + 1;

 FUNC_4(&VAR_13->spinlock);

 return VAR_10;
}
