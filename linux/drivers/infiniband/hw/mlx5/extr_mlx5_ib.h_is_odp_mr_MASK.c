
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_mr {TYPE_1__* umem; } ;
struct TYPE_2__ {scalar_t__ is_odp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct mlx5_ib_mr *VAR_1)
{
 return FUNC_0(VAR_0) && VAR_1->umem &&
        VAR_1->umem->is_odp;
}
