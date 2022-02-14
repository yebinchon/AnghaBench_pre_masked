
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_driver_data {int * irqdomain; } ;
struct rmi_device {int dev; } ;
struct device {int dummy; } ;


 struct rmi_driver_data* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rmi_device*,int) ;
 int FUNC_3 (struct rmi_device*) ;
 int FUNC_4 (struct rmi_device*) ;
 struct rmi_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0)
{
 struct rmi_device *VAR_1 = FUNC_5(VAR_0);
 struct rmi_driver_data *VAR_2 = FUNC_0(&VAR_1->dev);

 FUNC_2(VAR_1, 0);

 FUNC_1(VAR_2->irqdomain);
 VAR_2->irqdomain = ((void*)0);

 FUNC_3(VAR_1);
 FUNC_4(VAR_1);

 return 0;
}
