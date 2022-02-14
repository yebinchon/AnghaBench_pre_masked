
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_ib_sq {int tisn; } ;
struct mlx5_core_dev {int dummy; } ;
struct ib_pd {int dummy; } ;
struct TYPE_4__ {int lag_tx_port_affinity; } ;
struct TYPE_3__ {int uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,void*,int ) ;
 int FUNC_1 (void*,void*,int ,int) ;
 int FUNC_2 (void*) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct mlx5_core_dev*,int ,void*,int) ;
 void* VAR_5 ;
 TYPE_1__* FUNC_6 (struct ib_pd*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct mlx5_core_dev *VAR_7,
      struct mlx5_ib_sq *VAR_8, u8 VAR_9,
      struct ib_pd *VAR_10)
{
 void *VAR_11;
 void *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_13 = FUNC_2(VAR_5);
 VAR_11 = FUNC_4(VAR_13, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 FUNC_1(VAR_5, VAR_11, VAR_2.lag_tx_port_affinity, 1);
 FUNC_1(VAR_5, VAR_11, VAR_6, FUNC_6(VAR_10)->uid);

 VAR_12 = FUNC_0(VAR_5, VAR_11, VAR_3);
 FUNC_1(VAR_12, VAR_12, VAR_4, VAR_9);

 VAR_14 = FUNC_5(VAR_7, VAR_8->tisn, VAR_11, VAR_13);

 FUNC_3(VAR_11);

 return VAR_14;
}
