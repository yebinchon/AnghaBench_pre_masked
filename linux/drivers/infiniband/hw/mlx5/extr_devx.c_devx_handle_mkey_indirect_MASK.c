
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_core_mkey {int key; void* pd; void* size; void* iova; int type; } ;
struct mlx5_ib_devx_mr {void* ndescs; struct mlx5_core_mkey mmkey; } ;
struct mlx5_ib_dev {TYPE_2__* mdev; } ;
struct devx_obj {struct mlx5_ib_devx_mr devx_mr; } ;
struct TYPE_3__ {int mkey_table; } ;
struct TYPE_4__ {TYPE_1__ priv; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,void*,int ) ;
 void* FUNC_1 (void*,void*,int ) ;
 void* FUNC_2 (void*,void*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,struct mlx5_core_mkey*,int ) ;

__attribute__((used)) static int FUNC_7(struct devx_obj *VAR_11,
         struct mlx5_ib_dev *VAR_12,
         void *VAR_13, void *VAR_14)
{
 struct mlx5_ib_devx_mr *VAR_15 = &VAR_11->devx_mr;
 struct mlx5_core_mkey *VAR_16;
 void *VAR_17;
 u8 VAR_18;

 VAR_16 = &VAR_15->mmkey;
 VAR_17 = FUNC_0(VAR_2, VAR_13, VAR_5);
 VAR_18 = FUNC_1(VAR_17, VAR_17, VAR_6);
 VAR_16->key = FUNC_4(
   FUNC_1(VAR_3, VAR_14, VAR_7)) | VAR_18;
 VAR_16->type = VAR_1;
 VAR_16->iova = FUNC_2(VAR_17, VAR_17, VAR_9);
 VAR_16->size = FUNC_2(VAR_17, VAR_17, VAR_4);
 VAR_16->pd = FUNC_1(VAR_17, VAR_17, VAR_8);
 VAR_15->ndescs = FUNC_1(VAR_17, VAR_17, VAR_10);

 return FUNC_5(FUNC_6(&VAR_12->mdev->priv.mkey_table,
          FUNC_3(VAR_16->key), VAR_16, VAR_0));
}
