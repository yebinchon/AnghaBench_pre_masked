
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_qp {scalar_t__ counter_index; } ;
struct mlx4_ib_dev {int dummy; } ;
struct ib_wq {int device; } ;
struct ib_udata {int dummy; } ;
struct ib_qp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_ib_dev*,struct mlx4_ib_qp*,int ,struct ib_udata*) ;
 int FUNC_1 (struct mlx4_ib_qp*) ;
 int FUNC_2 (struct mlx4_ib_dev*,struct mlx4_ib_qp*) ;
 struct mlx4_ib_dev* FUNC_3 (int ) ;
 struct mlx4_ib_qp* FUNC_4 (struct ib_qp*) ;

void FUNC_5(struct ib_wq *VAR_1, struct ib_udata *VAR_2)
{
 struct mlx4_ib_dev *VAR_3 = FUNC_3(VAR_1->device);
 struct mlx4_ib_qp *VAR_4 = FUNC_4((struct ib_qp *)VAR_1);

 if (VAR_4->counter_index)
  FUNC_2(VAR_3, VAR_4);

 FUNC_0(VAR_3, VAR_4, VAR_0, VAR_2);

 FUNC_1(VAR_4);
}
