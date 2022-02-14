
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int qpn; } ;
struct TYPE_5__ {TYPE_1__ mqp; } ;
struct mlx5_ib_rq {scalar_t__ tirn; TYPE_2__ base; } ;
struct mlx5_ib_dev {int mdev; scalar_t__ is_rep; } ;
struct ib_pd {int dummy; } ;
struct TYPE_6__ {int uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int*,int ) ;
 scalar_t__ FUNC_1 (void*,void*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (void*,void*,int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct mlx5_ib_dev*,struct mlx5_ib_rq*,int ,struct ib_pd*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int*) ;
 int* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int*,int,int*,int) ;
 int FUNC_8 (struct mlx5_ib_dev*,int,int) ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_3__* FUNC_9 (struct ib_pd*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_10(struct mlx5_ib_dev *VAR_18,
        struct mlx5_ib_rq *VAR_19, u32 VAR_20,
        u32 *VAR_21,
        struct ib_pd *VAR_22,
        u32 *VAR_23, int VAR_24)
{
 u8 VAR_25 = 0;
 u32 *VAR_26;
 void *VAR_27;
 int VAR_28;
 int VAR_29;

 VAR_28 = FUNC_3(VAR_8);
 VAR_26 = FUNC_6(VAR_28, VAR_1);
 if (!VAR_26)
  return -VAR_0;

 FUNC_2(VAR_8, VAR_26, VAR_17, FUNC_9(VAR_22)->uid);
 VAR_27 = FUNC_0(VAR_8, VAR_26, VAR_10);
 FUNC_2(VAR_27, VAR_27, VAR_11, VAR_5);
 FUNC_2(VAR_27, VAR_27, VAR_12, VAR_19->base.mqp.qpn);
 FUNC_2(VAR_27, VAR_27, VAR_15, VAR_20);
 if (*VAR_21 & VAR_4)
  FUNC_2(VAR_27, VAR_27, VAR_16, 1);

 if (*VAR_21 & VAR_3)
  VAR_25 |= VAR_7;

 if (*VAR_21 & VAR_2)
  VAR_25 |= VAR_6;

 if (VAR_18->is_rep) {
  VAR_25 |= VAR_7;
  *VAR_21 |= VAR_3;
 }

 FUNC_2(VAR_27, VAR_27, VAR_13, VAR_25);

 VAR_29 = FUNC_7(VAR_18->mdev, VAR_26, VAR_28, VAR_23, VAR_24);

 VAR_19->tirn = FUNC_1(VAR_9, VAR_23, VAR_14);
 if (!VAR_29 && FUNC_1(VAR_27, VAR_27, VAR_13)) {
  VAR_29 = FUNC_8(VAR_18, 0, 1);

  if (VAR_29)
   FUNC_4(VAR_18, VAR_19, 0, VAR_22);
 }
 FUNC_5(VAR_26);

 return VAR_29;
}
