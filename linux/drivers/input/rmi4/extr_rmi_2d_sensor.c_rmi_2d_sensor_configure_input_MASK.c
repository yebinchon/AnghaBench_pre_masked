
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_function {struct rmi_device* rmi_dev; } ;
struct rmi_driver_data {scalar_t__ input; } ;
struct rmi_device {int dev; } ;
struct rmi_2d_sensor {scalar_t__ input; } ;


 int VAR_0 ;
 struct rmi_driver_data* FUNC_0 (int *) ;
 int FUNC_1 (struct rmi_2d_sensor*) ;

int FUNC_2(struct rmi_function *VAR_1,
     struct rmi_2d_sensor *VAR_2)
{
 struct rmi_device *VAR_3 = VAR_1->rmi_dev;
 struct rmi_driver_data *VAR_4 = FUNC_0(&VAR_3->dev);

 if (!VAR_4->input)
  return -VAR_0;

 VAR_2->input = VAR_4->input;
 FUNC_1(VAR_2);

 return 0;
}
