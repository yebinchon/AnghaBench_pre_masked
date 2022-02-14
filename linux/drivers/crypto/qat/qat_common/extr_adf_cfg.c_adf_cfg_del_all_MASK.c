
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf_cfg_device_data {int lock; int sec_list; } ;
struct adf_accel_dev {int status; struct adf_cfg_device_data* cfg; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct adf_accel_dev *VAR_1)
{
 struct adf_cfg_device_data *VAR_2 = VAR_1->cfg;

 FUNC_2(&VAR_2->lock);
 FUNC_0(&VAR_2->sec_list);
 FUNC_3(&VAR_2->lock);
 FUNC_1(VAR_0, &VAR_1->status);
}
