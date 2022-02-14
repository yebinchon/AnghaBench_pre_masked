
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {int length; int rkey; int lkey; } ;
struct TYPE_5__ {int key; } ;
struct mlx5_ib_mr {int npages; int access_flags; TYPE_4__ ibmr; TYPE_1__ mmkey; } ;
struct mlx5_ib_dev {TYPE_3__* mdev; } ;
struct TYPE_6__ {int reg_pages; } ;
struct TYPE_7__ {TYPE_2__ priv; } ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(struct mlx5_ib_dev *VAR_0, struct mlx5_ib_mr *VAR_1,
     int VAR_2, u64 VAR_3, int VAR_4)
{
 VAR_1->npages = VAR_2;
 FUNC_0(VAR_2, &VAR_0->mdev->priv.reg_pages);
 VAR_1->ibmr.lkey = VAR_1->mmkey.key;
 VAR_1->ibmr.rkey = VAR_1->mmkey.key;
 VAR_1->ibmr.length = VAR_3;
 VAR_1->access_flags = VAR_4;
}
