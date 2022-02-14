
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int general_caps; } ;
struct mlx5_ib_dev {int odp_pf_eq; TYPE_1__ odp_caps; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_ib_dev*,int *) ;

void FUNC_1(struct mlx5_ib_dev *VAR_1)
{
 if (!(VAR_1->odp_caps.general_caps & VAR_0))
  return;

 FUNC_0(VAR_1, &VAR_1->odp_pf_eq);
}
