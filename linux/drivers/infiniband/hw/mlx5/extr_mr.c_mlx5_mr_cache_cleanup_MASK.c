
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stopped; int wq; } ;
struct mlx5_ib_dev {int delay_timer; TYPE_1__ cache; int async_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_ib_dev*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mlx5_ib_dev*) ;

int FUNC_6(struct mlx5_ib_dev *VAR_1)
{
 int VAR_2;

 if (!VAR_1->cache.wq)
  return 0;

 VAR_1->cache.stopped = 1;
 FUNC_3(VAR_1->cache.wq);

 FUNC_5(VAR_1);
 FUNC_4(&VAR_1->async_ctx);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(VAR_1, VAR_2);

 FUNC_2(VAR_1->cache.wq);
 FUNC_1(&VAR_1->delay_timer);

 return 0;
}
