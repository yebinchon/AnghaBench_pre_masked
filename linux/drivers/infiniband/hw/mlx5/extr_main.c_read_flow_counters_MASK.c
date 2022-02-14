
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_read_counters_attr {int * out; struct mlx5_fc* hw_cntrs_hndl; } ;
struct mlx5_ib_dev {int mdev; } ;
struct mlx5_fc {int dummy; } ;
struct ib_device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,struct mlx5_fc*,int *,int *) ;
 struct mlx5_ib_dev* FUNC_1 (struct ib_device*) ;

__attribute__((used)) static int FUNC_2(struct ib_device *VAR_2,
         struct mlx5_read_counters_attr *VAR_3)
{
 struct mlx5_fc *VAR_4 = VAR_3->hw_cntrs_hndl;
 struct mlx5_ib_dev *VAR_5 = FUNC_1(VAR_2);

 return FUNC_0(VAR_5->mdev, VAR_4,
        &VAR_3->out[VAR_1],
        &VAR_3->out[VAR_0]);
}
