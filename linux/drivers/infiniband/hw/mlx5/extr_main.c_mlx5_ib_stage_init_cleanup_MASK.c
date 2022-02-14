
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int memic_alloc_pages; } ;
struct mlx5_ib_dev {TYPE_1__ dm; int mr_srcu; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx5_ib_dev*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mlx5_ib_dev *VAR_2)
{
 FUNC_4(VAR_2);
 if (FUNC_0(VAR_0)) {
  FUNC_5(&VAR_2->mr_srcu);
  FUNC_3(&VAR_2->mr_srcu);
 }

 FUNC_1(!FUNC_2(VAR_2->dm.memic_alloc_pages, VAR_1));
}
