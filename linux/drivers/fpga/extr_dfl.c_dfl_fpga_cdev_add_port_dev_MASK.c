
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct dfl_fpga_cdev {int lock; int port_dev_list; } ;
struct dfl_feature_platform_data {TYPE_1__* dev; int node; } ;
struct TYPE_2__ {int dev; } ;


 struct dfl_feature_platform_data* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dfl_fpga_cdev *VAR_0,
           struct platform_device *VAR_1)
{
 struct dfl_feature_platform_data *VAR_2 = FUNC_0(&VAR_1->dev);

 FUNC_3(&VAR_0->lock);
 FUNC_2(&VAR_2->node, &VAR_0->port_dev_list);
 FUNC_1(&VAR_2->dev->dev);
 FUNC_4(&VAR_0->lock);
}
