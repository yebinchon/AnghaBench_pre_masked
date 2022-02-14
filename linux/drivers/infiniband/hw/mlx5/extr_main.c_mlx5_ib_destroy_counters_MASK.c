
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_mcounters {scalar_t__ hw_cntrs_hndl; } ;
struct ib_counters {int device; } ;
struct TYPE_2__ {int mdev; } ;


 int FUNC_0 (struct ib_counters*) ;
 int FUNC_1 (struct mlx5_ib_mcounters*) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct mlx5_ib_mcounters* FUNC_3 (struct ib_counters*) ;
 TYPE_1__* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ib_counters *VAR_0)
{
 struct mlx5_ib_mcounters *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_0);
 if (VAR_1->hw_cntrs_hndl)
  FUNC_2(FUNC_4(VAR_0->device)->mdev,
    VAR_1->hw_cntrs_hndl);

 FUNC_1(VAR_1);

 return 0;
}
