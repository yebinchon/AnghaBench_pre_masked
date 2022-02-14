
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ cur; scalar_t__ max; int fail; } ;
struct TYPE_6__ {int lock; TYPE_2__ rqt; } ;
struct TYPE_4__ {int pdev; } ;
struct c4iw_rdev {TYPE_3__ stats; int rqt_kref; TYPE_1__ lldi; int rqt_pool; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (int,int) ;

u32 FUNC_8(struct c4iw_rdev *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_1->rqt_pool, VAR_2 << 6);
 FUNC_5("addr 0x%x size %d\n", (u32)VAR_3, VAR_2 << 6);
 if (!VAR_3)
  FUNC_6("%s: Out of RQT memory\n",
        FUNC_4(VAR_1->lldi.pdev));
 FUNC_2(&VAR_1->stats.lock);
 if (VAR_3) {
  VAR_1->stats.rqt.cur += FUNC_7(VAR_2 << 6, 1 << VAR_0);
  if (VAR_1->stats.rqt.cur > VAR_1->stats.rqt.max)
   VAR_1->stats.rqt.max = VAR_1->stats.rqt.cur;
  FUNC_1(&VAR_1->rqt_kref);
 } else
  VAR_1->stats.rqt.fail++;
 FUNC_3(&VAR_1->stats.lock);
 return (u32)VAR_3;
}
