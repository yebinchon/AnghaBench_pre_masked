
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cqe; } ;
struct TYPE_4__ {int cqe_sz; } ;
struct mlx5_ib_cq {TYPE_1__ ibcq; TYPE_2__ mcq; } ;
struct mlx5_cqe64 {int op_own; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct mlx5_ib_cq*,int) ;
 scalar_t__ FUNC_1 (struct mlx5_cqe64*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void *FUNC_3(struct mlx5_ib_cq *VAR_2, int VAR_3)
{
 void *VAR_4 = FUNC_0(VAR_2, VAR_3 & VAR_2->ibcq.cqe);
 struct mlx5_cqe64 *VAR_5;

 VAR_5 = (VAR_2->mcq.cqe_sz == 64) ? VAR_4 : VAR_4 + 64;

 if (FUNC_2(FUNC_1(VAR_5) != VAR_0) &&
     !((VAR_5->op_own & VAR_1) ^ !!(VAR_3 & (VAR_2->ibcq.cqe + 1)))) {
  return VAR_4;
 } else {
  return ((void*)0);
 }
}
