
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pd; scalar_t__ cq; scalar_t__ qp; } ;
struct mlx5_ib_dev {TYPE_1__ umrc; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (struct mlx5_ib_dev*,char*) ;
 int FUNC_4 (struct mlx5_ib_dev*) ;

__attribute__((used)) static void FUNC_5(struct mlx5_ib_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1)
  FUNC_3(VAR_0, "mr cache cleanup failed\n");

 if (VAR_0->umrc.qp)
  FUNC_2(VAR_0->umrc.qp, ((void*)0));
 if (VAR_0->umrc.cq)
  FUNC_1(VAR_0->umrc.cq);
 if (VAR_0->umrc.pd)
  FUNC_0(VAR_0->umrc.pd);
}
