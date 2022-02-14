
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_wqe_srq_next_seg {int dummy; } ;
struct TYPE_2__ {int wqe_shift; } ;
struct mlx5_ib_srq {TYPE_1__ msrq; } ;
struct mlx5_ib_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_ib_dev*,char*) ;

__attribute__((used)) static int FUNC_1(struct mlx5_ib_dev *VAR_1,
         struct mlx5_ib_srq *VAR_2,
         void **VAR_3, void **VAR_4,
         int VAR_5)
{
 int VAR_6 = 1 << VAR_2->msrq.wqe_shift;

 if (VAR_6 > VAR_5) {
  FUNC_0(VAR_1, "Couldn't read all of the receive WQE's content\n");
  return -VAR_0;
 }

 *VAR_4 = *VAR_3 + VAR_6;
 *VAR_3 += sizeof(struct mlx5_wqe_srq_next_seg);

 return 0;
}
