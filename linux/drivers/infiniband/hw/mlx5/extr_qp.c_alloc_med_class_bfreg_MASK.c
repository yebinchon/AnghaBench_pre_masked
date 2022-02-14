
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int dummy; } ;
struct mlx5_bfreg_info {scalar_t__* count; } ;


 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_bfreg_info*) ;
 int FUNC_1 (struct mlx5_ib_dev*,struct mlx5_bfreg_info*) ;

__attribute__((used)) static int FUNC_2(struct mlx5_ib_dev *VAR_0,
     struct mlx5_bfreg_info *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1);
 int VAR_3;

 if (VAR_2 < 0)
  return VAR_2;

 for (VAR_3 = VAR_2; VAR_3 < FUNC_0(VAR_0, VAR_1); VAR_3++) {
  if (VAR_1->count[VAR_3] < VAR_1->count[VAR_2])
   VAR_2 = VAR_3;
  if (!VAR_1->count[VAR_2])
   break;
 }

 VAR_1->count[VAR_2]++;
 return VAR_2;
}
