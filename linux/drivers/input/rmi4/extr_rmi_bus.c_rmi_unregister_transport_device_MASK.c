
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_transport_dev {struct rmi_device* rmi_dev; } ;
struct rmi_device {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct rmi_transport_dev *VAR_0)
{
 struct rmi_device *VAR_1 = VAR_0->rmi_dev;

 FUNC_0(&VAR_1->dev);
 FUNC_1(&VAR_1->dev);
}
