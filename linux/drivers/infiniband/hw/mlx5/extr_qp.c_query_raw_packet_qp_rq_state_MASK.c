
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int qpn; } ;
struct TYPE_4__ {TYPE_1__ mqp; } ;
struct mlx5_ib_rq {int state; TYPE_2__ base; } ;
struct mlx5_ib_dev {int mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct mlx5_ib_dev *VAR_5,
     struct mlx5_ib_rq *VAR_6,
     u8 *VAR_7)
{
 void *VAR_8;
 void *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_2);
 VAR_8 = FUNC_4(VAR_10, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_11 = FUNC_5(VAR_5->mdev, VAR_6->base.mqp.qpn, VAR_8);
 if (VAR_11)
  goto out;

 VAR_9 = FUNC_0(VAR_2, VAR_8, VAR_3);
 *VAR_7 = FUNC_1(VAR_9, VAR_9, VAR_4);
 VAR_6->state = *VAR_7;

out:
 FUNC_3(VAR_8);
 return VAR_11;
}
