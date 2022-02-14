
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf_cfg_device_data {int lock; } ;
struct adf_accel_dev {struct adf_cfg_device_data* cfg; } ;


 int FUNC_0 (struct adf_accel_dev*,char const*,char const*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct adf_accel_dev *VAR_0,
       const char *VAR_1, const char *VAR_2,
       char *VAR_3)
{
 struct adf_cfg_device_data *VAR_4 = VAR_0->cfg;
 int VAR_5;

 FUNC_1(&VAR_4->lock);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_4->lock);
 return VAR_5;
}
