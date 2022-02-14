
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlx5_ib_dev {int dummy; } ;
struct mlx5_ib_counters {int set_id; } ;


 struct mlx5_ib_counters* FUNC_0 (struct mlx5_ib_dev*,int ) ;

u16 FUNC_1(struct mlx5_ib_dev *VAR_0, u8 VAR_1)
{
 const struct mlx5_ib_counters *VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2->set_id;
}
