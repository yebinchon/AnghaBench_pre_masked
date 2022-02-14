
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_ib_qp {int has_rq; } ;
struct ib_qp_init_attr {scalar_t__ qp_type; scalar_t__ srq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static u32 FUNC_0(struct mlx5_ib_qp *VAR_6, struct ib_qp_init_attr *VAR_7)
{
 if (VAR_7->srq || (VAR_7->qp_type == VAR_1) ||
     (VAR_7->qp_type == VAR_2) ||
     (VAR_7->qp_type == VAR_0))
  return VAR_4;
 else if (!VAR_6->has_rq)
  return VAR_5;
 else
  return VAR_3;
}
