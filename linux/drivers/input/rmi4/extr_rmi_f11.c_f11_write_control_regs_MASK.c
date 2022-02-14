
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rmi_function {struct rmi_device* rmi_dev; } ;
struct rmi_device {int dummy; } ;
struct f11_2d_sensor_queries {int dummy; } ;
struct f11_2d_ctrl {int ctrl0_11; } ;


 int VAR_0 ;
 int FUNC_0 (struct rmi_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct rmi_function *VAR_1,
     struct f11_2d_sensor_queries *VAR_2,
     struct f11_2d_ctrl *VAR_3,
     u16 VAR_4)
{
 struct rmi_device *VAR_5 = VAR_1->rmi_dev;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_4, VAR_3->ctrl0_11,
    VAR_0);
 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
