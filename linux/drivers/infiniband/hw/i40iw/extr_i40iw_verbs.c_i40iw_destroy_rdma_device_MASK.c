
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40iw_ib_device {int ibdev; TYPE_1__* iwdev; } ;
struct TYPE_2__ {int use_count; int close_wq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int ) ;

void FUNC_4(struct i40iw_ib_device *VAR_1)
{
 FUNC_2(&VAR_1->ibdev);
 FUNC_3(VAR_1->iwdev->close_wq,
      !FUNC_0(&VAR_1->iwdev->use_count),
      VAR_0);
 FUNC_1(&VAR_1->ibdev);
}
