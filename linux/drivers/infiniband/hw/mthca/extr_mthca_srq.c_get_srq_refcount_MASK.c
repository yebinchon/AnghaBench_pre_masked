
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_srq {int refcount; } ;
struct TYPE_2__ {int lock; } ;
struct mthca_dev {TYPE_1__ srq_table; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct mthca_dev *VAR_0, struct mthca_srq *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->srq_table.lock);
 VAR_2 = VAR_1->refcount;
 FUNC_1(&VAR_0->srq_table.lock);

 return VAR_2;
}
