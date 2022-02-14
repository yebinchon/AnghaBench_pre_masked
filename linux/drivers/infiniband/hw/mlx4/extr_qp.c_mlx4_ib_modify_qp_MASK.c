
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_sqp {scalar_t__ roce_v2_gsi; } ;
struct mlx4_ib_qp {scalar_t__ mlx4_ib_qp_type; } ;
struct ib_udata {int dummy; } ;
struct ib_qp_attr {int dummy; } ;
struct ib_qp {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ib_qp*,struct ib_qp_attr*,int,struct ib_udata*) ;
 int FUNC_1 (scalar_t__,struct ib_qp_attr*,int) ;
 int FUNC_2 (char*,int) ;
 struct mlx4_ib_qp* FUNC_3 (struct ib_qp*) ;
 struct mlx4_ib_sqp* FUNC_4 (struct mlx4_ib_qp*) ;

int FUNC_5(struct ib_qp *VAR_1, struct ib_qp_attr *VAR_2,
        int VAR_3, struct ib_udata *VAR_4)
{
 struct mlx4_ib_qp *VAR_5 = FUNC_3(VAR_1);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 if (VAR_5->mlx4_ib_qp_type == VAR_0) {
  struct mlx4_ib_sqp *VAR_7 = FUNC_4(VAR_5);
  int VAR_8 = 0;

  if (VAR_7->roce_v2_gsi)
   VAR_8 = FUNC_1(VAR_7->roce_v2_gsi, VAR_2, VAR_3);
  if (VAR_8)
   FUNC_2("Failed to modify GSI QP for RoCEv2 (%d)\n",
          VAR_8);
 }
 return VAR_6;
}
