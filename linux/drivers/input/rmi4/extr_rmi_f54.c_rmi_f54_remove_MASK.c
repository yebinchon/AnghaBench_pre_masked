
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_function {int dev; } ;
struct f54_data {int v4l2; int vdev; } ;


 struct f54_data* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rmi_function *VAR_0)
{
 struct f54_data *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_2(&VAR_1->vdev);
 FUNC_1(&VAR_1->v4l2);
}
