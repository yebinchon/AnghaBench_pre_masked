
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; } ;
struct mlx5_ib_ucontext {int devx_uid; TYPE_1__ ibucontext; } ;
struct mlx5_ib_dev {int devx_whitelist_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 struct mlx5_ib_dev* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mlx5_ib_ucontext *VAR_2, void *VAR_3)
{
 if (FUNC_0(VAR_3)) {
  struct mlx5_ib_dev *VAR_4;

  if (VAR_2->devx_uid)
   return VAR_2->devx_uid;

  VAR_4 = FUNC_1(VAR_2->ibucontext.device);
  if (VAR_4->devx_whitelist_uid)
   return VAR_4->devx_whitelist_uid;

  return -VAR_1;
 }

 if (!VAR_2->devx_uid)
  return -VAR_0;

 return VAR_2->devx_uid;
}
