
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedr_dev {int ibdev; int cdev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* iwarp_set_engine_affin ) (int ,int) ;} ;


 scalar_t__ FUNC_0 (struct qedr_dev*) ;
 scalar_t__ FUNC_1 (struct qedr_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qedr_dev*) ;
 int FUNC_5 (struct qedr_dev*) ;
 int FUNC_6 (struct qedr_dev*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void FUNC_8(struct qedr_dev *VAR_0)
{



 FUNC_3(&VAR_0->ibdev);

 FUNC_5(VAR_0);
 FUNC_6(VAR_0);
 FUNC_4(VAR_0);

 if (FUNC_0(VAR_0) && FUNC_1(VAR_0))
  VAR_0->ops->iwarp_set_engine_affin(VAR_0->cdev, 1);

 FUNC_2(&VAR_0->ibdev);
}
