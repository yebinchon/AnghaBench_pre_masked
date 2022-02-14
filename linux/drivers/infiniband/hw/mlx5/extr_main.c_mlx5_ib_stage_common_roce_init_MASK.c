
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {unsigned long long uverbs_ex_cmd_mask; } ;
struct mlx5_ib_dev {int mdev; TYPE_1__ ib_dev; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (struct mlx5_ib_dev*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct mlx5_ib_dev *VAR_6)
{
 u8 VAR_7;

 VAR_6->ib_dev.uverbs_ex_cmd_mask |=
   (1ull << VAR_1) |
   (1ull << VAR_4) |
   (1ull << VAR_3) |
   (1ull << VAR_0) |
   (1ull << VAR_2);
 FUNC_0(&VAR_6->ib_dev, &VAR_5);

 VAR_7 = FUNC_2(VAR_6->mdev) - 1;


 return FUNC_1(VAR_6, VAR_7);
}
