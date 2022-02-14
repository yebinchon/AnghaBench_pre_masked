
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wqe_shift; scalar_t__ offset; } ;
struct mlx4_ib_qp {TYPE_1__ rq; } ;


 void* FUNC_0 (struct mlx4_ib_qp*,scalar_t__) ;

__attribute__((used)) static void *FUNC_1(struct mlx4_ib_qp *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0, VAR_0->rq.offset + (VAR_1 << VAR_0->rq.wqe_shift));
}
