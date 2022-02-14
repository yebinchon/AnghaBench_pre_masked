
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct i40iw_sc_dev {TYPE_1__** vf_dev; } ;
struct TYPE_4__ {unsigned int max_enabled_vfs; struct i40iw_sc_dev sc_dev; } ;
struct i40iw_handler {TYPE_2__ device; } ;
struct i40e_info {int dummy; } ;
struct i40e_client {int dummy; } ;
struct TYPE_3__ {scalar_t__ vf_id; } ;


 struct i40iw_handler* FUNC_0 (struct i40e_info*) ;

__attribute__((used)) static int FUNC_1(struct i40e_info *VAR_0,
       struct i40e_client *VAR_1,
       u32 VAR_2)
{
 struct i40iw_handler *VAR_3;
 struct i40iw_sc_dev *VAR_4;
 unsigned int VAR_5;

 VAR_3 = FUNC_0(VAR_0);
 if (!VAR_3)
  return 0;

 VAR_4 = &VAR_3->device.sc_dev;

 for (VAR_5 = 0; VAR_5 < VAR_3->device.max_enabled_vfs; VAR_5++) {
  if (!VAR_4->vf_dev[VAR_5] || (VAR_4->vf_dev[VAR_5]->vf_id == VAR_2))
   return 1;
 }

 return 0;
}
