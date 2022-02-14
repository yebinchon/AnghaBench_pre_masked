
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qedr_dev {int num_cnq; TYPE_3__* sgid_tbl; TYPE_3__* sb_array; TYPE_3__* cnq_array; int cdev; TYPE_2__* ops; scalar_t__ sb_start; int iwarp_wq; } ;
struct TYPE_7__ {int pbl; } ;
struct TYPE_6__ {TYPE_1__* common; } ;
struct TYPE_5__ {int (* chain_free ) (int ,int *) ;} ;


 scalar_t__ FUNC_0 (struct qedr_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct qedr_dev*,TYPE_3__*,scalar_t__) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct qedr_dev *VAR_0)
{
 int VAR_1;

 if (FUNC_0(VAR_0))
  FUNC_1(VAR_0->iwarp_wq);

 for (VAR_1 = 0; VAR_1 < VAR_0->num_cnq; VAR_1++) {
  FUNC_3(VAR_0, &VAR_0->sb_array[VAR_1], VAR_0->sb_start + VAR_1);
  VAR_0->ops->common->chain_free(VAR_0->cdev, &VAR_0->cnq_array[VAR_1].pbl);
 }

 FUNC_2(VAR_0->cnq_array);
 FUNC_2(VAR_0->sb_array);
 FUNC_2(VAR_0->sgid_tbl);
}
