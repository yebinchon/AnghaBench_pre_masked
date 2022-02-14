
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;
struct TYPE_5__ {int reset_ovfl_pmds; scalar_t__ mask_monitoring; } ;
struct TYPE_6__ {TYPE_1__ bits; } ;
typedef TYPE_2__ pfm_ovfl_ctrl_t ;
struct TYPE_7__ {unsigned long hdr_count; int hdr_cur_offs; } ;
typedef TYPE_3__ pfm_default_smpl_hdr_t ;



__attribute__((used)) static int
FUNC_0(struct task_struct *VAR_0, pfm_ovfl_ctrl_t *VAR_1, void *VAR_2, struct pt_regs *VAR_3)
{
 pfm_default_smpl_hdr_t *VAR_4;

 VAR_4 = (pfm_default_smpl_hdr_t *)VAR_2;

 VAR_4->hdr_count = 0UL;
 VAR_4->hdr_cur_offs = sizeof(*VAR_4);

 VAR_1->bits.mask_monitoring = 0;
 VAR_1->bits.reset_ovfl_pmds = 1;

 return 0;
}
