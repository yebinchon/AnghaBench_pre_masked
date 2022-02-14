
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cur; scalar_t__ max; int fail; } ;
struct TYPE_6__ {int lock; TYPE_2__ srqt; } ;
struct TYPE_4__ {int srq_table; } ;
struct c4iw_rdev {TYPE_3__ stats; TYPE_1__ resource; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct c4iw_rdev *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1->resource.srq_table);
 FUNC_1(&VAR_1->stats.lock);
 if (VAR_2 == -1) {
  VAR_1->stats.srqt.fail++;
  FUNC_2(&VAR_1->stats.lock);
  return -VAR_0;
 }
 VAR_1->stats.srqt.cur++;
 if (VAR_1->stats.srqt.cur > VAR_1->stats.srqt.max)
  VAR_1->stats.srqt.max = VAR_1->stats.srqt.cur;
 FUNC_2(&VAR_1->stats.lock);
 return VAR_2;
}
