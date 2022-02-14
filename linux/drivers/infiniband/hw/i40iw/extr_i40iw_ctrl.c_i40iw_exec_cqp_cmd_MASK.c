
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_68__ TYPE_9__ ;
typedef struct TYPE_67__ TYPE_8__ ;
typedef struct TYPE_66__ TYPE_7__ ;
typedef struct TYPE_65__ TYPE_6__ ;
typedef struct TYPE_64__ TYPE_5__ ;
typedef struct TYPE_63__ TYPE_4__ ;
typedef struct TYPE_62__ TYPE_3__ ;
typedef struct TYPE_61__ TYPE_34__ ;
typedef struct TYPE_60__ TYPE_33__ ;
typedef struct TYPE_59__ TYPE_32__ ;
typedef struct TYPE_58__ TYPE_31__ ;
typedef struct TYPE_57__ TYPE_30__ ;
typedef struct TYPE_56__ TYPE_2__ ;
typedef struct TYPE_55__ TYPE_29__ ;
typedef struct TYPE_54__ TYPE_28__ ;
typedef struct TYPE_53__ TYPE_27__ ;
typedef struct TYPE_52__ TYPE_26__ ;
typedef struct TYPE_51__ TYPE_25__ ;
typedef struct TYPE_50__ TYPE_24__ ;
typedef struct TYPE_49__ TYPE_23__ ;
typedef struct TYPE_48__ TYPE_22__ ;
typedef struct TYPE_47__ TYPE_21__ ;
typedef struct TYPE_46__ TYPE_20__ ;
typedef struct TYPE_45__ TYPE_1__ ;
typedef struct TYPE_44__ TYPE_19__ ;
typedef struct TYPE_43__ TYPE_18__ ;
typedef struct TYPE_42__ TYPE_17__ ;
typedef struct TYPE_41__ TYPE_16__ ;
typedef struct TYPE_40__ TYPE_15__ ;
typedef struct TYPE_39__ TYPE_14__ ;
typedef struct TYPE_38__ TYPE_13__ ;
typedef struct TYPE_37__ TYPE_12__ ;
typedef struct TYPE_36__ TYPE_11__ ;
typedef struct TYPE_35__ TYPE_10__ ;


typedef int u8 ;
struct i40iw_sc_dev {int * cqp_cmd_stats; } ;
struct i40iw_dma_mem {int va; int pa; } ;
struct TYPE_59__ {int hmc_fn_id; int scratch; int cqp; int fpm_values_va; int fpm_values_pa; } ;
struct TYPE_58__ {int hmc_fn_id; int scratch; int cqp; int fpm_values_va; int fpm_values_pa; } ;
struct TYPE_57__ {int scratch; int info; int cqp; } ;
struct TYPE_55__ {int scratch; int qp; int cqp; } ;
struct TYPE_53__ {int free_fcn; int vf_id; } ;
struct TYPE_54__ {TYPE_27__ info; int scratch; TYPE_26__* dev; } ;
struct TYPE_51__ {int scratch; int info; int dev; } ;
struct TYPE_50__ {int scratch; int info; int cqp; } ;
struct TYPE_49__ {int scratch; int info; int cqp; } ;
struct TYPE_48__ {int scratch; int info; int qp; } ;
struct TYPE_47__ {int scratch; int info; int qp; } ;
struct TYPE_46__ {int pd_id; int mw_stag_index; int scratch; int dev; } ;
struct TYPE_44__ {int scratch; int info; int dev; } ;
struct TYPE_43__ {int scratch; int info; int dev; } ;
struct TYPE_42__ {int scratch; int info; int dev; } ;
struct TYPE_41__ {int ignore_mw_bnd; int remove_hash_idx; int scratch; int qp; } ;
struct TYPE_40__ {int scratch; int info; int qp; } ;
struct TYPE_39__ {int scratch; int cq; } ;
struct TYPE_38__ {int check_overflow; int scratch; int cq; } ;
struct TYPE_37__ {int scratch; int info; int dev; } ;
struct TYPE_36__ {int scratch; int info; int qp; } ;
struct TYPE_35__ {int scratch; int info; int cqp; } ;
struct TYPE_68__ {int scratch; int info; int cqp; } ;
struct TYPE_67__ {int scratch; int cqp; } ;
struct TYPE_66__ {int scratch; int aeq; } ;
struct TYPE_65__ {int scratch; int ceq; } ;
struct TYPE_64__ {int scratch; int info; int cqp; } ;
struct TYPE_63__ {int arp_index; int scratch; int cqp; } ;
struct TYPE_62__ {int scratch; int aeq; } ;
struct TYPE_56__ {int scratch; int ceq; } ;
struct TYPE_45__ {int ignore_ref_count; int entry_idx; int scratch; int cqp; } ;
struct TYPE_60__ {TYPE_32__ commit_fpm_values; TYPE_31__ query_fpm_values; TYPE_30__ manage_vf_pble_bp; TYPE_29__ suspend_resume; TYPE_28__ manage_hmc_pm; TYPE_25__ update_pe_sds; TYPE_24__ manage_push_page; TYPE_23__ add_arp_cache_entry; TYPE_22__ gen_ae; TYPE_21__ qp_flush_wqes; TYPE_20__ mw_alloc; TYPE_19__ dealloc_stag; TYPE_18__ mr_reg_non_shared; TYPE_17__ alloc_stag; TYPE_16__ qp_destroy; TYPE_15__ qp_create; TYPE_14__ cq_destroy; TYPE_13__ cq_create; TYPE_12__ qp_upload_context; TYPE_11__ qp_modify; TYPE_10__ manage_qhash_table_entry; TYPE_9__ add_local_mac_ipaddr_entry; TYPE_8__ alloc_local_mac_ipaddr_entry; TYPE_7__ aeq_create; TYPE_6__ ceq_create; TYPE_5__ manage_apbvt_entry; TYPE_4__ del_arp_cache_entry; TYPE_3__ aeq_destroy; TYPE_2__ ceq_destroy; TYPE_1__ del_local_mac_ipaddr_entry; } ;
struct TYPE_61__ {TYPE_33__ u; } ;
struct cqp_commands_info {size_t cqp_cmd; TYPE_34__ in; int post_sq; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_52__ {int cqp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int) ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int *,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ,struct i40iw_dma_mem*,int,int ) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int *,int ,int ) ;
 int FUNC_13 (int ,int ,int ,int ) ;
 int FUNC_14 (int ,int ,int ,int ,int ) ;
 int FUNC_15 (int ,int *,int ,int ) ;
 int FUNC_16 (int ,int *,int ,int ) ;
 int FUNC_17 (int ,int ,int ,int ,int) ;
 int FUNC_18 (int ,int *,int ,int ) ;
 int FUNC_19 (int ,int *,int ,int ) ;
 int FUNC_20 (int ,int *,int ,int ) ;
 int FUNC_21 (int ,int ,int ,int ,int ) ;
 int FUNC_22 (int ,int *,int ,int ) ;
 int FUNC_23 (int ,int ,int ,int ,int ) ;
 int FUNC_24 (int ,int *,int ,int ) ;
 int FUNC_25 (int ,int *,int ,int ) ;
 int FUNC_26 (int ,int *,int ,int ) ;
 int FUNC_27 (int ,int ,int ,struct i40iw_dma_mem*,int,int ) ;
 int FUNC_28 (int ,int ,int ) ;
 int FUNC_29 (int ,int ,int ) ;
 int FUNC_30 (int ,int *,int ) ;

__attribute__((used)) static enum i40iw_status_code FUNC_31(struct i40iw_sc_dev *VAR_2,
       struct cqp_commands_info *VAR_3)
{
 enum i40iw_status_code VAR_4;
 struct i40iw_dma_mem VAR_5;

 VAR_2->cqp_cmd_stats[VAR_3->cqp_cmd]++;
 switch (VAR_3->cqp_cmd) {
 case 145:
  VAR_4 = FUNC_14(
    VAR_3->in.u.del_local_mac_ipaddr_entry.cqp,
    VAR_3->in.u.del_local_mac_ipaddr_entry.scratch,
    VAR_3->in.u.del_local_mac_ipaddr_entry.entry_idx,
    VAR_3->in.u.del_local_mac_ipaddr_entry.ignore_ref_count,
    VAR_3->post_sq);
  break;
 case 151:
  VAR_4 = FUNC_8(VAR_3->in.u.ceq_destroy.ceq,
           VAR_3->in.u.ceq_destroy.scratch,
           VAR_3->post_sq);
  break;
 case 155:
  VAR_4 = FUNC_4(VAR_3->in.u.aeq_destroy.aeq,
           VAR_3->in.u.aeq_destroy.scratch,
           VAR_3->post_sq);

  break;
 case 146:
  VAR_4 = FUNC_13(
    VAR_3->in.u.del_arp_cache_entry.cqp,
    VAR_3->in.u.del_arp_cache_entry.scratch,
    VAR_3->in.u.del_arp_cache_entry.arp_index,
    VAR_3->post_sq);
  break;
 case 143:
  VAR_4 = FUNC_16(
    VAR_3->in.u.manage_apbvt_entry.cqp,
    &VAR_3->in.u.manage_apbvt_entry.info,
    VAR_3->in.u.manage_apbvt_entry.scratch,
    VAR_3->post_sq);
  break;
 case 152:
  VAR_4 = FUNC_7(VAR_3->in.u.ceq_create.ceq,
          VAR_3->in.u.ceq_create.scratch,
          VAR_3->post_sq);
  break;
 case 156:
  VAR_4 = FUNC_3(VAR_3->in.u.aeq_create.aeq,
          VAR_3->in.u.aeq_create.scratch,
          VAR_3->post_sq);
  break;
 case 154:
  VAR_4 = FUNC_5(
    VAR_3->in.u.alloc_local_mac_ipaddr_entry.cqp,
    VAR_3->in.u.alloc_local_mac_ipaddr_entry.scratch,
    VAR_3->post_sq);
  break;
 case 157:
  VAR_4 = FUNC_2(
    VAR_3->in.u.add_local_mac_ipaddr_entry.cqp,
    &VAR_3->in.u.add_local_mac_ipaddr_entry.info,
    VAR_3->in.u.add_local_mac_ipaddr_entry.scratch,
    VAR_3->post_sq);
  break;
 case 140:
  VAR_4 = FUNC_19(
    VAR_3->in.u.manage_qhash_table_entry.cqp,
    &VAR_3->in.u.manage_qhash_table_entry.info,
    VAR_3->in.u.manage_qhash_table_entry.scratch,
    VAR_3->post_sq);

  break;
 case 133:
  VAR_4 = FUNC_25(
    VAR_3->in.u.qp_modify.qp,
    &VAR_3->in.u.qp_modify.info,
    VAR_3->in.u.qp_modify.scratch,
    VAR_3->post_sq);

  break;
 case 132:
  VAR_4 = FUNC_26(
    VAR_3->in.u.qp_upload_context.dev,
    &VAR_3->in.u.qp_upload_context.info,
    VAR_3->in.u.qp_upload_context.scratch,
    VAR_3->post_sq);

  break;
 case 149:
  VAR_4 = FUNC_10(
    VAR_3->in.u.cq_create.cq,
    VAR_3->in.u.cq_create.scratch,
    VAR_3->in.u.cq_create.check_overflow,
    VAR_3->post_sq);
  break;
 case 148:
  VAR_4 = FUNC_11(
    VAR_3->in.u.cq_destroy.cq,
    VAR_3->in.u.cq_destroy.scratch,
    VAR_3->post_sq);

  break;
 case 136:
  VAR_4 = FUNC_22(
    VAR_3->in.u.qp_create.qp,
    &VAR_3->in.u.qp_create.info,
    VAR_3->in.u.qp_create.scratch,
    VAR_3->post_sq);
  break;
 case 135:
  VAR_4 = FUNC_23(
    VAR_3->in.u.qp_destroy.qp,
    VAR_3->in.u.qp_destroy.scratch,
    VAR_3->in.u.qp_destroy.remove_hash_idx,
    VAR_3->in.u.qp_destroy.
    ignore_mw_bnd,
    VAR_3->post_sq);

  break;
 case 153:
  VAR_4 = FUNC_6(
    VAR_3->in.u.alloc_stag.dev,
    &VAR_3->in.u.alloc_stag.info,
    VAR_3->in.u.alloc_stag.scratch,
    VAR_3->post_sq);
  break;
 case 138:
  VAR_4 = FUNC_20(
    VAR_3->in.u.mr_reg_non_shared.dev,
    &VAR_3->in.u.mr_reg_non_shared.info,
    VAR_3->in.u.mr_reg_non_shared.scratch,
    VAR_3->post_sq);

  break;
 case 147:
  VAR_4 = FUNC_12(
    VAR_3->in.u.dealloc_stag.dev,
    &VAR_3->in.u.dealloc_stag.info,
    VAR_3->in.u.dealloc_stag.scratch,
    VAR_3->post_sq);

  break;
 case 137:
  VAR_4 = FUNC_21(
    VAR_3->in.u.mw_alloc.dev,
    VAR_3->in.u.mw_alloc.scratch,
    VAR_3->in.u.mw_alloc.mw_stag_index,
    VAR_3->in.u.mw_alloc.pd_id,
    VAR_3->post_sq);

  break;
 case 134:
  VAR_4 = FUNC_24(
    VAR_3->in.u.qp_flush_wqes.qp,
    &VAR_3->in.u.qp_flush_wqes.info,
    VAR_3->in.u.qp_flush_wqes.
    scratch, VAR_3->post_sq);
  break;
 case 144:
  VAR_4 = FUNC_15(
    VAR_3->in.u.gen_ae.qp,
    &VAR_3->in.u.gen_ae.info,
    VAR_3->in.u.gen_ae.scratch,
    VAR_3->post_sq);
  break;
 case 158:
  VAR_4 = FUNC_1(
    VAR_3->in.u.add_arp_cache_entry.cqp,
    &VAR_3->in.u.add_arp_cache_entry.info,
    VAR_3->in.u.add_arp_cache_entry.scratch,
    VAR_3->post_sq);
  break;
 case 141:
  VAR_4 = FUNC_18(
    VAR_3->in.u.manage_push_page.cqp,
    &VAR_3->in.u.manage_push_page.info,
    VAR_3->in.u.manage_push_page.scratch,
    VAR_3->post_sq);
  break;
 case 128:

  VAR_4 = FUNC_30(
    VAR_3->in.u.update_pe_sds.dev,
    &VAR_3->in.u.update_pe_sds.info,
    VAR_3->in.u.update_pe_sds.
    scratch);

  break;
 case 142:
  VAR_4 = FUNC_17(
    VAR_3->in.u.manage_hmc_pm.dev->cqp,
    VAR_3->in.u.manage_hmc_pm.scratch,
    (u8)VAR_3->in.u.manage_hmc_pm.info.vf_id,
    VAR_3->in.u.manage_hmc_pm.info.free_fcn,
    1);
  break;
 case 129:
  VAR_4 = FUNC_29(
    VAR_3->in.u.suspend_resume.cqp,
    VAR_3->in.u.suspend_resume.qp,
    VAR_3->in.u.suspend_resume.scratch);
  break;
 case 130:
  VAR_4 = FUNC_28(
    VAR_3->in.u.suspend_resume.cqp,
    VAR_3->in.u.suspend_resume.qp,
    VAR_3->in.u.suspend_resume.scratch);
  break;
 case 139:
  VAR_4 = FUNC_0(
    VAR_3->in.u.manage_vf_pble_bp.cqp,
    &VAR_3->in.u.manage_vf_pble_bp.info,
    VAR_3->in.u.manage_vf_pble_bp.scratch, 1);
  break;
 case 131:
  VAR_5.pa = VAR_3->in.u.query_fpm_values.fpm_values_pa;
  VAR_5.va = VAR_3->in.u.query_fpm_values.fpm_values_va;
  VAR_4 = FUNC_27(
    VAR_3->in.u.query_fpm_values.cqp,
    VAR_3->in.u.query_fpm_values.scratch,
    VAR_3->in.u.query_fpm_values.hmc_fn_id,
    &VAR_5, 1, VAR_0);
  break;
 case 150:
  VAR_5.pa = VAR_3->in.u.commit_fpm_values.fpm_values_pa;
  VAR_5.va = VAR_3->in.u.commit_fpm_values.fpm_values_va;
  VAR_4 = FUNC_9(
    VAR_3->in.u.commit_fpm_values.cqp,
    VAR_3->in.u.commit_fpm_values.scratch,
    VAR_3->in.u.commit_fpm_values.hmc_fn_id,
    &VAR_5,
    1,
    VAR_0);
  break;
 default:
  VAR_4 = VAR_1;
  break;
 }

 return VAR_4;
}
