
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u64 ;
struct mlx5_mtt {int dummy; } ;
struct TYPE_5__ {int pd; void* size; void* iova; } ;
struct TYPE_4__ {struct ib_pd* pd; } ;
struct mlx5_ib_mr {int access_flags; int desc_size; TYPE_2__ mmkey; struct ib_umem* umem; TYPE_1__ ibmr; } ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_umem {int dummy; } ;
struct ib_pd {int device; } ;
struct TYPE_6__ {int pdn; } ;


 int VAR_0 ;
 struct mlx5_ib_mr* FUNC_0 (int) ;
 int FUNC_1 (struct mlx5_ib_dev*,int ,int) ;
 struct mlx5_ib_mr* FUNC_2 (struct mlx5_ib_dev*,int) ;
 int FUNC_3 (struct mlx5_ib_dev*,char*,int) ;
 int FUNC_4 (struct mlx5_ib_dev*,int) ;
 struct mlx5_ib_dev* FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (struct ib_pd*) ;

__attribute__((used)) static struct mlx5_ib_mr *FUNC_7(
      struct ib_pd *VAR_1, struct ib_umem *VAR_2,
      u64 VAR_3, u64 VAR_4, int VAR_5,
      int VAR_6, int VAR_7, int VAR_8)
{
 struct mlx5_ib_dev *VAR_9 = FUNC_5(VAR_1->device);
 struct mlx5_ib_mr *VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < 1; VAR_12++) {
  VAR_10 = FUNC_2(VAR_9, VAR_7);
  if (VAR_10)
   break;

  VAR_11 = FUNC_1(VAR_9, FUNC_4(VAR_9, VAR_7), 1);
  if (VAR_11 && VAR_11 != -VAR_0) {
   FUNC_3(VAR_9, "add_keys failed, err %d\n", VAR_11);
   break;
  }
 }

 if (!VAR_10)
  return FUNC_0(-VAR_0);

 VAR_10->ibmr.pd = VAR_1;
 VAR_10->umem = VAR_2;
 VAR_10->access_flags = VAR_8;
 VAR_10->desc_size = sizeof(struct mlx5_mtt);
 VAR_10->mmkey.iova = VAR_3;
 VAR_10->mmkey.size = VAR_4;
 VAR_10->mmkey.pd = FUNC_6(VAR_1)->pdn;

 return VAR_10;
}
