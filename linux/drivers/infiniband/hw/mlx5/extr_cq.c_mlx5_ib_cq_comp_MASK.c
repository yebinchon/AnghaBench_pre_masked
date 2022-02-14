
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_eqe {int dummy; } ;
struct mlx5_core_cq {int dummy; } ;
struct ib_cq {int cq_context; int (* comp_handler ) (struct ib_cq*,int ) ;} ;
struct TYPE_2__ {struct ib_cq ibcq; } ;


 int FUNC_0 (struct ib_cq*,int ) ;
 TYPE_1__* FUNC_1 (struct mlx5_core_cq*) ;

__attribute__((used)) static void FUNC_2(struct mlx5_core_cq *VAR_0, struct mlx5_eqe *VAR_1)
{
 struct ib_cq *VAR_2 = &FUNC_1(VAR_0)->ibcq;

 VAR_2->comp_handler(VAR_2, VAR_2->cq_context);
}
