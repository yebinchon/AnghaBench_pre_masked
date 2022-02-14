
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int cur; } ;
struct TYPE_4__ {int lock; TYPE_1__ pbl; } ;
struct c4iw_rdev {int pbl_kref; int pbl_pool; TYPE_2__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,scalar_t__,int) ;
 scalar_t__ FUNC_5 (int,int) ;

void FUNC_6(struct c4iw_rdev *VAR_2, u32 VAR_3, int VAR_4)
{
 FUNC_4("addr 0x%x size %d\n", VAR_3, VAR_4);
 FUNC_2(&VAR_2->stats.lock);
 VAR_2->stats.pbl.cur -= FUNC_5(VAR_4, 1 << VAR_0);
 FUNC_3(&VAR_2->stats.lock);
 FUNC_0(VAR_2->pbl_pool, (unsigned long)VAR_3, VAR_4);
 FUNC_1(&VAR_2->pbl_kref, VAR_1);
}
