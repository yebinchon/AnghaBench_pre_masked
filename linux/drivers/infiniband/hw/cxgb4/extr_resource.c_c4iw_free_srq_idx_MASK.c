
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cur; } ;
struct TYPE_6__ {int lock; TYPE_2__ srqt; } ;
struct TYPE_4__ {int srq_table; } ;
struct c4iw_rdev {TYPE_3__ stats; TYPE_1__ resource; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct c4iw_rdev *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->resource.srq_table, VAR_1);
 FUNC_1(&VAR_0->stats.lock);
 VAR_0->stats.srqt.cur--;
 FUNC_2(&VAR_0->stats.lock);
}
