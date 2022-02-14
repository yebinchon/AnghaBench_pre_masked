
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_function {int dev; } ;
struct f55_data {struct rmi_function* fn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct f55_data*) ;
 struct f55_data* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct rmi_function*) ;

__attribute__((used)) static int FUNC_3(struct rmi_function *VAR_2)
{
 struct f55_data *VAR_3;

 VAR_3 = FUNC_1(&VAR_2->dev, sizeof(struct f55_data), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->fn = VAR_2;
 FUNC_0(&VAR_2->dev, VAR_3);

 return FUNC_2(VAR_2);
}
