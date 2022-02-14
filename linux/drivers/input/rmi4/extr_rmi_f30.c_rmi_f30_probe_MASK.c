
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rmi_function {int dev; struct rmi_device* rmi_dev; } ;
struct rmi_driver_data {scalar_t__ input; } ;
struct TYPE_2__ {scalar_t__ disable; } ;
struct rmi_device_platform_data {TYPE_1__ f30_data; } ;
struct rmi_device {int dev; } ;
struct f30_data {scalar_t__ input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rmi_driver_data* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,struct f30_data*) ;
 struct f30_data* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct rmi_function*,struct f30_data*) ;
 struct rmi_device_platform_data* FUNC_5 (struct rmi_device*) ;

__attribute__((used)) static int FUNC_6(struct rmi_function *VAR_3)
{
 struct rmi_device *VAR_4 = VAR_3->rmi_dev;
 const struct rmi_device_platform_data *VAR_5 =
     FUNC_5(VAR_4);
 struct rmi_driver_data *VAR_6 = FUNC_0(&VAR_4->dev);
 struct f30_data *VAR_7;
 int VAR_8;

 if (VAR_5->f30_data.disable)
  return 0;

 if (!VAR_6->input) {
  FUNC_1(&VAR_3->dev, "F30: no input device found, ignoring\n");
  return -VAR_1;
 }

 VAR_7 = FUNC_3(&VAR_3->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->input = VAR_6->input;

 VAR_8 = FUNC_4(VAR_3, VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_2(&VAR_3->dev, VAR_7);
 return 0;
}
