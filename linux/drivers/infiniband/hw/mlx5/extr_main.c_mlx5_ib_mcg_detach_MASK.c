
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ib_gid {int raw; } ;
typedef int u16 ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_qp {int qp_num; scalar_t__ pd; int device; } ;
struct TYPE_2__ {int uid; } ;


 int FUNC_0 (int ,union ib_gid*,int ,int ) ;
 int FUNC_1 (struct mlx5_ib_dev*,char*,int ,int ) ;
 struct mlx5_ib_dev* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct ib_qp *VAR_0, union ib_gid *VAR_1, u16 VAR_2)
{
 struct mlx5_ib_dev *VAR_3 = FUNC_2(VAR_0->device);
 int VAR_4;
 u16 VAR_5;

 VAR_5 = VAR_0->pd ?
  FUNC_3(VAR_0->pd)->uid : 0;
 VAR_4 = FUNC_0(VAR_3->mdev, VAR_1, VAR_0->qp_num, VAR_5);
 if (VAR_4)
  FUNC_1(VAR_3, "failed detaching QPN 0x%x, MGID %pI6\n",
        VAR_0->qp_num, VAR_1->raw);

 return VAR_4;
}
