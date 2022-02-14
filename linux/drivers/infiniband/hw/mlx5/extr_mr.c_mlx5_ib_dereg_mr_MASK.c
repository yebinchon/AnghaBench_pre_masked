
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; } ;
struct mlx5_ib_mr {struct mlx5_ib_mr* klm_mr; TYPE_1__ ibmr; struct mlx5_ib_mr* mtt_mr; } ;
struct ib_udata {int dummy; } ;
struct ib_mr {scalar_t__ type; int device; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct mlx5_ib_mr*) ;
 int FUNC_1 (int ) ;
 struct mlx5_ib_mr* FUNC_2 (struct ib_mr*) ;

int FUNC_3(struct ib_mr *VAR_1, struct ib_udata *VAR_2)
{
 struct mlx5_ib_mr *VAR_3 = FUNC_2(VAR_1);

 if (VAR_1->type == VAR_0) {
  FUNC_0(FUNC_1(VAR_3->mtt_mr->ibmr.device), VAR_3->mtt_mr);
  FUNC_0(FUNC_1(VAR_3->klm_mr->ibmr.device), VAR_3->klm_mr);
 }

 FUNC_0(FUNC_1(VAR_1->device), VAR_3);

 return 0;
}
