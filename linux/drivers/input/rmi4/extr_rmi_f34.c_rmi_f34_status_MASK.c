
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_function {int dev; } ;
struct f34_data {int update_status; } ;


 struct f34_data* FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct rmi_function *VAR_0)
{
 struct f34_data *VAR_1 = FUNC_0(&VAR_0->dev);





 return VAR_1->update_status;
}
