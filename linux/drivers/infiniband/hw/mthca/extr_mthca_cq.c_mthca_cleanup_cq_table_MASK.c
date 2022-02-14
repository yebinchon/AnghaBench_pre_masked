
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int alloc; int cq; } ;
struct TYPE_3__ {int num_cqs; } ;
struct mthca_dev {TYPE_2__ cq_table; TYPE_1__ limits; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct mthca_dev *VAR_0)
{
 FUNC_1(&VAR_0->cq_table.cq, VAR_0->limits.num_cqs);
 FUNC_0(&VAR_0->cq_table.alloc);
}
