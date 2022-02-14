
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int user_td; scalar_t__ qps; int enabled; int mutex; } ;
struct mlx5_ib_dev {TYPE_1__ lb; int mdev; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mlx5_ib_dev *VAR_0, bool VAR_1, bool VAR_2)
{
 FUNC_1(&VAR_0->lb.mutex);
 if (VAR_1)
  VAR_0->lb.user_td--;
 if (VAR_2)
  VAR_0->lb.qps--;

 if (VAR_0->lb.user_td == 1 &&
     VAR_0->lb.qps == 0) {
  if (VAR_0->lb.enabled) {
   FUNC_0(VAR_0->mdev, 0);
   VAR_0->lb.enabled = 0;
  }
 }

 FUNC_2(&VAR_0->lb.mutex);
}
