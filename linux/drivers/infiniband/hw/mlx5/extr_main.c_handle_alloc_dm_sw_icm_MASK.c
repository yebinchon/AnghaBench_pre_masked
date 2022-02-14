
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct uverbs_attr_bundle {int dummy; } ;
struct TYPE_4__ {int obj_id; } ;
struct mlx5_ib_dm {TYPE_1__ icm_dm; int dev_addr; int size; } ;
struct mlx5_core_dev {int dummy; } ;
struct ib_ucontext {int device; } ;
struct ib_dm_alloc_attr {int length; } ;
struct TYPE_6__ {struct mlx5_core_dev* mdev; } ;
struct TYPE_5__ {int devx_uid; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*,int,int ,int ,int *,int *) ;
 int FUNC_2 (struct mlx5_core_dev*,int,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (struct ib_ucontext*) ;
 int FUNC_7 (struct uverbs_attr_bundle*,int ,int *,int) ;

__attribute__((used)) static int FUNC_8(struct ib_ucontext *VAR_1,
      struct mlx5_ib_dm *VAR_2,
      struct ib_dm_alloc_attr *VAR_3,
      struct uverbs_attr_bundle *VAR_4,
      int VAR_5)
{
 struct mlx5_core_dev *VAR_6 = FUNC_5(VAR_1->device)->mdev;
 u64 VAR_7;
 int VAR_8;




 VAR_7 = FUNC_3(VAR_3->length, FUNC_0(VAR_6));
 VAR_7 = FUNC_4(VAR_7);

 VAR_2->size = VAR_7;
 VAR_8 = FUNC_1(VAR_6, VAR_5, VAR_7,
       FUNC_6(VAR_1)->devx_uid, &VAR_2->dev_addr,
       &VAR_2->icm_dm.obj_id);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_7(VAR_4,
        VAR_0,
        &VAR_2->dev_addr, sizeof(VAR_2->dev_addr));
 if (VAR_8)
  FUNC_2(VAR_6, VAR_5, VAR_2->size,
           FUNC_6(VAR_1)->devx_uid, VAR_2->dev_addr,
           VAR_2->icm_dm.obj_id);

 return VAR_8;
}
