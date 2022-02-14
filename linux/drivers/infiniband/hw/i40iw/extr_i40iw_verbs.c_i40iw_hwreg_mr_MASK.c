
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct i40iw_reg_ns_stag_info {int stag_idx; int chunk_size; int reg_addr_pa; int first_pm_pbl_index; int page_size; int addr_type; int pd_id; int access_rights; int total_len; scalar_t__ stag_key; void* va; } ;
struct TYPE_10__ {int pd_id; } ;
struct i40iw_pd {TYPE_2__ sc_pd; } ;
struct TYPE_12__ {int idx; } ;
struct TYPE_13__ {TYPE_4__ root; } ;
struct TYPE_11__ {int idx; } ;
struct i40iw_pble_alloc {scalar_t__ level; TYPE_5__ level2; TYPE_3__ level1; } ;
struct i40iw_pbl {scalar_t__ pbl_allocated; scalar_t__ user_base; struct i40iw_pble_alloc pble_alloc; } ;
struct TYPE_9__ {int pd; } ;
struct i40iw_mr {int stag; int * pgaddrmem; int page_size; int length; TYPE_1__ ibmr; struct i40iw_pbl iwpbl; } ;
struct i40iw_device {int sc_dev; int cqp; } ;
struct TYPE_14__ {uintptr_t scratch; int * dev; struct i40iw_reg_ns_stag_info info; } ;
struct TYPE_15__ {TYPE_6__ mr_reg_non_shared; } ;
struct TYPE_16__ {TYPE_7__ u; } ;
struct cqp_commands_info {int post_sq; TYPE_8__ in; int cqp_cmd; } ;
struct i40iw_cqp_request {struct cqp_commands_info info; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct i40iw_cqp_request* FUNC_0 (int *,int) ;
 int FUNC_1 (struct i40iw_device*,struct i40iw_cqp_request*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct i40iw_reg_ns_stag_info*,int ,int) ;
 struct i40iw_pd* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i40iw_device *VAR_5,
     struct i40iw_mr *VAR_6,
     u16 VAR_7)
{
 struct i40iw_pbl *VAR_8 = &VAR_6->iwpbl;
 struct i40iw_reg_ns_stag_info *VAR_9;
 struct i40iw_pd *VAR_10 = FUNC_4(VAR_6->ibmr.pd);
 struct i40iw_pble_alloc *VAR_11 = &VAR_8->pble_alloc;
 enum i40iw_status_code VAR_12;
 int VAR_13 = 0;
 struct i40iw_cqp_request *VAR_14;
 struct cqp_commands_info *VAR_15;

 VAR_14 = FUNC_0(&VAR_5->cqp, 1);
 if (!VAR_14)
  return -VAR_0;

 VAR_15 = &VAR_14->info;
 VAR_9 = &VAR_15->in.u.mr_reg_non_shared.info;
 FUNC_3(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->va = (void *)(unsigned long)VAR_8->user_base;
 VAR_9->stag_idx = VAR_6->stag >> VAR_2;
 VAR_9->stag_key = (u8)VAR_6->stag;
 VAR_9->total_len = VAR_6->length;
 VAR_9->access_rights = VAR_7;
 VAR_9->pd_id = VAR_10->sc_pd.pd_id;
 VAR_9->addr_type = VAR_1;
 VAR_9->page_size = VAR_6->page_size;

 if (VAR_8->pbl_allocated) {
  if (VAR_11->level == VAR_3) {
   VAR_9->first_pm_pbl_index = VAR_11->level1.idx;
   VAR_9->chunk_size = 1;
  } else {
   VAR_9->first_pm_pbl_index = VAR_11->level2.root.idx;
   VAR_9->chunk_size = 3;
  }
 } else {
  VAR_9->reg_addr_pa = VAR_6->pgaddrmem[0];
 }

 VAR_15->cqp_cmd = VAR_4;
 VAR_15->post_sq = 1;
 VAR_15->in.u.mr_reg_non_shared.dev = &VAR_5->sc_dev;
 VAR_15->in.u.mr_reg_non_shared.scratch = (uintptr_t)VAR_14;

 VAR_12 = FUNC_1(VAR_5, VAR_14);
 if (VAR_12) {
  VAR_13 = -VAR_0;
  FUNC_2("CQP-OP MR Reg fail");
 }
 return VAR_13;
}
