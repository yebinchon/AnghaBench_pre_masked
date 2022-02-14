
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ib_mr {int dummy; } ;
struct mlx5_ib_mr {struct ib_mr ibmr; int * umem; int mmkey; } ;
typedef struct mlx5_ib_mr u32 ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ib_pd {int device; } ;
struct TYPE_2__ {int pdn; } ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int ,struct mlx5_ib_mr*,int ) ;
 int FUNC_2 (void*,void*,struct ib_pd*,int) ;
 int FUNC_3 (void*,void*,int ,int ) ;
 int FUNC_4 (int ) ;
 struct ib_pd* VAR_6 ;
 struct ib_pd* VAR_7 ;
 struct ib_pd* VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct mlx5_ib_mr*) ;
 struct mlx5_ib_mr* FUNC_6 (int,int ) ;
 int VAR_10 ;
 struct ib_pd* VAR_11 ;
 struct ib_pd* VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (struct mlx5_core_dev*,int *,struct mlx5_ib_mr*,int) ;
 struct ib_pd* VAR_14 ;
 struct ib_pd* VAR_15 ;
 struct ib_pd* VAR_16 ;
 int FUNC_8 (struct mlx5_ib_dev*,struct mlx5_ib_mr*,int ,int ,int) ;
 struct mlx5_ib_dev* FUNC_9 (int ) ;
 TYPE_1__* FUNC_10 (struct ib_pd*) ;

__attribute__((used)) static struct ib_mr *FUNC_11(struct ib_pd *VAR_17, u64 VAR_18,
           u64 VAR_19, int VAR_20, int VAR_21)
{
 struct mlx5_ib_dev *VAR_22 = FUNC_9(VAR_17->device);
 int VAR_23 = FUNC_4(VAR_9);
 struct mlx5_core_dev *VAR_24 = VAR_22->mdev;
 struct mlx5_ib_mr *VAR_25;
 void *VAR_26;
 u32 *VAR_27;
 int VAR_28;

 VAR_25 = FUNC_6(sizeof(*VAR_25), VAR_1);
 if (!VAR_25)
  return FUNC_0(-VAR_0);

 VAR_27 = FUNC_6(VAR_23, VAR_1);
 if (!VAR_27) {
  VAR_28 = -VAR_0;
  goto err_free;
 }

 VAR_26 = FUNC_1(VAR_9, VAR_27, VAR_13);

 FUNC_2(VAR_26, VAR_26, VAR_7, VAR_21 & 0x3);
 FUNC_2(VAR_26, VAR_26, VAR_8, (VAR_21 >> 2) & 0x7);
 FUNC_2(VAR_26, VAR_26, VAR_6, !!(VAR_20 & VAR_3));
 FUNC_2(VAR_26, VAR_26, VAR_16, !!(VAR_20 & VAR_5));
 FUNC_2(VAR_26, VAR_26, VAR_15, !!(VAR_20 & VAR_4));
 FUNC_2(VAR_26, VAR_26, VAR_12, !!(VAR_20 & VAR_2));
 FUNC_2(VAR_26, VAR_26, VAR_11, 1);

 FUNC_3(VAR_26, VAR_26, VAR_10, VAR_19);
 FUNC_2(VAR_26, VAR_26, VAR_17, FUNC_10(VAR_17)->pdn);
 FUNC_2(VAR_26, VAR_26, VAR_14, 0xffffff);
 FUNC_3(VAR_26, VAR_26, VAR_18, VAR_18);

 VAR_28 = FUNC_7(VAR_24, &VAR_25->mmkey, VAR_27, VAR_23);
 if (VAR_28)
  goto err_in;

 FUNC_5(VAR_27);

 VAR_25->umem = ((void*)0);
 FUNC_8(VAR_22, VAR_25, 0, VAR_19, VAR_20);

 return &VAR_25->ibmr;

err_in:
 FUNC_5(VAR_27);

err_free:
 FUNC_5(VAR_25);

 return FUNC_0(VAR_28);
}
