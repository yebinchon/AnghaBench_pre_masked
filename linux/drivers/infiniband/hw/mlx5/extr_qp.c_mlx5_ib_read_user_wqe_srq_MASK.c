
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wqe_shift; int max; } ;
struct mlx5_ib_srq {TYPE_1__ msrq; struct ib_umem* umem; } ;
struct ib_umem {int dummy; } ;


 int FUNC_0 (struct ib_umem*,void*,int,int,int ,int ,int ,int,size_t*) ;

int FUNC_1(struct mlx5_ib_srq *VAR_0,
         int VAR_1,
         void *VAR_2,
         int VAR_3,
         size_t *VAR_4)
{
 struct ib_umem *VAR_5 = VAR_0->umem;
 size_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5,
        VAR_2,
        VAR_3,
        VAR_1,
        0,
        VAR_0->msrq.max,
        VAR_0->msrq.wqe_shift,
        VAR_3,
        &VAR_6);

 if (VAR_7)
  return VAR_7;
 *VAR_4 = VAR_6;
 return 0;
}
