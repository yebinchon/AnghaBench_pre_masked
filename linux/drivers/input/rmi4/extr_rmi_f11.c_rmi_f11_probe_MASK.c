
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_function {int dev; } ;
struct f11_data {int sensor; } ;


 struct f11_data* FUNC_0 (int *) ;
 int FUNC_1 (struct rmi_function*,int *) ;
 int FUNC_2 (struct rmi_function*) ;

__attribute__((used)) static int FUNC_3(struct rmi_function *VAR_0)
{
 int VAR_1;
 struct f11_data *VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_2 = FUNC_0(&VAR_0->dev);
 VAR_1 = FUNC_1(VAR_0, &VAR_2->sensor);
 if (VAR_1)
  return VAR_1;

 return 0;
}
