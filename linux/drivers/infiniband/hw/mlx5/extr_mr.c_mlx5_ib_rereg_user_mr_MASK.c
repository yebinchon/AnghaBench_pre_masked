
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_12__ {int pd; void* size; void* iova; } ;
struct TYPE_11__ {struct ib_pd* pd; } ;
struct mlx5_ib_mr {int access_flags; TYPE_6__* umem; TYPE_4__ mmkey; TYPE_3__ ibmr; scalar_t__ allocated_from_cache; int npages; } ;
struct mlx5_ib_dev {TYPE_2__* mdev; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int dummy; } ;
struct ib_mr {struct ib_pd* pd; int device; } ;
struct TYPE_14__ {void* length; void* address; } ;
struct TYPE_13__ {int pdn; } ;
struct TYPE_9__ {int reg_pages; } ;
struct TYPE_10__ {TYPE_1__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct mlx5_ib_mr*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct mlx5_ib_mr*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct mlx5_ib_dev*,struct mlx5_ib_mr*) ;
 int FUNC_4 (struct mlx5_ib_dev*,struct mlx5_ib_mr*) ;
 int FUNC_5 (TYPE_6__*) ;
 scalar_t__ FUNC_6 (struct mlx5_ib_mr*) ;
 int FUNC_7 (struct mlx5_ib_dev*,int) ;
 int FUNC_8 (struct mlx5_ib_dev*,char*,void*,void*,void*,int) ;
 int FUNC_9 (struct mlx5_ib_mr*,int ,int,int,int) ;
 int FUNC_10 (struct mlx5_ib_dev*,struct ib_udata*,void*,void*,int,TYPE_6__**,int*,int*,int*,int*) ;
 struct mlx5_ib_mr* FUNC_11 (struct ib_mr*,struct ib_pd*,void*,void*,TYPE_6__*,int,int,int,int) ;
 int FUNC_12 (struct ib_pd*,struct mlx5_ib_mr*,int,int) ;
 int FUNC_13 (struct mlx5_ib_dev*,struct mlx5_ib_mr*,int,void*,int) ;
 struct mlx5_ib_dev* FUNC_14 (int ) ;
 struct mlx5_ib_mr* FUNC_15 (struct ib_mr*) ;
 TYPE_5__* FUNC_16 (struct ib_pd*) ;
 int FUNC_17 (struct mlx5_ib_dev*,struct mlx5_ib_mr*) ;
 int FUNC_18 (struct mlx5_ib_mr*,void*,void*) ;

int FUNC_19(struct ib_mr *VAR_8, int VAR_9, u64 VAR_10,
     u64 VAR_11, u64 VAR_12, int VAR_13,
     struct ib_pd *VAR_14, struct ib_udata *VAR_15)
{
 struct mlx5_ib_dev *VAR_16 = FUNC_14(VAR_8->device);
 struct mlx5_ib_mr *VAR_17 = FUNC_15(VAR_8);
 struct ib_pd *VAR_18 = (VAR_9 & VAR_3) ? VAR_14 : VAR_8->pd;
 int VAR_19 = VAR_9 & VAR_2 ?
       VAR_13 :
       VAR_17->access_flags;
 int VAR_20 = 0;
 int VAR_21 = 0;
 int VAR_22 = 0;
 int VAR_23 = 0;
 int VAR_24 = 0;
 u64 VAR_25, VAR_26;
 int VAR_27;

 FUNC_8(VAR_16, "start 0x%llx, virt_addr 0x%llx, length 0x%llx, access_flags 0x%x\n",
      VAR_10, VAR_12, VAR_11, VAR_19);

 FUNC_2(VAR_17->npages, &VAR_16->mdev->priv.reg_pages);

 if (!VAR_17->umem)
  return -VAR_0;

 if (FUNC_6(VAR_17))
  return -VAR_1;

 if (VAR_9 & VAR_4) {
  VAR_25 = VAR_12;
  VAR_26 = VAR_11;
 } else {
  VAR_25 = VAR_17->umem->address;
  VAR_26 = VAR_17->umem->length;
 }

 if (VAR_9 != VAR_3) {




  VAR_9 |= VAR_4;
  FUNC_5(VAR_17->umem);
  VAR_17->umem = ((void*)0);
  VAR_27 = FUNC_10(VAR_16, VAR_15, VAR_25, VAR_26, VAR_19,
      &VAR_17->umem, &VAR_22, &VAR_20, &VAR_23,
      &VAR_24);
  if (VAR_27)
   goto err;
 }

 if (!FUNC_7(VAR_16, 1) ||
     (VAR_9 & VAR_4 && !FUNC_18(VAR_17, VAR_25, VAR_26))) {



  if (VAR_17->allocated_from_cache)
   VAR_27 = FUNC_17(VAR_16, VAR_17);
  else
   VAR_27 = FUNC_4(VAR_16, VAR_17);
  if (VAR_27)
   goto err;

  VAR_17 = FUNC_11(VAR_8, VAR_18, VAR_25, VAR_26, VAR_17->umem, VAR_23,
    VAR_20, VAR_19, 1);

  if (FUNC_0(VAR_17)) {
   VAR_27 = FUNC_1(VAR_17);
   VAR_17 = FUNC_15(VAR_8);
   goto err;
  }

  VAR_17->allocated_from_cache = 0;
 } else {



  VAR_17->ibmr.pd = VAR_18;
  VAR_17->access_flags = VAR_19;
  VAR_17->mmkey.iova = VAR_25;
  VAR_17->mmkey.size = VAR_26;
  VAR_17->mmkey.pd = FUNC_16(VAR_18)->pdn;

  if (VAR_9 & VAR_4) {
   VAR_21 = VAR_6;
   if (VAR_9 & VAR_3)
    VAR_21 |= VAR_7;
   if (VAR_9 & VAR_2)
    VAR_21 |= VAR_5;
   VAR_27 = FUNC_9(VAR_17, 0, VAR_22, VAR_20,
       VAR_21);
  } else {
   VAR_27 = FUNC_12(VAR_18, VAR_17, VAR_19, VAR_9);
  }

  if (VAR_27)
   goto err;
 }

 FUNC_13(VAR_16, VAR_17, VAR_22, VAR_26, VAR_19);

 return 0;

err:
 FUNC_5(VAR_17->umem);
 VAR_17->umem = ((void*)0);

 FUNC_3(VAR_16, VAR_17);
 return VAR_27;
}
