
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_core_dct {int dummy; } ;
struct TYPE_4__ {struct mlx5_core_dct mdct; } ;
struct mlx5_ib_qp {scalar_t__ state; TYPE_1__ dct; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_qp_init_attr {int dummy; } ;
struct TYPE_5__ {void* hop_limit; void* sgid_index; void* flow_label; void* traffic_class; } ;
struct TYPE_6__ {TYPE_2__ grh; } ;
struct ib_qp_attr {void* pkey_index; void* path_mtu; TYPE_3__ ah_attr; void* min_rnr_timer; void* port_num; int qp_access_flags; scalar_t__ qp_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_0 (int ,int *,int ) ;
 void* FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int VAR_17 ;
 int FUNC_5 (int ,struct mlx5_core_dct*,int *,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

__attribute__((used)) static int FUNC_6(struct mlx5_ib_dev *VAR_27, struct mlx5_ib_qp *VAR_28,
    struct ib_qp_attr *VAR_29, int VAR_30,
    struct ib_qp_init_attr *VAR_31)
{
 struct mlx5_core_dct *VAR_32 = &VAR_28->dct.mdct;
 u32 *VAR_33;
 u32 VAR_34 = 0;
 int VAR_35 = FUNC_2(VAR_22);
 void *VAR_36;
 int VAR_37;
 int VAR_38 = VAR_13 |
        VAR_7 |
        VAR_12 |
        VAR_9 |
        VAR_8 |
        VAR_10 |
        VAR_11;

 if (VAR_30 & ~VAR_38)
  return -VAR_0;
 if (VAR_28->state != VAR_6)
  return -VAR_0;

 VAR_33 = FUNC_4(VAR_35, VAR_2);
 if (!VAR_33)
  return -VAR_1;

 VAR_37 = FUNC_5(VAR_27->mdev, VAR_32, VAR_33, VAR_35);
 if (VAR_37)
  goto out;

 VAR_36 = FUNC_0(VAR_22, VAR_33, VAR_14);

 if (VAR_30 & VAR_13)
  VAR_29->qp_state = VAR_6;

 if (VAR_30 & VAR_7) {
  if (FUNC_1(VAR_36, VAR_36, VAR_24))
   VAR_34 |= VAR_4;
  if (FUNC_1(VAR_36, VAR_36, VAR_25))
   VAR_34 |= VAR_5;
  if (FUNC_1(VAR_36, VAR_36, VAR_23))
   VAR_34 |= VAR_3;
  VAR_29->qp_access_flags = VAR_34;
 }

 if (VAR_30 & VAR_12)
  VAR_29->port_num = FUNC_1(VAR_36, VAR_36, VAR_21);
 if (VAR_30 & VAR_9)
  VAR_29->min_rnr_timer = FUNC_1(VAR_36, VAR_36, VAR_17);
 if (VAR_30 & VAR_8) {
  VAR_29->ah_attr.grh.traffic_class = FUNC_1(VAR_36, VAR_36, VAR_26);
  VAR_29->ah_attr.grh.flow_label = FUNC_1(VAR_36, VAR_36, VAR_15);
  VAR_29->ah_attr.grh.sgid_index = FUNC_1(VAR_36, VAR_36, VAR_19);
  VAR_29->ah_attr.grh.hop_limit = FUNC_1(VAR_36, VAR_36, VAR_16);
 }
 if (VAR_30 & VAR_10)
  VAR_29->path_mtu = FUNC_1(VAR_36, VAR_36, VAR_18);
 if (VAR_30 & VAR_11)
  VAR_29->pkey_index = FUNC_1(VAR_36, VAR_36, VAR_20);
out:
 FUNC_3(VAR_33);
 return VAR_37;
}
