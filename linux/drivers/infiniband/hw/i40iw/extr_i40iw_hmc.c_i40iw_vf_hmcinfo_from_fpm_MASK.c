
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u16 ;
struct i40iw_sc_dev {TYPE_1__** vf_dev; } ;
struct i40iw_hmc_info {int dummy; } ;
struct TYPE_2__ {struct i40iw_hmc_info hmc_info; scalar_t__ pmf_index; } ;


 size_t VAR_0 ;

struct i40iw_hmc_info *FUNC_0(struct i40iw_sc_dev *VAR_1,
       u8 VAR_2)
{
 struct i40iw_hmc_info *VAR_3 = ((void*)0);
 u16 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_1->vf_dev[VAR_4] &&
      ((u8)VAR_1->vf_dev[VAR_4]->pmf_index == VAR_2)) {
   VAR_3 = &VAR_1->vf_dev[VAR_4]->hmc_info;
   break;
  }
 }
 return VAR_3;
}
