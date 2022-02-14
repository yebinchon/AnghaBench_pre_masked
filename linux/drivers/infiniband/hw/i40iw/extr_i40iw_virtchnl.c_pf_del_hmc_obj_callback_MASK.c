
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct i40iw_virtchnl_op_buf {scalar_t__ iw_chnl_buf; } ;
struct i40iw_virtchnl_hmc_obj_range {int obj_count; int start_index; scalar_t__ obj_type; } ;
struct TYPE_2__ {struct i40iw_virtchnl_op_buf vchnl_msg; } ;
struct i40iw_hmc_info {int dummy; } ;
struct i40iw_vfdev {int vf_id; int pf_dev; int msg_count; int pf_hmc_initialized; TYPE_1__ vf_msg_buffer; struct i40iw_hmc_info hmc_info; } ;
struct i40iw_hmc_del_obj_info {int is_pf; scalar_t__ rsrc_type; int count; int start_idx; struct i40iw_hmc_info* hmc_info; } ;
typedef int info ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int ,scalar_t__) ;
 int FUNC_1 (int ,struct i40iw_hmc_del_obj_info*,int) ;
 int FUNC_2 (struct i40iw_hmc_del_obj_info*,int ,int) ;
 int FUNC_3 (int ,int ,struct i40iw_virtchnl_op_buf*,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_2)
{
 struct i40iw_vfdev *VAR_3 = (struct i40iw_vfdev *)VAR_2;
 struct i40iw_hmc_info *VAR_4 = &VAR_3->hmc_info;
 struct i40iw_virtchnl_op_buf *VAR_5 = &VAR_3->vf_msg_buffer.vchnl_msg;
 struct i40iw_hmc_del_obj_info VAR_6;
 struct i40iw_virtchnl_hmc_obj_range *VAR_7;
 enum i40iw_status_code VAR_8 = VAR_1;

 if (!VAR_3->pf_hmc_initialized)
  goto del_out;

 VAR_7 = (struct i40iw_virtchnl_hmc_obj_range *)VAR_5->iw_chnl_buf;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.hmc_info = VAR_4;
 VAR_6.is_pf = 0;
 VAR_6.rsrc_type = (u32)VAR_7->obj_type;
 VAR_6.start_idx = VAR_7->start_index;
 VAR_6.count = VAR_7->obj_count;
 FUNC_0(VAR_3->pf_dev, VAR_0,
      "I40IW_VCHNL_OP_DEL_HMC_OBJ_RANGE.  Delete %u type %u objects\n",
      VAR_6.count, VAR_6.rsrc_type);
 VAR_8 = FUNC_1(VAR_3->pf_dev, &VAR_6, 0);
del_out:
 VAR_3->msg_count--;
 FUNC_3(VAR_3->pf_dev, VAR_3->vf_id, VAR_5, (u16)VAR_8);
}
