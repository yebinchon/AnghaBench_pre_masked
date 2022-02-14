
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_sc_dev {scalar_t__ back_dev; } ;
struct i40iw_sc_cq {int dummy; } ;
struct i40iw_device {int dummy; } ;


 int FUNC_0 (struct i40iw_device*,struct i40iw_sc_cq*) ;

void FUNC_1(struct i40iw_sc_dev *VAR_0, struct i40iw_sc_cq *VAR_1)
{
 struct i40iw_device *VAR_2 = (struct i40iw_device *)VAR_0->back_dev;

 FUNC_0(VAR_2, VAR_1);
}
