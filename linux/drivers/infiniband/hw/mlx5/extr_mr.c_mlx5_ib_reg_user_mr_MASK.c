
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct ib_mr {int dummy; } ;
struct TYPE_5__ {int key; } ;
struct mlx5_ib_mr {struct ib_mr ibmr; int live; int num_pending_prefetch; struct ib_umem* umem; TYPE_2__ mmkey; } ;
struct TYPE_4__ {int general_caps; } ;
struct mlx5_ib_dev {int slow_path_mutex; int mdev; TYPE_1__ odp_caps; } ;
struct ib_umem {int dummy; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;
struct TYPE_6__ {struct mlx5_ib_mr* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ib_mr* FUNC_0 (struct mlx5_ib_mr*) ;
 struct ib_mr* FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct mlx5_ib_mr*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct mlx5_ib_mr*) ;
 int VAR_9 ;
 struct mlx5_ib_mr* FUNC_6 (struct ib_pd*,struct ib_umem*,int ,int ,int,int,int,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct mlx5_ib_dev*,struct mlx5_ib_mr*) ;
 int FUNC_9 (struct ib_umem*) ;
 scalar_t__ FUNC_10 (struct mlx5_ib_mr*) ;
 struct mlx5_ib_mr* FUNC_11 (int ,struct ib_udata*,int) ;
 int FUNC_12 (struct mlx5_ib_dev*,int) ;
 int FUNC_13 (struct mlx5_ib_dev*,char*,int,...) ;
 int FUNC_14 (struct mlx5_ib_mr*,int ,int,int,int) ;
 int FUNC_15 (struct mlx5_ib_dev*) ;
 int FUNC_16 (struct mlx5_ib_dev*,struct ib_udata*,int ,int ,int,struct ib_umem**,int*,int*,int*,int*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*) ;
 struct mlx5_ib_mr* FUNC_20 (int *,struct ib_pd*,int ,int ,struct ib_umem*,int,int,int,int) ;
 int FUNC_21 (struct mlx5_ib_dev*,struct mlx5_ib_mr*,int,int ,int) ;
 int FUNC_22 (int *,int) ;
 TYPE_3__* FUNC_23 (struct ib_umem*) ;
 struct mlx5_ib_dev* FUNC_24 (int ) ;
 int FUNC_25 (struct ib_pd*) ;
 int VAR_10 ;

struct ib_mr *FUNC_26(struct ib_pd *VAR_11, u64 VAR_12, u64 VAR_13,
      u64 VAR_14, int VAR_15,
      struct ib_udata *VAR_16)
{
 struct mlx5_ib_dev *VAR_17 = FUNC_24(VAR_11->device);
 struct mlx5_ib_mr *VAR_18 = ((void*)0);
 bool VAR_19;
 struct ib_umem *VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;

 if (!FUNC_2(VAR_1))
  return FUNC_1(-VAR_4);

 FUNC_13(VAR_17, "start 0x%llx, virt_addr 0x%llx, length 0x%llx, access_flags 0x%x\n",
      VAR_12, VAR_14, VAR_13, VAR_15);

 if (FUNC_2(VAR_0) && !VAR_12 &&
     VAR_13 == VAR_9) {
  if (!(VAR_15 & VAR_5) ||
      !(VAR_17->odp_caps.general_caps & VAR_6))
   return FUNC_1(-VAR_3);

  VAR_18 = FUNC_11(FUNC_25(VAR_11), VAR_16, VAR_15);
  if (FUNC_3(VAR_18))
   return FUNC_0(VAR_18);
  return &VAR_18->ibmr;
 }

 VAR_25 = FUNC_16(VAR_17, VAR_16, VAR_12, VAR_13, VAR_15, &VAR_20,
     &VAR_22, &VAR_21, &VAR_23, &VAR_24);

 if (VAR_25 < 0)
  return FUNC_1(VAR_25);

 VAR_19 = FUNC_12(VAR_17, 1);

 if (VAR_24 <= FUNC_15(VAR_17) && VAR_19) {
  VAR_18 = FUNC_6(VAR_11, VAR_20, VAR_14, VAR_13, VAR_23,
      VAR_21, VAR_24, VAR_15);
  if (FUNC_5(VAR_18) == -VAR_2) {
   FUNC_13(VAR_17, "cache empty for order %d\n", VAR_24);
   VAR_18 = ((void*)0);
  }
 } else if (!FUNC_4(VAR_17->mdev, VAR_10)) {
  if (VAR_15 & VAR_5) {
   VAR_25 = -VAR_3;
   FUNC_19("Got MR registration for ODP MR > 512MB, not supported for Connect-IB\n");
   goto error;
  }
  VAR_19 = 0;
 }

 if (!VAR_18) {
  FUNC_17(&VAR_17->slow_path_mutex);
  VAR_18 = FUNC_20(((void*)0), VAR_11, VAR_14, VAR_13, VAR_20, VAR_23,
    VAR_21, VAR_15, !VAR_19);
  FUNC_18(&VAR_17->slow_path_mutex);
 }

 if (FUNC_3(VAR_18)) {
  VAR_25 = FUNC_5(VAR_18);
  goto error;
 }

 FUNC_13(VAR_17, "mkey 0x%x\n", VAR_18->mmkey.key);

 VAR_18->umem = VAR_20;
 FUNC_21(VAR_17, VAR_18, VAR_22, VAR_13, VAR_15);

 if (VAR_19) {
  int VAR_26 = VAR_7;

  if (VAR_15 & VAR_5)
   VAR_26 |= VAR_8;

  VAR_25 = FUNC_14(VAR_18, 0, VAR_23, VAR_21,
      VAR_26);

  if (VAR_25) {
   FUNC_8(VAR_17, VAR_18);
   return FUNC_1(VAR_25);
  }
 }

 if (FUNC_10(VAR_18)) {
  FUNC_23(VAR_18->umem)->private = VAR_18;
  FUNC_7(&VAR_18->num_pending_prefetch, 0);
 }
 if (FUNC_2(VAR_0))
  FUNC_22(&VAR_18->live, 1);

 return &VAR_18->ibmr;
error:
 FUNC_9(VAR_20);
 return FUNC_1(VAR_25);
}
