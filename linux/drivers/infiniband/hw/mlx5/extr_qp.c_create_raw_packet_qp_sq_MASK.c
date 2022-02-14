
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mlx5_ib_ubuffer {int * umem; int buf_size; int buf_addr; } ;
struct TYPE_3__ {int mqp; } ;
struct mlx5_ib_sq {int tisn; struct mlx5_ib_ubuffer ubuffer; TYPE_1__ base; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int dummy; } ;
typedef void __be64 ;
struct TYPE_4__ {int uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*,void*,void*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (void*,void*,struct ib_pd*) ;
 int FUNC_4 (void*,void*,int ) ;
 int VAR_3 ;
 int FUNC_5 (void*,void*,struct ib_pd*,int) ;
 int FUNC_6 (void*,void*,int ,int ) ;
 int VAR_4 ;
 int FUNC_7 (void*) ;
 int VAR_5 ;
 struct ib_pd* VAR_6 ;
 struct ib_pd* VAR_7 ;
 struct ib_pd* VAR_8 ;
 struct ib_pd* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct ib_pd* VAR_15 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (void*) ;
 void* FUNC_11 (int,int ) ;
 struct ib_pd* VAR_16 ;
 struct ib_pd* VAR_17 ;
 struct ib_pd* VAR_18 ;
 struct ib_pd* VAR_19 ;
 int FUNC_12 (int ,void*,int,int *) ;
 int FUNC_13 (struct mlx5_ib_dev*,int *,int,void*,int ) ;
 int FUNC_14 (struct mlx5_ib_dev*,struct ib_udata*,int ,int ,int **,int*,int*,int*,int*) ;
 int VAR_20 ;
 struct ib_pd* VAR_21 ;
 void* VAR_22 ;
 struct ib_pd* VAR_23 ;
 int VAR_24 ;
 struct ib_pd* VAR_25 ;
 struct ib_pd* VAR_26 ;
 TYPE_2__* FUNC_15 (struct ib_pd*) ;
 struct ib_pd* VAR_27 ;
 struct ib_pd* VAR_28 ;
 struct ib_pd* VAR_29 ;
 struct ib_pd* VAR_30 ;

__attribute__((used)) static int FUNC_16(struct mlx5_ib_dev *VAR_31,
       struct ib_udata *VAR_32,
       struct mlx5_ib_sq *VAR_33, void *VAR_34,
       struct ib_pd *VAR_35)
{
 struct mlx5_ib_ubuffer *VAR_36 = &VAR_33->ubuffer;
 __be64 *VAR_37;
 void *VAR_38;
 void *VAR_39;
 void *VAR_40 = FUNC_0(VAR_10, VAR_34, VAR_40);
 void *VAR_41;
 int VAR_42;
 int VAR_43;
 int VAR_44 = 0;
 int VAR_45;
 int VAR_46 = 0;
 u32 VAR_47 = 0;

 VAR_43 = FUNC_14(VAR_31, VAR_32, VAR_36->buf_addr, VAR_36->buf_size,
          &VAR_33->ubuffer.umem, &VAR_45, &VAR_44, &VAR_46,
          &VAR_47);
 if (VAR_43)
  return VAR_43;

 VAR_42 = FUNC_7(VAR_11) + sizeof(u64) * VAR_46;
 VAR_38 = FUNC_11(VAR_42, VAR_1);
 if (!VAR_38) {
  VAR_43 = -VAR_0;
  goto err_umem;
 }

 FUNC_5(VAR_11, VAR_38, VAR_28, FUNC_15(VAR_35)->uid);
 VAR_39 = FUNC_0(VAR_11, VAR_38, VAR_12);
 FUNC_5(VAR_39, VAR_39, VAR_15, 1);
 if (FUNC_1(VAR_31->mdev, VAR_20))
  FUNC_5(VAR_39, VAR_39, VAR_6, 1);
 FUNC_5(VAR_39, VAR_39, VAR_23, VAR_4);
 FUNC_5(VAR_39, VAR_39, VAR_29, FUNC_3(VAR_40, VAR_40, VAR_29));
 FUNC_5(VAR_39, VAR_39, VAR_8, FUNC_3(VAR_40, VAR_40, VAR_9));
 FUNC_5(VAR_39, VAR_39, VAR_25, 1);
 FUNC_5(VAR_39, VAR_39, VAR_26, VAR_33->tisn);
 if (FUNC_2(VAR_31->mdev, VAR_14) &&
     FUNC_1(VAR_31->mdev, VAR_24))
  FUNC_5(VAR_39, VAR_39, VAR_7, 1);

 VAR_41 = FUNC_0(VAR_39, VAR_39, VAR_41);
 FUNC_5(VAR_41, VAR_41, VAR_30, VAR_5);
 FUNC_5(VAR_41, VAR_41, VAR_35, FUNC_3(VAR_40, VAR_40, VAR_35));
 FUNC_5(VAR_41, VAR_41, VAR_27, FUNC_3(VAR_40, VAR_40, VAR_27));
 FUNC_6(VAR_41, VAR_41, VAR_13, FUNC_4(VAR_40, VAR_40, VAR_13));
 FUNC_5(VAR_41, VAR_41, VAR_18, FUNC_9(VAR_3));
 FUNC_5(VAR_41, VAR_41, VAR_19, FUNC_3(VAR_40, VAR_40, VAR_16));
 FUNC_5(VAR_41, VAR_41, VAR_17, VAR_44 - VAR_2);
 FUNC_5(VAR_41, VAR_41, VAR_21, VAR_47);

 VAR_37 = (__be64 *)FUNC_0(VAR_41, VAR_41, VAR_37);
 FUNC_13(VAR_31, VAR_33->ubuffer.umem, VAR_44, VAR_37, 0);

 VAR_43 = FUNC_12(VAR_31->mdev, VAR_38, VAR_42, &VAR_33->base.mqp);

 FUNC_10(VAR_38);

 if (VAR_43)
  goto err_umem;

 return 0;

err_umem:
 FUNC_8(VAR_33->ubuffer.umem);
 VAR_33->ubuffer.umem = ((void*)0);

 return VAR_43;
}
