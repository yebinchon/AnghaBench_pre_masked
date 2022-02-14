
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct mlx5_ib_dev {scalar_t__ fill_delay; } ;


 int VAR_0 ;
 struct mlx5_ib_dev* VAR_1 ;
 struct mlx5_ib_dev* FUNC_0 (int ,struct timer_list*,int ) ;

__attribute__((used)) static void FUNC_1(struct timer_list *VAR_2)
{
 struct mlx5_ib_dev *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);

 VAR_3->fill_delay = 0;
}
