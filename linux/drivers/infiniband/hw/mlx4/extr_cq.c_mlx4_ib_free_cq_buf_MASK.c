
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_dev {int dev; } ;
struct mlx4_ib_cq_buf {int entry_size; int buf; } ;


 int FUNC_0 (int ,int,int *) ;

__attribute__((used)) static void FUNC_1(struct mlx4_ib_dev *VAR_0, struct mlx4_ib_cq_buf *VAR_1, int VAR_2)
{
 FUNC_0(VAR_0->dev, (VAR_2 + 1) * VAR_1->entry_size, &VAR_1->buf);
}
