
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long long uverbs_cmd_mask; unsigned long long uverbs_ex_cmd_mask; int use_cq_dim; int driver_def; } ;
struct TYPE_3__ {int mutex; } ;
struct mlx5_ib_dev {TYPE_2__ ib_dev; TYPE_1__ lb; struct mlx5_core_dev* mdev; int umr_fence; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 unsigned long long VAR_12 ;
 unsigned long long VAR_13 ;
 unsigned long long VAR_14 ;
 unsigned long long VAR_15 ;
 unsigned long long VAR_16 ;
 unsigned long long VAR_17 ;
 unsigned long long VAR_18 ;
 unsigned long long VAR_19 ;
 unsigned long long VAR_20 ;
 unsigned long long VAR_21 ;
 unsigned long long VAR_22 ;
 unsigned long long VAR_23 ;
 unsigned long long VAR_24 ;
 unsigned long long VAR_25 ;
 unsigned long long VAR_26 ;
 unsigned long long VAR_27 ;
 unsigned long long VAR_28 ;
 unsigned long long VAR_29 ;
 unsigned long long VAR_30 ;
 unsigned long long VAR_31 ;
 unsigned long long VAR_32 ;
 unsigned long long VAR_33 ;
 unsigned long long VAR_34 ;
 unsigned long long VAR_35 ;
 unsigned long long VAR_36 ;
 unsigned long long VAR_37 ;
 unsigned long long VAR_38 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_39 ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_2 (struct mlx5_core_dev*,int ) ;
 int FUNC_3 (struct mlx5_core_dev*,int ) ;
 scalar_t__ VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int VAR_45 ;
 int FUNC_5 (struct mlx5_ib_dev*) ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_6 (struct mlx5_core_dev*) ;
 scalar_t__ FUNC_7 (struct mlx5_core_dev*) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int FUNC_9 (int *) ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;

__attribute__((used)) static int FUNC_10(struct mlx5_ib_dev *VAR_59)
{
 struct mlx5_core_dev *VAR_60 = VAR_59->mdev;
 int VAR_61;

 VAR_59->ib_dev.uverbs_cmd_mask =
  (1ull << VAR_20) |
  (1ull << VAR_25) |
  (1ull << VAR_26) |
  (1ull << VAR_3) |
  (1ull << VAR_13) |
  (1ull << VAR_6) |
  (1ull << VAR_15) |
  (1ull << VAR_29) |
  (1ull << VAR_30) |
  (1ull << VAR_14) |
  (1ull << VAR_7) |
  (1ull << VAR_8) |
  (1ull << VAR_31) |
  (1ull << VAR_16) |
  (1ull << VAR_9) |
  (1ull << VAR_21) |
  (1ull << VAR_27) |
  (1ull << VAR_17) |
  (1ull << VAR_4) |
  (1ull << VAR_19) |
  (1ull << VAR_10) |
  (1ull << VAR_22) |
  (1ull << VAR_28) |
  (1ull << VAR_18) |
  (1ull << VAR_11) |
  (1ull << VAR_23);
 VAR_59->ib_dev.uverbs_ex_cmd_mask =
  (1ull << VAR_38) |
  (1ull << VAR_32) |
  (1ull << VAR_34) |
  (1ull << VAR_37) |
  (1ull << VAR_36) |
  (1ull << VAR_33) |
  (1ull << VAR_35);

 if (FUNC_2(VAR_60, VAR_46) &&
     FUNC_0(VAR_1))
  FUNC_4(&VAR_59->ib_dev,
      &VAR_51);

 if (FUNC_7(VAR_60))
  FUNC_4(&VAR_59->ib_dev, &VAR_54);

 VAR_59->umr_fence = FUNC_8(FUNC_2(VAR_60, VAR_57));

 if (FUNC_2(VAR_60, VAR_45)) {
  VAR_59->ib_dev.uverbs_cmd_mask |=
   (1ull << VAR_2) |
   (1ull << VAR_12);
  FUNC_4(&VAR_59->ib_dev, &VAR_52);
 }

 if (FUNC_2(VAR_60, VAR_58)) {
  VAR_59->ib_dev.uverbs_cmd_mask |=
   (1ull << VAR_24) |
   (1ull << VAR_5);
  FUNC_4(&VAR_59->ib_dev, &VAR_55);
 }

 if (FUNC_1(VAR_60, VAR_47) ||
     FUNC_3(VAR_59->mdev, VAR_44) &
     VAR_41)
  FUNC_4(&VAR_59->ib_dev, &VAR_49);

 if (FUNC_6(VAR_59->mdev) &
     VAR_39)
  FUNC_4(&VAR_59->ib_dev, &VAR_50);
 FUNC_4(&VAR_59->ib_dev, &VAR_53);

 if (FUNC_0(VAR_0))
  VAR_59->ib_dev.driver_def = VAR_48;

 VAR_61 = FUNC_5(VAR_59);
 if (VAR_61)
  return VAR_61;

 if ((FUNC_2(VAR_59->mdev, VAR_56) == VAR_40) &&
     (FUNC_2(VAR_59->mdev, VAR_43) ||
      FUNC_2(VAR_59->mdev, VAR_42)))
  FUNC_9(&VAR_59->lb.mutex);

 VAR_59->ib_dev.use_cq_dim = 1;

 return 0;
}
