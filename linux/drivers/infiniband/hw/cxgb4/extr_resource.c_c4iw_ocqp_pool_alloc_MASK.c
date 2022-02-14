
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ cur; scalar_t__ max; } ;
struct TYPE_4__ {int lock; TYPE_1__ ocqp; } ;
struct c4iw_rdev {TYPE_2__ stats; int ocqp_pool; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int) ;
 scalar_t__ FUNC_4 (int,int) ;

u32 FUNC_5(struct c4iw_rdev *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_1->ocqp_pool, VAR_2);
 FUNC_3("addr 0x%x size %d\n", (u32)VAR_3, VAR_2);
 if (VAR_3) {
  FUNC_1(&VAR_1->stats.lock);
  VAR_1->stats.ocqp.cur += FUNC_4(VAR_2, 1 << VAR_0);
  if (VAR_1->stats.ocqp.cur > VAR_1->stats.ocqp.max)
   VAR_1->stats.ocqp.max = VAR_1->stats.ocqp.cur;
  FUNC_2(&VAR_1->stats.lock);
 }
 return (u32)VAR_3;
}
