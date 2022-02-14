
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct i40iw_vsi_pestat {int hw_stats; } ;
struct i40iw_virtchnl_work_info {int callback_fcn; struct i40iw_vfdev* worker_vf_dev; } ;
struct i40iw_virtchnl_op_buf {int iw_op_code; } ;
struct i40iw_virt_mem {struct i40iw_vfdev* va; } ;
struct TYPE_4__ {int vchnl_msg; } ;
struct TYPE_3__ {struct i40iw_hmc_obj_info* hmc_obj; } ;
struct i40iw_vfdev {scalar_t__ vf_id; int msg_count; int stats_initialized; size_t iw_vf_idx; int pf_hmc_initialized; struct i40iw_vsi_pestat pestat; TYPE_2__ vf_msg_buffer; int pmf_index; TYPE_1__ hmc_info; struct i40iw_sc_dev* pf_dev; } ;
struct i40iw_sc_dev {struct i40iw_vfdev** vf_dev; int hw; int vchnl_up; } ;
struct i40iw_hmc_obj_info {int dummy; } ;
struct i40iw_hmc_fcn_info {size_t iw_vf_idx; int free_fcn; struct i40iw_vfdev* cqp_callback_param; scalar_t__ vf_id; int callback_fcn; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;
 int FUNC_0 (int ,struct i40iw_virt_mem*,int) ;
 int FUNC_1 (struct i40iw_sc_dev*,struct i40iw_hmc_fcn_info*) ;
 int FUNC_2 (struct i40iw_sc_dev*,struct i40iw_virtchnl_work_info*,size_t) ;
 int FUNC_3 (struct i40iw_sc_dev*,int ,char*,scalar_t__,...) ;
 int FUNC_4 (struct i40iw_vsi_pestat*,int *) ;
 int FUNC_5 (struct i40iw_sc_dev*,struct i40iw_vsi_pestat*,int ) ;
 int FUNC_6 (int *,struct i40iw_virtchnl_op_buf*,size_t) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (struct i40iw_sc_dev*,scalar_t__,struct i40iw_virtchnl_op_buf*,size_t) ;
 int FUNC_8 (struct i40iw_sc_dev*,scalar_t__,struct i40iw_virtchnl_op_buf*,int ) ;
 int FUNC_9 (struct i40iw_sc_dev*,scalar_t__,struct i40iw_virtchnl_op_buf*,int *) ;
 int FUNC_10 (struct i40iw_sc_dev*,scalar_t__,struct i40iw_virtchnl_op_buf*) ;

enum i40iw_status_code FUNC_11(struct i40iw_sc_dev *VAR_13,
        u32 VAR_14,
        u8 *VAR_15,
        u16 VAR_16)
{
 struct i40iw_virtchnl_op_buf *VAR_17 = (struct i40iw_virtchnl_op_buf *)VAR_15;
 struct i40iw_vfdev *VAR_18 = ((void*)0);
 struct i40iw_hmc_fcn_info VAR_19;
 u16 VAR_20;
 u16 VAR_21 = VAR_7;
 struct i40iw_virt_mem VAR_22;
 struct i40iw_virtchnl_work_info VAR_23;
 struct i40iw_vsi_pestat *VAR_24;
 enum i40iw_status_code VAR_25;

 if (!VAR_13 || !VAR_15 || !VAR_16)
  return VAR_5;

 if (!VAR_13->vchnl_up)
  return VAR_3;
 if (VAR_17->iw_op_code == VAR_9) {
  FUNC_10(VAR_13, VAR_14, VAR_17);
  return VAR_8;
 }
 for (VAR_20 = 0; VAR_20 < VAR_7; VAR_20++) {
  if (!VAR_13->vf_dev[VAR_20]) {
   if (VAR_21 == VAR_7)
    VAR_21 = VAR_20;
   continue;
  }
  if (VAR_13->vf_dev[VAR_20]->vf_id == VAR_14) {
   VAR_18 = VAR_13->vf_dev[VAR_20];
   break;
  }
 }
 if (VAR_18) {
  if (!VAR_18->msg_count) {
   VAR_18->msg_count++;
  } else {
   FUNC_3(VAR_13, VAR_0,
        "VF%u already has a channel message in progress.\n",
        VAR_14);
   return VAR_8;
  }
 }
 switch (VAR_17->iw_op_code) {
 case 129:
  if (!VAR_18 &&
      (VAR_21 != VAR_7)) {
   VAR_25 = FUNC_0(VAR_13->hw, &VAR_22, sizeof(struct i40iw_vfdev) +
          (sizeof(struct i40iw_hmc_obj_info) * VAR_6));
   if (!VAR_25) {
    VAR_18 = VAR_22.va;
    VAR_18->stats_initialized = 0;
    VAR_18->pf_dev = VAR_13;
    VAR_18->msg_count = 1;
    VAR_18->vf_id = VAR_14;
    VAR_18->iw_vf_idx = VAR_21;
    VAR_18->pf_hmc_initialized = 0;
    VAR_18->hmc_info.hmc_obj = (struct i40iw_hmc_obj_info *)(&VAR_18[1]);
    FUNC_3(VAR_13, VAR_0,
         "vf_dev %p, hmc_info %p, hmc_obj %p\n",
         VAR_18, &VAR_18->hmc_info, VAR_18->hmc_info.hmc_obj);
    VAR_13->vf_dev[VAR_21] = VAR_18;
    VAR_20 = VAR_21;
   } else {
    FUNC_3(VAR_13, VAR_0,
         "VF%u Unable to allocate a VF device structure.\n",
         VAR_14);
    FUNC_7(VAR_13, VAR_14, VAR_17, (u16)VAR_4);
    return VAR_8;
   }
   FUNC_6(&VAR_18->vf_msg_buffer.vchnl_msg, VAR_17, VAR_16);
   VAR_19.callback_fcn = VAR_11;
   VAR_19.vf_id = VAR_14;
   VAR_19.iw_vf_idx = VAR_18->iw_vf_idx;
   VAR_19.cqp_callback_param = VAR_18;
   VAR_19.free_fcn = 0;
   VAR_25 = FUNC_1(VAR_13, &VAR_19);
   if (VAR_25)
    FUNC_3(VAR_13, VAR_0,
         "VF%u error CQP HMC Function operation.\n",
         VAR_14);
   FUNC_5(VAR_13, &VAR_18->pestat, VAR_18->pmf_index);
   VAR_18->stats_initialized = 1;
  } else {
   if (VAR_18) {
    VAR_18->msg_count--;
    FUNC_8(VAR_13, VAR_14, VAR_17, VAR_18->pmf_index);
   } else {
    FUNC_7(VAR_13, VAR_14, VAR_17,
        (u16)VAR_4);
   }
  }
  break;
 case 131:
  if (!VAR_18)
   return VAR_1;
  VAR_23.worker_vf_dev = VAR_18;
  VAR_23.callback_fcn = VAR_10;
  FUNC_6(&VAR_18->vf_msg_buffer.vchnl_msg, VAR_17, VAR_16);
  FUNC_2(VAR_13, &VAR_23, VAR_18->iw_vf_idx);
  break;
 case 130:
  if (!VAR_18)
   return VAR_1;
  VAR_23.worker_vf_dev = VAR_18;
  VAR_23.callback_fcn = VAR_12;
  FUNC_6(&VAR_18->vf_msg_buffer.vchnl_msg, VAR_17, VAR_16);
  FUNC_2(VAR_13, &VAR_23, VAR_18->iw_vf_idx);
  break;
 case 128:
  if (!VAR_18)
   return VAR_1;
  VAR_24 = &VAR_18->pestat;
  FUNC_4(VAR_24, &VAR_24->hw_stats);
  VAR_18->msg_count--;
  FUNC_9(VAR_13, VAR_14, VAR_17, &VAR_24->hw_stats);
  break;
 default:
  FUNC_3(VAR_13, VAR_0,
       "40iw_vchnl_recv_pf: Invalid OpCode 0x%x\n",
       VAR_17->iw_op_code);
  FUNC_7(VAR_13, VAR_14,
      VAR_17, (u16)VAR_2);
 }
 return VAR_8;
}
