
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max; } ;
struct mlx5_ib_srq {int mutex; TYPE_1__ msrq; } ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_udata {int dummy; } ;
struct ib_srq_attr {scalar_t__ srq_limit; } ;
struct ib_srq {int device; } ;
typedef enum ib_srq_attr_mask { ____Placeholder_ib_srq_attr_mask } ib_srq_attr_mask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_ib_dev*,TYPE_1__*,scalar_t__,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mlx5_ib_dev* FUNC_3 (int ) ;
 struct mlx5_ib_srq* FUNC_4 (struct ib_srq*) ;

int FUNC_5(struct ib_srq *VAR_3, struct ib_srq_attr *VAR_4,
         enum ib_srq_attr_mask VAR_5, struct ib_udata *VAR_6)
{
 struct mlx5_ib_dev *VAR_7 = FUNC_3(VAR_3->device);
 struct mlx5_ib_srq *VAR_8 = FUNC_4(VAR_3);
 int VAR_9;


 if (VAR_5 & VAR_2)
  return -VAR_0;

 if (VAR_5 & VAR_1) {
  if (VAR_4->srq_limit >= VAR_8->msrq.max)
   return -VAR_0;

  FUNC_1(&VAR_8->mutex);
  VAR_9 = FUNC_0(VAR_7, &VAR_8->msrq, VAR_4->srq_limit, 1);
  FUNC_2(&VAR_8->mutex);

  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
