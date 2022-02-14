
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx5_modify_raw_qp_param {int set_mask; int rq_q_ctr_id; } ;
struct TYPE_6__ {int qpn; } ;
struct TYPE_7__ {TYPE_2__ mqp; } ;
struct mlx5_ib_rq {int state; TYPE_3__ base; } ;
struct TYPE_5__ {int dev; } ;
struct mlx5_ib_dev {int mdev; TYPE_1__ ib_dev; } ;
struct ib_pd {int dummy; } ;
struct TYPE_8__ {int uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,void*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (void*,void*,int ,int) ;
 int FUNC_3 (void*,void*,int ,int ) ;
 int FUNC_4 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int ,void*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_4__* FUNC_9 (struct ib_pd*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_10(
 struct mlx5_ib_dev *VAR_12, struct mlx5_ib_rq *VAR_13, int VAR_14,
 const struct mlx5_modify_raw_qp_param *VAR_15, struct ib_pd *VAR_16)
{
 void *VAR_17;
 void *VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_19 = FUNC_4(VAR_8);
 VAR_17 = FUNC_7(VAR_19, VAR_1);
 if (!VAR_17)
  return -VAR_0;

 FUNC_2(VAR_8, VAR_17, VAR_9, VAR_13->state);
 FUNC_2(VAR_8, VAR_17, VAR_11, FUNC_9(VAR_16)->uid);

 VAR_18 = FUNC_0(VAR_8, VAR_17, VAR_5);
 FUNC_2(VAR_18, VAR_18, VAR_10, VAR_14);

 if (VAR_15->set_mask & VAR_3) {
  if (FUNC_1(VAR_12->mdev, VAR_7)) {
   FUNC_3(VAR_8, VAR_17, VAR_6,
       VAR_2);
   FUNC_2(VAR_18, VAR_18, VAR_4, VAR_15->rq_q_ctr_id);
  } else
   FUNC_5(
    &VAR_12->ib_dev.dev,
    "RAW PACKET QP counters are not supported on current FW\n");
 }

 VAR_20 = FUNC_8(VAR_12->mdev, VAR_13->base.mqp.qpn, VAR_17, VAR_19);
 if (VAR_20)
  goto out;

 VAR_13->state = VAR_14;

out:
 FUNC_6(VAR_17);
 return VAR_20;
}
