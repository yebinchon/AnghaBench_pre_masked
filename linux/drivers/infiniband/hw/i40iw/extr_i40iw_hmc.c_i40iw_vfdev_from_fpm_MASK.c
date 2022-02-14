
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u16 ;
struct i40iw_vfdev {scalar_t__ pmf_index; } ;
struct i40iw_sc_dev {struct i40iw_vfdev** vf_dev; } ;


 size_t VAR_0 ;

struct i40iw_vfdev *FUNC_0(struct i40iw_sc_dev *VAR_1, u8 VAR_2)
{
 struct i40iw_vfdev *VAR_3 = ((void*)0);
 u16 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_1->vf_dev[VAR_4] &&
      ((u8)VAR_1->vf_dev[VAR_4]->pmf_index == VAR_2)) {
   VAR_3 = VAR_1->vf_dev[VAR_4];
   break;
  }
 }
 return VAR_3;
}
