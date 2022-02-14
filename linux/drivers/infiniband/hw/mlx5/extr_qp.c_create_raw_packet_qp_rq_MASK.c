
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mqp; struct mlx5_ib_qp* container_mibqp; } ;
struct mlx5_ib_rq {int flags; TYPE_1__ base; } ;
struct mlx5_ib_qp {int flags; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_pd {int dummy; } ;
typedef void __be64 ;
struct TYPE_4__ {int uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*,void*,void*) ;
 size_t FUNC_1 (void*,void*) ;
 int FUNC_2 (void*,void*,struct ib_pd*) ;
 int FUNC_3 (void*,void*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (void*,void*,struct ib_pd*,int) ;
 int FUNC_5 (void*,void*,int ,int ) ;
 size_t FUNC_6 (void*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct ib_pd* VAR_10 ;
 struct ib_pd* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 struct ib_pd* VAR_16 ;
 struct ib_pd* VAR_17 ;
 size_t FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (size_t,int ) ;
 struct ib_pd* VAR_18 ;
 struct ib_pd* VAR_19 ;
 struct ib_pd* VAR_20 ;
 struct ib_pd* VAR_21 ;
 struct ib_pd* VAR_22 ;
 struct ib_pd* VAR_23 ;
 struct ib_pd* VAR_24 ;
 int FUNC_10 (void*,void*,size_t) ;
 int FUNC_11 (int ,void*,size_t,int *) ;
 struct ib_pd* VAR_25 ;
 void* VAR_26 ;
 struct ib_pd* VAR_27 ;
 struct ib_pd* VAR_28 ;
 TYPE_2__* FUNC_12 (struct ib_pd*) ;
 struct ib_pd* VAR_29 ;
 struct ib_pd* VAR_30 ;
 struct ib_pd* VAR_31 ;
 struct ib_pd* VAR_32 ;

__attribute__((used)) static int FUNC_13(struct mlx5_ib_dev *VAR_33,
       struct mlx5_ib_rq *VAR_34, void *VAR_35,
       size_t VAR_36, struct ib_pd *VAR_37)
{
 struct mlx5_ib_qp *VAR_38 = VAR_34->base.container_mibqp;
 __be64 *VAR_39;
 __be64 *VAR_40;
 void *VAR_41;
 void *VAR_42;
 void *VAR_43;
 void *VAR_44 = FUNC_0(VAR_12, VAR_35, VAR_44);
 size_t VAR_45 = FUNC_7(VAR_44);
 size_t VAR_46;
 int VAR_47;

 if (VAR_36 < VAR_45 + FUNC_1(VAR_12, VAR_39))
  return -VAR_0;

 VAR_46 = FUNC_6(VAR_13) + VAR_45;
 VAR_41 = FUNC_9(VAR_46, VAR_2);
 if (!VAR_41)
  return -VAR_1;

 FUNC_4(VAR_13, VAR_41, VAR_29, FUNC_12(VAR_37)->uid);
 VAR_42 = FUNC_0(VAR_13, VAR_41, VAR_14);
 if (!(VAR_34->flags & VAR_4))
  FUNC_4(VAR_42, VAR_42, VAR_31, 1);
 FUNC_4(VAR_42, VAR_42, VAR_24, VAR_6);
 FUNC_4(VAR_42, VAR_42, VAR_28, VAR_7);
 FUNC_4(VAR_42, VAR_42, VAR_17, 1);
 FUNC_4(VAR_42, VAR_42, VAR_30, FUNC_2(VAR_44, VAR_44, VAR_30));
 FUNC_4(VAR_42, VAR_42, VAR_10, FUNC_2(VAR_44, VAR_44, VAR_11));

 if (VAR_38->flags & VAR_3)
  FUNC_4(VAR_42, VAR_42, VAR_27, 1);

 VAR_43 = FUNC_0(VAR_42, VAR_42, VAR_43);
 FUNC_4(VAR_43, VAR_43, VAR_32, VAR_9);
 if (VAR_34->flags & VAR_5)
  FUNC_4(VAR_43, VAR_43, VAR_16, VAR_8);
 FUNC_4(VAR_43, VAR_43, VAR_25, FUNC_2(VAR_44, VAR_44, VAR_25));
 FUNC_4(VAR_43, VAR_43, VAR_37, FUNC_2(VAR_44, VAR_44, VAR_37));
 FUNC_5(VAR_43, VAR_43, VAR_15, FUNC_3(VAR_44, VAR_44, VAR_15));
 FUNC_4(VAR_43, VAR_43, VAR_22, FUNC_2(VAR_44, VAR_44, VAR_20) + 4);
 FUNC_4(VAR_43, VAR_43, VAR_21, FUNC_2(VAR_44, VAR_44, VAR_18));
 FUNC_4(VAR_43, VAR_43, VAR_23, FUNC_2(VAR_44, VAR_44, VAR_19));

 VAR_39 = (__be64 *)FUNC_0(VAR_43, VAR_43, VAR_39);
 VAR_40 = (__be64 *)FUNC_0(VAR_12, VAR_35, VAR_39);
 FUNC_10(VAR_39, VAR_40, VAR_45);

 VAR_47 = FUNC_11(VAR_33->mdev, VAR_41, VAR_46, &VAR_34->base.mqp);

 FUNC_8(VAR_41);

 return VAR_47;
}
