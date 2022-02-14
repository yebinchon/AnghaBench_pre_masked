
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct mlx5_ib_qp* in; int mdct; } ;
struct TYPE_3__ {int device; } ;
struct mlx5_ib_qp {scalar_t__ state; TYPE_2__ dct; TYPE_1__ ibqp; } ;
struct mlx5_ib_dev {int mdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx5_ib_qp*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct mlx5_ib_dev*,char*,int) ;
 struct mlx5_ib_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mlx5_ib_qp *VAR_1)
{
 struct mlx5_ib_dev *VAR_2 = FUNC_3(VAR_1->ibqp.device);

 if (VAR_1->state == VAR_0) {
  int VAR_3;

  VAR_3 = FUNC_1(VAR_2->mdev, &VAR_1->dct.mdct);
  if (VAR_3) {
   FUNC_2(VAR_2, "failed to destroy DCT %d\n", VAR_3);
   return VAR_3;
  }
 }

 FUNC_0(VAR_1->dct.in);
 FUNC_0(VAR_1);
 return 0;
}
