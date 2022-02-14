
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
struct mlx4_ib_qp {int mutex; int gid_list; int port; } ;
struct mlx4_ib_gid_entry {int added; int list; int port; union ib_gid gid; } ;
struct mlx4_ib_dev {int dummy; } ;
struct ib_qp {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx4_ib_gid_entry* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (struct mlx4_ib_dev*,struct mlx4_ib_qp*,union ib_gid*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct mlx4_ib_dev* FUNC_5 (int ) ;
 struct mlx4_ib_qp* FUNC_6 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_7(struct ib_qp *VAR_2, union ib_gid *VAR_3)
{
 struct mlx4_ib_qp *VAR_4 = FUNC_6(VAR_2);
 struct mlx4_ib_dev *VAR_5 = FUNC_5(VAR_2->device);
 struct mlx4_ib_gid_entry *VAR_6;

 VAR_6 = FUNC_0(sizeof *VAR_6, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->gid = *VAR_3;
 if (FUNC_2(VAR_5, VAR_4, VAR_3)) {
  VAR_6->port = VAR_4->port;
  VAR_6->added = 1;
 }

 FUNC_3(&VAR_4->mutex);
 FUNC_1(&VAR_6->list, &VAR_4->gid_list);
 FUNC_4(&VAR_4->mutex);

 return 0;
}
