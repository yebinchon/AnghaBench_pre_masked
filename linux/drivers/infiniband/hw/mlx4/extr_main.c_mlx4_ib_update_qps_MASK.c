
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct net_device {int dev_addr; } ;
struct mlx4_update_qp_params {int smac_index; } ;
struct TYPE_6__ {scalar_t__ smac; int smac_port; int smac_index; } ;
struct TYPE_5__ {int qpn; } ;
struct mlx4_ib_qp {int mutex; TYPE_3__ pri; TYPE_2__ mqp; } ;
struct TYPE_4__ {int * mac; } ;
struct mlx4_ib_dev {int * qp1_proxy_lock; int dev; struct mlx4_ib_qp** qp1_proxy; TYPE_1__ iboe; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int,scalar_t__) ;
 int FUNC_4 (int ,int,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,int ,struct mlx4_update_qp_params*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct mlx4_ib_dev *VAR_3,
          struct net_device *VAR_4,
          int VAR_5)
{
 u64 VAR_6 = 0;
 u64 VAR_7 = VAR_0;
 struct mlx4_ib_qp *VAR_8;

 FUNC_8(&VAR_2);
 VAR_6 = FUNC_2(VAR_4->dev_addr);
 FUNC_9(&VAR_2);

 FUNC_0(&VAR_3->iboe.mac[VAR_5 - 1], VAR_6);


 if (!FUNC_1(VAR_3->dev))
  return;

 FUNC_6(&VAR_3->qp1_proxy_lock[VAR_5 - 1]);
 VAR_8 = VAR_3->qp1_proxy[VAR_5 - 1];
 if (VAR_8) {
  int VAR_9;
  u64 VAR_10;
  struct mlx4_update_qp_params VAR_11;

  FUNC_6(&VAR_8->mutex);
  VAR_10 = VAR_8->pri.smac;
  if (VAR_6 == VAR_10)
   goto unlock;

  VAR_9 = FUNC_3(VAR_3->dev, VAR_5, VAR_6);

  if (VAR_9 < 0)
   goto unlock;

  VAR_11.smac_index = VAR_9;
  if (FUNC_5(VAR_3->dev, VAR_8->mqp.qpn, VAR_1,
       &VAR_11)) {
   VAR_7 = VAR_6;
   goto unlock;
  }

  if (VAR_8->pri.smac_port)
   VAR_7 = VAR_10;
  VAR_8->pri.smac = VAR_6;
  VAR_8->pri.smac_port = VAR_5;
  VAR_8->pri.smac_index = VAR_9;
 }

unlock:
 if (VAR_7 != VAR_0)
  FUNC_4(VAR_3->dev, VAR_5, VAR_7);
 if (VAR_8)
  FUNC_7(&VAR_8->mutex);
 FUNC_7(&VAR_3->qp1_proxy_lock[VAR_5 - 1]);
}
