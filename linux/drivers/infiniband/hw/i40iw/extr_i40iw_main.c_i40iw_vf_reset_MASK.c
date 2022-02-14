
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct i40iw_virt_mem {int size; struct i40iw_vfdev* va; } ;
struct i40iw_vfdev {scalar_t__ vf_id; int iw_vf_idx; int hmc_info; } ;
struct i40iw_sc_dev {int hw; struct i40iw_vfdev** vf_dev; scalar_t__ back_dev; } ;
struct i40iw_hmc_obj_info {int dummy; } ;
struct i40iw_hmc_fcn_info {int free_fcn; int iw_vf_idx; scalar_t__ vf_id; } ;
struct TYPE_4__ {struct i40iw_sc_dev sc_dev; } ;
struct i40iw_handler {TYPE_1__ device; } ;
struct TYPE_6__ {TYPE_2__* pestat; } ;
struct i40iw_device {TYPE_3__ vsi; } ;
struct i40e_info {int dummy; } ;
struct i40e_client {int dummy; } ;
typedef int hmc_fcn_info ;
struct TYPE_5__ {int lock; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct i40iw_sc_dev*,struct i40iw_hmc_fcn_info*) ;
 int FUNC_1 (struct i40iw_sc_dev*,int *,int,int) ;
 struct i40iw_handler* FUNC_2 (struct i40e_info*) ;
 int FUNC_3 (int ,struct i40iw_virt_mem*) ;
 int FUNC_4 (struct i40iw_hmc_fcn_info*,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct i40e_info *VAR_2, struct i40e_client *VAR_3, u32 VAR_4)
{
 struct i40iw_handler *VAR_5;
 struct i40iw_sc_dev *VAR_6;
 struct i40iw_hmc_fcn_info VAR_7;
 struct i40iw_virt_mem VAR_8;
 struct i40iw_vfdev *VAR_9;
 unsigned int VAR_10;
 unsigned long VAR_11;
 struct i40iw_device *VAR_12;

 VAR_5 = FUNC_2(VAR_2);
 if (!VAR_5)
  return;

 VAR_6 = &VAR_5->device.sc_dev;
 VAR_12 = (struct i40iw_device *)VAR_6->back_dev;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (!VAR_6->vf_dev[VAR_10] || (VAR_6->vf_dev[VAR_10]->vf_id != VAR_4))
   continue;

  VAR_9 = VAR_6->vf_dev[VAR_10];
  FUNC_5(&VAR_12->vsi.pestat->lock, VAR_11);
  VAR_6->vf_dev[VAR_10] = ((void*)0);
  FUNC_6(&VAR_12->vsi.pestat->lock, VAR_11);
  FUNC_1(VAR_6, &VAR_9->hmc_info, 0, 0);

  FUNC_4(&VAR_7, 0, sizeof(VAR_7));
  VAR_7.vf_id = VAR_4;
  VAR_7.iw_vf_idx = VAR_9->iw_vf_idx;
  VAR_7.free_fcn = 1;
  FUNC_0(VAR_6, &VAR_7);

  VAR_8.va = VAR_9;
  VAR_8.size = sizeof(struct i40iw_vfdev) +
     sizeof(struct i40iw_hmc_obj_info) * VAR_0;
  FUNC_3(VAR_6->hw, &VAR_8);
  break;
 }
}
