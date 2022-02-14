
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct task_struct {int pid; } ;
struct pt_regs {int cr_iip; int cr_ipsr; } ;
struct TYPE_8__ {int notify_user; int block_task; int mask_monitoring; int reset_ovfl_pmds; } ;
struct TYPE_9__ {TYPE_1__ bits; } ;
struct TYPE_10__ {unsigned char ovfl_pmd; unsigned char ovfl_notify; unsigned long* smpl_pmds_values; TYPE_2__ ovfl_ctrl; int active_set; int pmd_last_reset; int * smpl_pmds; } ;
typedef TYPE_3__ pfm_ovfl_arg_t ;
struct TYPE_11__ {int hdr_cur_offs; int hdr_buf_size; int hdr_overflows; int hdr_count; } ;
typedef TYPE_4__ pfm_default_smpl_hdr_t ;
struct TYPE_12__ {unsigned char ovfl_pmd; int ip; unsigned long tstamp; int tgid; int set; int cpu; int last_reset_val; int pid; } ;
typedef TYPE_5__ pfm_default_smpl_entry_t ;
struct TYPE_13__ {int tgid; int pid; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* VAR_2 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct task_struct *VAR_3, void *VAR_4, pfm_ovfl_arg_t *VAR_5, struct pt_regs *VAR_6, unsigned long VAR_7)
{
 pfm_default_smpl_hdr_t *VAR_8;
 pfm_default_smpl_entry_t *VAR_9;
 void *VAR_10, *VAR_11;
 unsigned long *VAR_12, VAR_13;
 unsigned int VAR_14, VAR_15;
 unsigned char VAR_16;
 unsigned char VAR_17;

 if (FUNC_5(VAR_4 == ((void*)0) || VAR_5 == ((void*)0)|| VAR_6 == ((void*)0) || VAR_3 == ((void*)0))) {
  FUNC_0(("[%d] invalid arguments buf=%p arg=%p\n", VAR_3->pid, VAR_4, VAR_5));
  return -VAR_0;
 }

 VAR_8 = (pfm_default_smpl_hdr_t *)VAR_4;
 VAR_10 = VAR_4+VAR_8->hdr_cur_offs;
 VAR_11 = VAR_4+VAR_8->hdr_buf_size;
 VAR_16 = VAR_5->ovfl_pmd;
 VAR_17 = VAR_5->ovfl_notify;




 if ((VAR_11 - VAR_10) < VAR_1) goto full;

 VAR_14 = FUNC_2(VAR_5->smpl_pmds[0]);

 VAR_9 = (pfm_default_smpl_entry_t *)VAR_10;

 FUNC_3(VAR_5->smpl_pmds_values);

 VAR_13 = sizeof(*VAR_9) + (VAR_14 << 3);


 VAR_12 = (unsigned long *)(VAR_9+1);

 VAR_8->hdr_count++;

 FUNC_1(("[%d] count=%lu cur=%p last=%p free_bytes=%lu ovfl_pmd=%d ovfl_notify=%d npmds=%u\n",
   VAR_3->pid,
   VAR_8->hdr_count,
   VAR_10, VAR_11,
   VAR_11-VAR_10,
   VAR_16,
   VAR_17, VAR_14));
 VAR_9->pid = VAR_2->pid;
 VAR_9->ovfl_pmd = VAR_16;
 VAR_9->last_reset_val = VAR_5->pmd_last_reset;




 VAR_9->ip = VAR_6->cr_iip | ((VAR_6->cr_ipsr >> 41) & 0x3);

 VAR_9->tstamp = VAR_7;
 VAR_9->cpu = FUNC_4();
 VAR_9->set = VAR_5->active_set;
 VAR_9->tgid = VAR_2->tgid;




 if (VAR_14) {
  unsigned long *VAR_18 = VAR_5->smpl_pmds_values;
  for(VAR_15=0; VAR_15 < VAR_14; VAR_15++) {
   *VAR_12++ = *VAR_18++;
  }
 }




 VAR_8->hdr_cur_offs += VAR_13;
 VAR_10 += VAR_13;




 if ((VAR_11 - VAR_10) < VAR_1) goto full;




 VAR_5->ovfl_ctrl.bits.notify_user = 0;
 VAR_5->ovfl_ctrl.bits.block_task = 0;
 VAR_5->ovfl_ctrl.bits.mask_monitoring = 0;
 VAR_5->ovfl_ctrl.bits.reset_ovfl_pmds = 1;

 return 0;
full:
 FUNC_1(("sampling buffer full free=%lu, count=%lu, ovfl_notify=%d\n", VAR_11-VAR_10, VAR_8->hdr_count, VAR_17));





 VAR_8->hdr_overflows++;




 if (VAR_17 == 0) {
  VAR_5->ovfl_ctrl.bits.notify_user = 0;
  VAR_5->ovfl_ctrl.bits.block_task = 0;
  VAR_5->ovfl_ctrl.bits.mask_monitoring = 1;
  VAR_5->ovfl_ctrl.bits.reset_ovfl_pmds = 0;
 } else {
  VAR_5->ovfl_ctrl.bits.notify_user = 1;
  VAR_5->ovfl_ctrl.bits.block_task = 1;
  VAR_5->ovfl_ctrl.bits.mask_monitoring = 1;
  VAR_5->ovfl_ctrl.bits.reset_ovfl_pmds = 0;
 }
 return -1;
}
