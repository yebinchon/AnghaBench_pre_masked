
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct i40iw_virtchnl_op_buf {scalar_t__ iw_chnl_buf; } ;
struct i40iw_virtchnl_hmc_obj_range {size_t obj_type; int obj_count; int start_index; } ;
struct i40iw_hmc_info {TYPE_2__* hmc_obj; } ;
struct TYPE_3__ {struct i40iw_virtchnl_op_buf vchnl_msg; } ;
struct i40iw_vfdev {int pf_hmc_initialized; int vf_id; int pf_dev; int msg_count; struct i40iw_hmc_info hmc_info; scalar_t__ pmf_index; TYPE_1__ vf_msg_buffer; } ;
struct i40iw_hmc_create_obj_info {int is_pf; scalar_t__ rsrc_type; int count; int start_idx; int entry_type; struct i40iw_hmc_info* hmc_info; } ;
typedef int info ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
struct TYPE_4__ {int cnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,struct i40iw_hmc_create_obj_info*) ;
 int FUNC_3 (struct i40iw_hmc_create_obj_info*,int ,int) ;
 int FUNC_4 (int ,int ,struct i40iw_virtchnl_op_buf*,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_4)
{
 struct i40iw_vfdev *VAR_5 = (struct i40iw_vfdev *)VAR_4;
 struct i40iw_hmc_info *VAR_6 = &VAR_5->hmc_info;
 struct i40iw_virtchnl_op_buf *VAR_7 = &VAR_5->vf_msg_buffer.vchnl_msg;
 struct i40iw_hmc_create_obj_info VAR_8;
 struct i40iw_virtchnl_hmc_obj_range *VAR_9;
 enum i40iw_status_code VAR_10;

 if (!VAR_5->pf_hmc_initialized) {
  VAR_10 = FUNC_1(VAR_5->pf_dev, (u8)VAR_5->pmf_index, ((void*)0));
  if (VAR_10)
   goto add_out;
  VAR_5->pf_hmc_initialized = 1;
 }

 VAR_9 = (struct i40iw_virtchnl_hmc_obj_range *)VAR_7->iw_chnl_buf;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.hmc_info = VAR_6;
 VAR_8.is_pf = 0;
 VAR_8.rsrc_type = (u32)VAR_9->obj_type;
 VAR_8.entry_type = (VAR_8.rsrc_type == VAR_1) ? VAR_3 : VAR_2;
 VAR_8.start_idx = VAR_9->start_index;
 VAR_8.count = VAR_9->obj_count;
 FUNC_0(VAR_5->pf_dev, VAR_0,
      "I40IW_VCHNL_OP_ADD_HMC_OBJ_RANGE.  Add %u type %u objects\n",
      VAR_8.count, VAR_8.rsrc_type);
 VAR_10 = FUNC_2(VAR_5->pf_dev, &VAR_8);
 if (!VAR_10)
  VAR_5->hmc_info.hmc_obj[VAR_9->obj_type].cnt = VAR_9->obj_count;
add_out:
 VAR_5->msg_count--;
 FUNC_4(VAR_5->pf_dev, VAR_5->vf_id, VAR_7, (u16)VAR_10);
}
