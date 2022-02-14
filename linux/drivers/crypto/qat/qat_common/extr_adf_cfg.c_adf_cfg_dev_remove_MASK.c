
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf_cfg_device_data {int debug; int lock; int sec_list; } ;
struct adf_accel_dev {struct adf_cfg_device_data* cfg; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct adf_cfg_device_data*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct adf_accel_dev *VAR_0)
{
 struct adf_cfg_device_data *VAR_1 = VAR_0->cfg;

 if (!VAR_1)
  return;

 FUNC_2(&VAR_1->lock);
 FUNC_0(&VAR_1->sec_list);
 FUNC_4(&VAR_1->lock);
 FUNC_1(VAR_1->debug);
 FUNC_3(VAR_1);
 VAR_0->cfg = ((void*)0);
}
