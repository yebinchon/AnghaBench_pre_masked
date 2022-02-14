
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int general_caps; } ;
struct mlx5_ib_dev {int odp_pf_eq; int null_mkey; int mdev; TYPE_1__ odp_caps; int ib_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct mlx5_ib_dev*,int *) ;
 int VAR_2 ;
 int FUNC_3 (struct mlx5_ib_dev*,char*,int) ;

int FUNC_4(struct mlx5_ib_dev *VAR_3)
{
 int VAR_4 = 0;

 if (!(VAR_3->odp_caps.general_caps & VAR_0))
  return VAR_4;

 FUNC_0(&VAR_3->ib_dev, &VAR_2);

 if (VAR_3->odp_caps.general_caps & VAR_1) {
  VAR_4 = FUNC_1(VAR_3->mdev, &VAR_3->null_mkey);
  if (VAR_4) {
   FUNC_3(VAR_3, "Error getting null_mkey %d\n", VAR_4);
   return VAR_4;
  }
 }

 VAR_4 = FUNC_2(VAR_3, &VAR_3->odp_pf_eq);

 return VAR_4;
}
