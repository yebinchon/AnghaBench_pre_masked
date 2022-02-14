
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_dev {TYPE_1__* mdev; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int bar_addr; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static phys_addr_t FUNC_1(struct mlx5_ib_dev *VAR_3,
     int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->mdev, VAR_2) ? VAR_0 : 1;

 return (VAR_3->mdev->bar_addr >> VAR_1) + VAR_4 / VAR_5;
}
