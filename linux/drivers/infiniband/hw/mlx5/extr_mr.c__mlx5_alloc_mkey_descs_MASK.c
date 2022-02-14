
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int key; int type; } ;
struct TYPE_3__ {int rkey; int lkey; } ;
struct mlx5_ib_mr {int access_mode; int desc_size; int max_descs; TYPE_2__ mmkey; TYPE_1__ ibmr; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_pd {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mlx5_ib_mr*,int,int) ;
 int FUNC_1 (int ,TYPE_2__*,int *,int) ;
 int FUNC_2 (struct mlx5_ib_mr*) ;
 int FUNC_3 (struct ib_pd*,int *,int,int,int) ;
 struct mlx5_ib_dev* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ib_pd *VAR_1, struct mlx5_ib_mr *VAR_2,
      int VAR_3, int VAR_4, int VAR_5,
      int VAR_6, u32 *VAR_7, int VAR_8)
{
 struct mlx5_ib_dev *VAR_9 = FUNC_4(VAR_1->device);
 int VAR_10;

 VAR_2->access_mode = VAR_6;
 VAR_2->desc_size = VAR_4;
 VAR_2->max_descs = VAR_3;

 VAR_10 = FUNC_0(VAR_1->device, VAR_2, VAR_3, VAR_4);
 if (VAR_10)
  return VAR_10;

 FUNC_3(VAR_1, VAR_7, VAR_3, VAR_6, VAR_5);

 VAR_10 = FUNC_1(VAR_9->mdev, &VAR_2->mmkey, VAR_7, VAR_8);
 if (VAR_10)
  goto err_free_descs;

 VAR_2->mmkey.type = VAR_0;
 VAR_2->ibmr.lkey = VAR_2->mmkey.key;
 VAR_2->ibmr.rkey = VAR_2->mmkey.key;

 return 0;

err_free_descs:
 FUNC_2(VAR_2);
 return VAR_10;
}
