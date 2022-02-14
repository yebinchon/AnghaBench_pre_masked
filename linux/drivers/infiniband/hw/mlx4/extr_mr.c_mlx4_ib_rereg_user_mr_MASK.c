
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* u64 ;
struct mlx4_mpt_entry {int dummy; } ;
struct TYPE_13__ {int access; int mtt; void* size; void* iova; } ;
struct mlx4_ib_mr {TYPE_2__ mmr; TYPE_6__* umem; } ;
struct mlx4_ib_dev {int dev; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int dummy; } ;
struct ib_mr {int device; } ;
struct TYPE_14__ {int writable; } ;
struct TYPE_12__ {int pdn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 TYPE_6__* FUNC_6 (struct ib_udata*,void*,void*,int) ;
 int FUNC_7 (struct mlx4_ib_dev*,int *,TYPE_6__*) ;
 int FUNC_8 (int ,struct mlx4_mpt_entry*,int ) ;
 int FUNC_9 (int ,struct mlx4_mpt_entry*,int ) ;
 int FUNC_10 (int ,TYPE_2__*,struct mlx4_mpt_entry***) ;
 int FUNC_11 (int ,struct mlx4_mpt_entry**) ;
 int FUNC_12 (int ,TYPE_2__*,struct mlx4_mpt_entry**) ;
 int FUNC_13 (int ,TYPE_2__*) ;
 int FUNC_14 (int ,TYPE_2__*,void*,void*,int,int,struct mlx4_mpt_entry*) ;
 struct mlx4_ib_dev* FUNC_15 (int ) ;
 struct mlx4_ib_mr* FUNC_16 (struct ib_mr*) ;
 TYPE_1__* FUNC_17 (struct ib_pd*) ;

int FUNC_18(struct ib_mr *VAR_5, int VAR_6,
     u64 VAR_7, u64 VAR_8, u64 VAR_9,
     int VAR_10, struct ib_pd *VAR_11,
     struct ib_udata *VAR_12)
{
 struct mlx4_ib_dev *VAR_13 = FUNC_15(VAR_5->device);
 struct mlx4_ib_mr *VAR_14 = FUNC_16(VAR_5);
 struct mlx4_mpt_entry *VAR_15;
 struct mlx4_mpt_entry **VAR_16 = &VAR_15;
 int VAR_17;





 VAR_17 = FUNC_10(VAR_13->dev, &VAR_14->mmr, &VAR_16);

 if (VAR_17)
  return VAR_17;

 if (VAR_6 & VAR_2) {
  VAR_17 = FUNC_9(VAR_13->dev, *VAR_16,
        FUNC_17(VAR_11)->pdn);

  if (VAR_17)
   goto release_mpt_entry;
 }

 if (VAR_6 & VAR_1) {
  if (FUNC_3(VAR_10) &&
      !VAR_14->umem->writable) {
   VAR_17 = -VAR_0;
   goto release_mpt_entry;
  }

  VAR_17 = FUNC_8(VAR_13->dev, *VAR_16,
            FUNC_2(VAR_10));

  if (VAR_17)
   goto release_mpt_entry;
 }

 if (VAR_6 & VAR_3) {
  int VAR_18;
  int VAR_19;

  FUNC_13(VAR_13->dev, &VAR_14->mmr);
  FUNC_5(VAR_14->umem);
  VAR_14->umem = FUNC_6(VAR_12, VAR_7, VAR_8,
          VAR_10);
  if (FUNC_0(VAR_14->umem)) {
   VAR_17 = FUNC_1(VAR_14->umem);

   VAR_14->umem = ((void*)0);
   goto release_mpt_entry;
  }
  VAR_19 = FUNC_4(VAR_14->umem);
  VAR_18 = VAR_4;

  VAR_17 = FUNC_14(VAR_13->dev, &VAR_14->mmr,
           VAR_9, VAR_8, VAR_19, VAR_18,
           *VAR_16);
  if (VAR_17) {
   FUNC_5(VAR_14->umem);
   goto release_mpt_entry;
  }
  VAR_14->mmr.iova = VAR_9;
  VAR_14->mmr.size = VAR_8;

  VAR_17 = FUNC_7(VAR_13, &VAR_14->mmr.mtt, VAR_14->umem);
  if (VAR_17) {
   FUNC_13(VAR_13->dev, &VAR_14->mmr);
   FUNC_5(VAR_14->umem);
   goto release_mpt_entry;
  }
 }




 VAR_17 = FUNC_12(VAR_13->dev, &VAR_14->mmr, VAR_16);
 if (!VAR_17 && VAR_6 & VAR_1)
  VAR_14->mmr.access = VAR_10;

release_mpt_entry:
 FUNC_11(VAR_13->dev, VAR_16);

 return VAR_17;
}
