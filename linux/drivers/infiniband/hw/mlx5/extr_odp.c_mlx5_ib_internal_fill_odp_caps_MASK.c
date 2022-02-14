
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int xrc_odp_caps; int rc_odp_caps; int ud_odp_caps; } ;
struct ib_odp_caps {int general_caps; TYPE_1__ per_transport_caps; } ;
struct mlx5_ib_dev {int mdev; int odp_max_size; struct ib_odp_caps odp_caps; } ;
struct TYPE_8__ {int srq_receive; int atomic; int read; int write; int receive; int send; } ;
struct TYPE_7__ {int srq_receive; int send; } ;
struct TYPE_6__ {int srq_receive; int atomic; int read; int write; int receive; int send; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct ib_odp_caps*,int ,int) ;
 int FUNC_4 (struct mlx5_ib_dev*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_4__ VAR_14 ;
 TYPE_3__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 TYPE_2__ VAR_18 ;

void FUNC_5(struct mlx5_ib_dev *VAR_19)
{
 struct ib_odp_caps *VAR_20 = &VAR_19->odp_caps;

 FUNC_3(VAR_20, 0, sizeof(*VAR_20));

 if (!FUNC_1(VAR_19->mdev, VAR_13) ||
     !FUNC_4(VAR_19, 1))
  return;

 VAR_20->general_caps = VAR_0;

 if (FUNC_1(VAR_19->mdev, VAR_16))
  VAR_19->odp_max_size = VAR_10;
 else
  VAR_19->odp_max_size = FUNC_0(VAR_8 + VAR_9);

 if (FUNC_2(VAR_19->mdev, VAR_15.send))
  VAR_20->per_transport_caps.ud_odp_caps |= VAR_5;

 if (FUNC_2(VAR_19->mdev, VAR_15.srq_receive))
  VAR_20->per_transport_caps.ud_odp_caps |= VAR_6;

 if (FUNC_2(VAR_19->mdev, VAR_14.send))
  VAR_20->per_transport_caps.rc_odp_caps |= VAR_5;

 if (FUNC_2(VAR_19->mdev, VAR_14.receive))
  VAR_20->per_transport_caps.rc_odp_caps |= VAR_4;

 if (FUNC_2(VAR_19->mdev, VAR_14.write))
  VAR_20->per_transport_caps.rc_odp_caps |= VAR_7;

 if (FUNC_2(VAR_19->mdev, VAR_14.read))
  VAR_20->per_transport_caps.rc_odp_caps |= VAR_3;

 if (FUNC_2(VAR_19->mdev, VAR_14.atomic))
  VAR_20->per_transport_caps.rc_odp_caps |= VAR_1;

 if (FUNC_2(VAR_19->mdev, VAR_14.srq_receive))
  VAR_20->per_transport_caps.rc_odp_caps |= VAR_6;

 if (FUNC_2(VAR_19->mdev, VAR_18.send))
  VAR_20->per_transport_caps.xrc_odp_caps |= VAR_5;

 if (FUNC_2(VAR_19->mdev, VAR_18.receive))
  VAR_20->per_transport_caps.xrc_odp_caps |= VAR_4;

 if (FUNC_2(VAR_19->mdev, VAR_18.write))
  VAR_20->per_transport_caps.xrc_odp_caps |= VAR_7;

 if (FUNC_2(VAR_19->mdev, VAR_18.read))
  VAR_20->per_transport_caps.xrc_odp_caps |= VAR_3;

 if (FUNC_2(VAR_19->mdev, VAR_18.atomic))
  VAR_20->per_transport_caps.xrc_odp_caps |= VAR_1;

 if (FUNC_2(VAR_19->mdev, VAR_18.srq_receive))
  VAR_20->per_transport_caps.xrc_odp_caps |= VAR_6;

 if (FUNC_1(VAR_19->mdev, VAR_11) &&
     FUNC_1(VAR_19->mdev, VAR_12) &&
     FUNC_1(VAR_19->mdev, VAR_16) &&
     !FUNC_1(VAR_19->mdev, VAR_17))
  VAR_20->general_caps |= VAR_2;

 return;
}
