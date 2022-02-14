
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_device {int dev_id; int task_wq; int opts; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct rbd_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rbd_device*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct device *VAR_2)
{
 struct rbd_device *VAR_3 = FUNC_1(VAR_2);
 bool VAR_4 = !!VAR_3->opts;

 if (VAR_4) {
  FUNC_0(VAR_3->task_wq);
  FUNC_2(&VAR_1, VAR_3->dev_id);
 }

 FUNC_4(VAR_3);






 if (VAR_4)
  FUNC_3(VAR_0);
}
