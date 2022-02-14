
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int alloc; int srq; int lock; } ;
struct TYPE_3__ {scalar_t__ num_srqs; int reserved_srqs; } ;
struct mthca_dev {int mthca_flags; TYPE_2__ srq_table; TYPE_1__ limits; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct mthca_dev *VAR_1)
{
 int VAR_2;

 if (!(VAR_1->mthca_flags & VAR_0))
  return 0;

 FUNC_3(&VAR_1->srq_table.lock);

 VAR_2 = FUNC_1(&VAR_1->srq_table.alloc,
          VAR_1->limits.num_srqs,
          VAR_1->limits.num_srqs - 1,
          VAR_1->limits.reserved_srqs);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(&VAR_1->srq_table.srq,
          VAR_1->limits.num_srqs);
 if (VAR_2)
  FUNC_0(&VAR_1->srq_table.alloc);

 return VAR_2;
}
