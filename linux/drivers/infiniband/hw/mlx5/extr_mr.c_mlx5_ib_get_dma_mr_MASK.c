
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_mr {int rkey; int lkey; } ;
struct TYPE_4__ {int key; int type; } ;
struct mlx5_ib_mr {struct ib_mr ibmr; int * umem; TYPE_2__ mmkey; } ;
typedef struct mlx5_ib_mr u32 ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ib_pd {int device; } ;
struct TYPE_3__ {int pdn; } ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int ,struct mlx5_ib_mr*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (void*,void*,struct ib_pd*,int) ;
 int FUNC_3 (void*,void*,int ,int ) ;
 int FUNC_4 (int ) ;
 struct ib_pd* VAR_8 ;
 struct ib_pd* VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct mlx5_ib_mr*) ;
 struct mlx5_ib_mr* FUNC_6 (int,int ) ;
 struct ib_pd* VAR_11 ;
 struct ib_pd* VAR_12 ;
 struct ib_pd* VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (struct mlx5_core_dev*,TYPE_2__*,struct mlx5_ib_mr*,int) ;
 struct ib_pd* VAR_15 ;
 struct ib_pd* VAR_16 ;
 struct ib_pd* VAR_17 ;
 int VAR_18 ;
 struct mlx5_ib_dev* FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (struct ib_pd*) ;

struct ib_mr *FUNC_10(struct ib_pd *VAR_19, int VAR_20)
{
 struct mlx5_ib_dev *VAR_21 = FUNC_8(VAR_19->device);
 int VAR_22 = FUNC_4(VAR_10);
 struct mlx5_core_dev *VAR_23 = VAR_21->mdev;
 struct mlx5_ib_mr *VAR_24;
 void *VAR_25;
 u32 *VAR_26;
 int VAR_27;

 VAR_24 = FUNC_6(sizeof(*VAR_24), VAR_1);
 if (!VAR_24)
  return FUNC_0(-VAR_0);

 VAR_26 = FUNC_6(VAR_22, VAR_1);
 if (!VAR_26) {
  VAR_27 = -VAR_0;
  goto err_free;
 }

 VAR_25 = FUNC_1(VAR_10, VAR_26, VAR_14);

 FUNC_2(VAR_25, VAR_25, VAR_9, VAR_6);
 FUNC_2(VAR_25, VAR_25, VAR_8, !!(VAR_20 & VAR_3));
 FUNC_2(VAR_25, VAR_25, VAR_17, !!(VAR_20 & VAR_5));
 FUNC_2(VAR_25, VAR_25, VAR_16, !!(VAR_20 & VAR_4));
 FUNC_2(VAR_25, VAR_25, VAR_13, !!(VAR_20 & VAR_2));
 FUNC_2(VAR_25, VAR_25, VAR_12, 1);

 FUNC_2(VAR_25, VAR_25, VAR_11, 1);
 FUNC_2(VAR_25, VAR_25, VAR_19, FUNC_9(VAR_19)->pdn);
 FUNC_2(VAR_25, VAR_25, VAR_15, 0xffffff);
 FUNC_3(VAR_25, VAR_25, VAR_18, 0);

 VAR_27 = FUNC_7(VAR_23, &VAR_24->mmkey, VAR_26, VAR_22);
 if (VAR_27)
  goto err_in;

 FUNC_5(VAR_26);
 VAR_24->mmkey.type = VAR_7;
 VAR_24->ibmr.lkey = VAR_24->mmkey.key;
 VAR_24->ibmr.rkey = VAR_24->mmkey.key;
 VAR_24->umem = ((void*)0);

 return &VAR_24->ibmr;

err_in:
 FUNC_5(VAR_26);

err_free:
 FUNC_5(VAR_24);

 return FUNC_0(VAR_27);
}
