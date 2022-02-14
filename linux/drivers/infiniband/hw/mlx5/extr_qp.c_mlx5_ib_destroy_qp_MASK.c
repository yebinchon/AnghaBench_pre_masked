
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_qp {scalar_t__ qp_sub_type; } ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_udata {int dummy; } ;
struct ib_qp {scalar_t__ qp_type; int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_ib_qp*,struct ib_udata*) ;
 int FUNC_1 (struct mlx5_ib_qp*) ;
 int FUNC_2 (struct mlx5_ib_qp*) ;
 int FUNC_3 (struct ib_qp*) ;
 struct mlx5_ib_dev* FUNC_4 (int ) ;
 struct mlx5_ib_qp* FUNC_5 (struct ib_qp*) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct ib_qp *VAR_2, struct ib_udata *VAR_3)
{
 struct mlx5_ib_dev *VAR_4 = FUNC_4(VAR_2->device);
 struct mlx5_ib_qp *VAR_5 = FUNC_5(VAR_2);

 if (FUNC_6(VAR_2->qp_type == VAR_0))
  return FUNC_3(VAR_2);

 if (VAR_5->qp_sub_type == VAR_1)
  return FUNC_2(VAR_5);

 FUNC_0(VAR_4, VAR_5, VAR_3);

 FUNC_1(VAR_5);

 return 0;
}
