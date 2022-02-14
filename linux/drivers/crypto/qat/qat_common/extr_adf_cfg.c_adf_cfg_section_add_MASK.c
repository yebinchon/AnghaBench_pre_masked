
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adf_cfg_section {int list; int param_head; int name; } ;
struct adf_cfg_device_data {int lock; int sec_list; } ;
struct adf_accel_dev {struct adf_cfg_device_data* cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct adf_cfg_section* FUNC_1 (struct adf_accel_dev*,char const*) ;
 int FUNC_2 (int *) ;
 struct adf_cfg_section* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct adf_accel_dev *VAR_2, const char *VAR_3)
{
 struct adf_cfg_device_data *VAR_4 = VAR_2->cfg;
 struct adf_cfg_section *VAR_5 = FUNC_1(VAR_2, VAR_3);

 if (VAR_5)
  return 0;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_5(VAR_5->name, VAR_3, sizeof(VAR_5->name));
 FUNC_0(&VAR_5->param_head);
 FUNC_2(&VAR_4->lock);
 FUNC_4(&VAR_5->list, &VAR_4->sec_list);
 FUNC_6(&VAR_4->lock);
 return 0;
}
