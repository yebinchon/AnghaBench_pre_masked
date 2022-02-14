
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_mr {int umem; } ;
struct ib_ucontext_per_mm {int dummy; } ;
struct TYPE_2__ {struct ib_ucontext_per_mm* per_mm; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mlx5_ib_mr*) ;
 TYPE_1__* FUNC_2 (int ) ;

__attribute__((used)) static struct ib_ucontext_per_mm *FUNC_3(struct mlx5_ib_mr *VAR_0)
{
 if (FUNC_0(!VAR_0 || !FUNC_1(VAR_0)))
  return ((void*)0);

 return FUNC_2(VAR_0->umem)->per_mm;
}
