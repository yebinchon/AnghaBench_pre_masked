
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_srq {int db; int buf; int wrid; } ;
struct mlx5_ib_dev {int mdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct mlx5_ib_dev *VAR_0, struct mlx5_ib_srq *VAR_1)
{
 FUNC_0(VAR_1->wrid);
 FUNC_2(VAR_0->mdev, &VAR_1->buf);
 FUNC_1(VAR_0->mdev, &VAR_1->db);
}
