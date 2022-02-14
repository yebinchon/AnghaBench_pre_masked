
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dfl_fpga_port_ops {int (* get_id ) (struct platform_device*) ;} ;
struct dfl_feature_platform_data {int id; } ;


 int VAR_0 ;
 struct dfl_feature_platform_data* FUNC_0 (int *) ;
 struct dfl_fpga_port_ops* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct dfl_fpga_port_ops*) ;
 int FUNC_3 (struct platform_device*) ;

int FUNC_4(struct platform_device *VAR_1, void *VAR_2)
{
 struct dfl_feature_platform_data *VAR_3 = FUNC_0(&VAR_1->dev);
 struct dfl_fpga_port_ops *VAR_4;

 if (VAR_3->id != VAR_0)
  return VAR_3->id == *(int *)VAR_2;

 VAR_4 = FUNC_1(VAR_1);
 if (!VAR_4 || !VAR_4->get_id)
  return 0;

 VAR_3->id = VAR_4->get_id(VAR_1);
 FUNC_2(VAR_4);

 return VAR_3->id == *(int *)VAR_2;
}
