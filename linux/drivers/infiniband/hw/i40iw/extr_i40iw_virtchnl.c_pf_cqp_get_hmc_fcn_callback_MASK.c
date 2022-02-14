
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct i40iw_virt_mem {int size; struct i40iw_vfdev* va; } ;
struct TYPE_2__ {int vchnl_msg; } ;
struct i40iw_vfdev {size_t iw_vf_idx; scalar_t__ pmf_index; TYPE_1__ vf_msg_buffer; int vf_id; int msg_count; } ;
struct i40iw_sc_dev {int hw; int ** vf_dev; } ;
struct i40iw_ccq_cqe_info {scalar_t__ op_ret_val; int min_err_code; int maj_err_code; scalar_t__ error; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct i40iw_sc_dev*,int ,char*,scalar_t__,...) ;
 int FUNC_1 (int ,struct i40iw_virt_mem*) ;
 int FUNC_2 (struct i40iw_sc_dev*,int ,int *,scalar_t__) ;
 int FUNC_3 (struct i40iw_sc_dev*,int ,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct i40iw_sc_dev *VAR_2, void *VAR_3,
     struct i40iw_ccq_cqe_info *VAR_4)
{
 struct i40iw_vfdev *VAR_5 = VAR_3;
 struct i40iw_virt_mem VAR_6;

 if (VAR_4->error) {
  FUNC_0(VAR_2, VAR_0,
       "CQP Completion Error on Get HMC Function.  Maj = 0x%04x, Minor = 0x%04x\n",
       VAR_4->maj_err_code, VAR_4->min_err_code);
  VAR_2->vf_dev[VAR_5->iw_vf_idx] = ((void*)0);
  FUNC_2(VAR_2, VAR_5->vf_id, &VAR_5->vf_msg_buffer.vchnl_msg,
      (u16)VAR_1);
  VAR_6.va = VAR_5;
  VAR_6.size = sizeof(*VAR_5);
  FUNC_1(VAR_2->hw, &VAR_6);
 } else {
  FUNC_0(VAR_2, VAR_0,
       "CQP Completion Operation Return information = 0x%08x\n",
       VAR_4->op_ret_val);
  VAR_5->pmf_index = (u16)VAR_4->op_ret_val;
  VAR_5->msg_count--;
  FUNC_3(VAR_2,
            VAR_5->vf_id,
            &VAR_5->vf_msg_buffer.vchnl_msg,
            VAR_5->pmf_index);
 }
}
