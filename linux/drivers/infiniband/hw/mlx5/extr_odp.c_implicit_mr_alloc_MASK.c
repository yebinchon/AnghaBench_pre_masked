
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int key; scalar_t__ iova; } ;
struct TYPE_3__ {int rkey; int lkey; struct ib_pd* pd; } ;
struct mlx5_ib_mr {int access_flags; TYPE_2__ mmkey; TYPE_1__ ibmr; int * umem; struct mlx5_ib_dev* dev; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_umem_odp {int umem; } ;
struct ib_pd {int device; } ;


 struct mlx5_ib_mr* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mlx5_ib_mr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct mlx5_ib_dev*,char*,int ,int ,struct mlx5_ib_mr*) ;
 int FUNC_3 (struct mlx5_ib_dev*,char*,int) ;
 int FUNC_4 (struct mlx5_ib_mr*,int ,int ,int ,int) ;
 int VAR_9 ;
 struct mlx5_ib_mr* FUNC_5 (struct mlx5_ib_dev*,int ) ;
 int FUNC_6 (struct mlx5_ib_dev*,struct mlx5_ib_mr*) ;
 struct mlx5_ib_dev* FUNC_7 (int ) ;

__attribute__((used)) static struct mlx5_ib_mr *FUNC_8(struct ib_pd *VAR_10,
         struct ib_umem_odp *VAR_11,
         bool VAR_12, int VAR_13)
{
 struct mlx5_ib_dev *VAR_14 = FUNC_7(VAR_10->device);
 struct mlx5_ib_mr *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_5(VAR_14, VAR_12 ? VAR_4 :
         VAR_5);

 if (FUNC_1(VAR_15))
  return VAR_15;

 VAR_15->ibmr.pd = VAR_10;

 VAR_15->dev = VAR_14;
 VAR_15->access_flags = VAR_13;
 VAR_15->mmkey.iova = 0;
 VAR_15->umem = &VAR_11->umem;

 if (VAR_12) {
  VAR_16 = FUNC_4(VAR_15, 0,
      VAR_9,
      VAR_7,
      VAR_2 |
      VAR_3 |
      VAR_1);

 } else {
  VAR_16 = FUNC_4(VAR_15, 0,
      VAR_6,
      VAR_8,
      VAR_3 |
      VAR_1 |
      VAR_0);
 }

 if (VAR_16)
  goto fail;

 VAR_15->ibmr.lkey = VAR_15->mmkey.key;
 VAR_15->ibmr.rkey = VAR_15->mmkey.key;

 FUNC_2(VAR_14, "key %x dev %p mr %p\n",
      VAR_15->mmkey.key, VAR_14->mdev, VAR_15);

 return VAR_15;

fail:
 FUNC_3(VAR_14, "Failed to register MKEY %d\n", VAR_16);
 FUNC_6(VAR_14, VAR_15);

 return FUNC_0(VAR_16);
}
