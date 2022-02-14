
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int dummy; } ;
struct ib_umem {int dummy; } ;
typedef int __be64 ;


 void FUNC_0 (struct mlx5_ib_dev*,struct ib_umem*,int,int ,int ,int *,int) ;
 int FUNC_1 (struct ib_umem*) ;

void FUNC_2(struct mlx5_ib_dev *VAR_0, struct ib_umem *VAR_1,
     int VAR_2, __be64 *VAR_3, int VAR_4)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, 0,
          FUNC_1(VAR_1), VAR_3,
          VAR_4);
}
