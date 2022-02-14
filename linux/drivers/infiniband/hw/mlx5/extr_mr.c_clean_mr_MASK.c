
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_ib_mr {int allocated_from_cache; TYPE_3__* sig; } ;
struct mlx5_ib_dev {int mdev; } ;
struct TYPE_5__ {int psv_idx; } ;
struct TYPE_4__ {int psv_idx; } ;
struct TYPE_6__ {TYPE_2__ psv_wire; TYPE_1__ psv_memory; } ;


 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_ib_mr*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mlx5_ib_mr*) ;
 int FUNC_4 (struct mlx5_ib_dev*,char*,int ) ;

__attribute__((used)) static void FUNC_5(struct mlx5_ib_dev *VAR_0, struct mlx5_ib_mr *VAR_1)
{
 int VAR_2 = VAR_1->allocated_from_cache;

 if (VAR_1->sig) {
  if (FUNC_2(VAR_0->mdev,
       VAR_1->sig->psv_memory.psv_idx))
   FUNC_4(VAR_0, "failed to destroy mem psv %d\n",
         VAR_1->sig->psv_memory.psv_idx);
  if (FUNC_2(VAR_0->mdev,
       VAR_1->sig->psv_wire.psv_idx))
   FUNC_4(VAR_0, "failed to destroy wire psv %d\n",
         VAR_1->sig->psv_wire.psv_idx);
  FUNC_1(VAR_1->sig);
  VAR_1->sig = ((void*)0);
 }

 if (!VAR_2) {
  FUNC_0(VAR_0, VAR_1);
  FUNC_3(VAR_1);
 }
}
