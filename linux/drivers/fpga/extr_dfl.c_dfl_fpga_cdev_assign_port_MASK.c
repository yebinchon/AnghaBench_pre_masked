
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dfl_fpga_cdev {int lock; int released_port_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct platform_device* FUNC_0 (struct dfl_fpga_cdev*,int*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct dfl_fpga_cdev *VAR_3, int VAR_4)
{
 struct platform_device *VAR_5;
 int VAR_6 = -VAR_1;

 FUNC_4(&VAR_3->lock);
 VAR_5 = FUNC_0(VAR_3, &VAR_4,
           VAR_2);
 if (!VAR_5)
  goto unlock_exit;

 if (FUNC_2(&VAR_5->dev)) {
  VAR_6 = -VAR_0;
  goto put_dev_exit;
 }

 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6)
  goto put_dev_exit;

 FUNC_3(FUNC_1(&VAR_5->dev));
 VAR_3->released_port_num--;
put_dev_exit:
 FUNC_7(&VAR_5->dev);
unlock_exit:
 FUNC_5(&VAR_3->lock);
 return VAR_6;
}
