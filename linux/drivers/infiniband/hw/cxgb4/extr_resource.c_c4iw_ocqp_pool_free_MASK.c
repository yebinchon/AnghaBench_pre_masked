
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int cur; } ;
struct TYPE_4__ {int lock; TYPE_1__ ocqp; } ;
struct c4iw_rdev {int ocqp_pool; TYPE_2__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (int,int) ;

void FUNC_5(struct c4iw_rdev *VAR_1, u32 VAR_2, int VAR_3)
{
 FUNC_3("addr 0x%x size %d\n", VAR_2, VAR_3);
 FUNC_1(&VAR_1->stats.lock);
 VAR_1->stats.ocqp.cur -= FUNC_4(VAR_3, 1 << VAR_0);
 FUNC_2(&VAR_1->stats.lock);
 FUNC_0(VAR_1->ocqp_pool, (unsigned long)VAR_2, VAR_3);
}
