
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_multiport_info {int list; scalar_t__ ibdev; } ;
struct mlx5_ib_dev {int profile; } ;
typedef void mlx5_core_dev ;


 scalar_t__ FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx5_ib_dev*,int ,int ) ;
 int FUNC_2 (struct mlx5_ib_multiport_info*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (void*) ;
 int VAR_1 ;
 int FUNC_5 (scalar_t__,struct mlx5_ib_multiport_info*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct mlx5_core_dev *VAR_2, void *VAR_3)
{
 struct mlx5_ib_multiport_info *VAR_4;
 struct mlx5_ib_dev *VAR_5;

 if (FUNC_0(VAR_2) && VAR_3 == VAR_2) {
  FUNC_6(VAR_2);
  return;
 }

 if (FUNC_4(VAR_2)) {
  VAR_4 = VAR_3;
  FUNC_7(&VAR_1);
  if (VAR_4->ibdev)
   FUNC_5(VAR_4->ibdev, VAR_4);
  FUNC_3(&VAR_4->list);
  FUNC_8(&VAR_1);
  FUNC_2(VAR_4);
  return;
 }

 VAR_5 = VAR_3;
 FUNC_1(VAR_5, VAR_5->profile, VAR_0);
}
