
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_sc_dev {scalar_t__ back_dev; } ;
struct i40iw_device {int reset; int vsi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i40iw_device*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct i40iw_device*) ;

void FUNC_3(struct i40iw_sc_dev *VAR_1)
{
 struct i40iw_device *VAR_2 = (struct i40iw_device *)VAR_1->back_dev;

 FUNC_1(&VAR_2->vsi, VAR_0, 0);
 if (FUNC_0(VAR_2)) {
  VAR_2->reset = 1;
  FUNC_2(VAR_2);
 }
}
