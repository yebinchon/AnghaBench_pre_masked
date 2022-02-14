
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef void u32 ;
struct mlx5_mtt {int dummy; } ;
struct TYPE_6__ {int key; int type; } ;
struct TYPE_4__ {struct ib_pd* pd; } ;
struct mlx5_ib_mr {int access_flags; int desc_size; TYPE_3__ mmkey; struct mlx5_ib_dev* dev; TYPE_1__ ibmr; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_umem {int dummy; } ;
struct ib_pd {int device; } ;
struct ib_mr {int dummy; } ;
typedef int __be64 ;
struct TYPE_5__ {int pdn; } ;


 int VAR_0 ;
 struct mlx5_ib_mr* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (void*,void*,struct ib_pd*,int) ;
 int FUNC_4 (void*,void*,int ,int ) ;
 int FUNC_5 (void*) ;
 struct ib_pd* VAR_10 ;
 struct ib_pd* VAR_11 ;
 struct ib_pd* VAR_12 ;
 void* VAR_13 ;
 struct ib_pd* VAR_14 ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct mlx5_ib_mr*) ;
 int VAR_15 ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (int,int ) ;
 struct mlx5_ib_mr* FUNC_10 (int,int ) ;
 int VAR_16 ;
 struct ib_pd* VAR_17 ;
 struct ib_pd* VAR_18 ;
 struct ib_pd* VAR_19 ;
 int VAR_20 ;
 int FUNC_11 (int ,TYPE_3__*,void*,int) ;
 int FUNC_12 (struct mlx5_ib_dev*,char*,int ) ;
 int FUNC_13 (struct mlx5_ib_dev*,struct ib_umem*,int,int *,int ) ;
 int FUNC_14 (struct mlx5_ib_dev*,char*) ;
 int VAR_21 ;
 struct ib_pd* VAR_22 ;
 struct ib_pd* VAR_23 ;
 int FUNC_15 (int,int) ;
 struct ib_pd* VAR_24 ;
 struct ib_pd* VAR_25 ;
 int VAR_26 ;
 struct mlx5_ib_dev* FUNC_16 (int ) ;
 struct mlx5_ib_mr* FUNC_17 (struct ib_mr*) ;
 TYPE_2__* FUNC_18 (struct ib_pd*) ;
 struct ib_pd* VAR_27 ;
 struct ib_pd* VAR_28 ;
 struct ib_pd* VAR_29 ;

__attribute__((used)) static struct mlx5_ib_mr *FUNC_19(struct ib_mr *VAR_30, struct ib_pd *VAR_31,
         u64 VAR_32, u64 VAR_33,
         struct ib_umem *VAR_34, int VAR_35,
         int VAR_36, int VAR_37,
         bool VAR_38)
{
 struct mlx5_ib_dev *VAR_39 = FUNC_16(VAR_31->device);
 struct mlx5_ib_mr *VAR_40;
 __be64 *VAR_41;
 void *VAR_42;
 int VAR_43;
 u32 *VAR_44;
 int VAR_45;
 bool VAR_46 = !!(FUNC_2(VAR_39->mdev, VAR_21));

 VAR_40 = VAR_30 ? FUNC_17(VAR_30) : FUNC_10(sizeof(*VAR_40), VAR_1);
 if (!VAR_40)
  return FUNC_0(-VAR_0);

 VAR_40->ibmr.pd = VAR_31;
 VAR_40->access_flags = VAR_37;

 VAR_43 = FUNC_5(VAR_13);
 if (VAR_38)
  VAR_43 += sizeof(*VAR_41) * FUNC_15(VAR_35, 2);
 VAR_44 = FUNC_9(VAR_43, VAR_1);
 if (!VAR_44) {
  VAR_45 = -VAR_0;
  goto err_1;
 }
 VAR_41 = (__be64 *)FUNC_1(VAR_13, VAR_44, VAR_15);
 if (VAR_38 && !(VAR_37 & VAR_3))
  FUNC_13(VAR_39, VAR_34, VAR_36, VAR_41,
         VAR_46 ? VAR_7 : 0);



 FUNC_3(VAR_13, VAR_44, VAR_22, !!(VAR_46));

 VAR_42 = FUNC_1(VAR_13, VAR_44, VAR_20);
 FUNC_3(VAR_42, VAR_42, VAR_14, !VAR_38);
 FUNC_3(VAR_42, VAR_42, VAR_11, VAR_8);
 FUNC_3(VAR_42, VAR_42, VAR_10, !!(VAR_37 & VAR_4));
 FUNC_3(VAR_42, VAR_42, VAR_25, !!(VAR_37 & VAR_6));
 FUNC_3(VAR_42, VAR_42, VAR_24, !!(VAR_37 & VAR_5));
 FUNC_3(VAR_42, VAR_42, VAR_19, !!(VAR_37 & VAR_2));
 FUNC_3(VAR_42, VAR_42, VAR_18, 1);
 FUNC_3(VAR_42, VAR_42, VAR_29, 1);

 FUNC_4(VAR_42, VAR_42, VAR_26, VAR_32);
 FUNC_4(VAR_42, VAR_42, VAR_16, VAR_33);
 FUNC_3(VAR_42, VAR_42, VAR_31, FUNC_18(VAR_31)->pdn);
 FUNC_3(VAR_42, VAR_42, VAR_12, 0);
 FUNC_3(VAR_42, VAR_42, VAR_28,
   FUNC_6(VAR_32, VAR_33, VAR_36));
 FUNC_3(VAR_42, VAR_42, VAR_17, VAR_36);
 FUNC_3(VAR_42, VAR_42, VAR_23, 0xffffff);
 if (VAR_38) {
  FUNC_3(VAR_13, VAR_44, VAR_27,
    FUNC_6(VAR_32, VAR_33, VAR_36));
 }

 VAR_45 = FUNC_11(VAR_39->mdev, &VAR_40->mmkey, VAR_44, VAR_43);
 if (VAR_45) {
  FUNC_14(VAR_39, "create mkey failed\n");
  goto err_2;
 }
 VAR_40->mmkey.type = VAR_9;
 VAR_40->desc_size = sizeof(struct mlx5_mtt);
 VAR_40->dev = VAR_39;
 FUNC_8(VAR_44);

 FUNC_12(VAR_39, "mkey = 0x%x\n", VAR_40->mmkey.key);

 return VAR_40;

err_2:
 FUNC_8(VAR_44);

err_1:
 if (!VAR_30)
  FUNC_7(VAR_40);

 return FUNC_0(VAR_45);
}
