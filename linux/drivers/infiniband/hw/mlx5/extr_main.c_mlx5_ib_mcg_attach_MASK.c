
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ib_gid {int raw; } ;
typedef int u16 ;
struct mlx5_ib_qp {int flags; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_qp {int qp_num; scalar_t__ pd; int device; } ;
struct TYPE_2__ {int uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,union ib_gid*,int ,int ) ;
 int FUNC_1 (struct mlx5_ib_dev*,char*) ;
 int FUNC_2 (struct mlx5_ib_dev*,char*,int ,int ) ;
 struct mlx5_ib_dev* FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (scalar_t__) ;
 struct mlx5_ib_qp* FUNC_5 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_6(struct ib_qp *VAR_2, union ib_gid *VAR_3, u16 VAR_4)
{
 struct mlx5_ib_dev *VAR_5 = FUNC_3(VAR_2->device);
 struct mlx5_ib_qp *VAR_6 = FUNC_5(VAR_2);
 int VAR_7;
 u16 VAR_8;

 VAR_8 = VAR_2->pd ?
  FUNC_4(VAR_2->pd)->uid : 0;

 if (VAR_6->flags & VAR_1) {
  FUNC_1(VAR_5, "Attaching a multi cast group to underlay QP is not supported\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_0(VAR_5->mdev, VAR_3, VAR_2->qp_num, VAR_8);
 if (VAR_7)
  FUNC_2(VAR_5, "failed attaching QPN 0x%x, MGID %pI6\n",
        VAR_2->qp_num, VAR_3->raw);

 return VAR_7;
}
