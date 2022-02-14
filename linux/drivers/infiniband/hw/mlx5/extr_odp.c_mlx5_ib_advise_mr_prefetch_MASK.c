
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct prefetch_mr_work {int pf_flags; int num_sge; int work; struct ib_pd* pd; int sg_list; } ;
struct mlx5_ib_dev {int mr_srcu; } ;
struct ib_sge {int dummy; } ;
struct ib_pd {int device; } ;
typedef enum ib_uverbs_advise_mr_advice { ____Placeholder_ib_uverbs_advise_mr_advice } ib_uverbs_advise_mr_advice ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct prefetch_mr_work*) ;
 struct prefetch_mr_work* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct ib_sge*,int) ;
 int VAR_7 ;
 int FUNC_4 (struct ib_pd*,int,struct ib_sge*,int) ;
 int FUNC_5 (struct ib_pd*,struct ib_sge*,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (struct prefetch_mr_work*,struct ib_sge*,int) ;
 int VAR_8 ;
 struct mlx5_ib_dev* FUNC_10 (int ) ;

int FUNC_11(struct ib_pd *VAR_9,
          enum ib_uverbs_advise_mr_advice VAR_10,
          u32 VAR_11, struct ib_sge *VAR_12, u32 VAR_13)
{
 struct mlx5_ib_dev *VAR_14 = FUNC_10(VAR_9->device);
 u32 VAR_15 = VAR_6;
 struct prefetch_mr_work *VAR_16;
 bool VAR_17;
 int VAR_18;

 if (VAR_10 == VAR_3)
  VAR_15 |= VAR_5;

 if (VAR_11 & VAR_4)
  return FUNC_4(VAR_9, VAR_15, VAR_12,
      VAR_13);

 VAR_16 = FUNC_2(FUNC_9(VAR_16, VAR_12, VAR_13), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 FUNC_3(VAR_16->sg_list, VAR_12, VAR_13 * sizeof(struct ib_sge));





 VAR_16->pd = VAR_9;
 VAR_16->pf_flags = VAR_15;
 VAR_16->num_sge = VAR_13;

 FUNC_0(&VAR_16->work, VAR_7);

 VAR_18 = FUNC_7(&VAR_14->mr_srcu);

 VAR_17 = FUNC_5(VAR_9, VAR_12, VAR_13);
 if (VAR_17)
  FUNC_6(VAR_8, &VAR_16->work);
 else
  FUNC_1(VAR_16);

 FUNC_8(&VAR_14->mr_srcu, VAR_18);

 return VAR_17 ? 0 : -VAR_0;
}
