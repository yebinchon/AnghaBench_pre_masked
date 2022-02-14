
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_xrcd {int device; } ;
struct ib_udata {int dummy; } ;
struct TYPE_2__ {int xrcdn; } ;


 int FUNC_0 (struct ib_xrcd*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct mlx5_ib_dev*,char*,int ) ;
 struct mlx5_ib_dev* FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (struct ib_xrcd*) ;

int FUNC_5(struct ib_xrcd *VAR_0, struct ib_udata *VAR_1)
{
 struct mlx5_ib_dev *VAR_2 = FUNC_3(VAR_0->device);
 u32 VAR_3 = FUNC_4(VAR_0)->xrcdn;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->mdev, VAR_3, 0);
 if (VAR_4)
  FUNC_2(VAR_2, "failed to dealloc xrcdn 0x%x\n", VAR_3);

 FUNC_0(VAR_0);
 return 0;
}
