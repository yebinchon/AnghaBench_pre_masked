
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dm_target {struct delay_c* private; } ;
struct TYPE_5__ {scalar_t__ dev; } ;
struct TYPE_4__ {scalar_t__ dev; } ;
struct TYPE_6__ {scalar_t__ dev; } ;
struct delay_c {int timer_lock; TYPE_2__ flush; TYPE_1__ write; TYPE_3__ read; scalar_t__ kdelayd_wq; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct dm_target*,scalar_t__) ;
 int FUNC_2 (struct delay_c*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dm_target *VAR_0)
{
 struct delay_c *VAR_1 = VAR_0->private;

 if (VAR_1->kdelayd_wq)
  FUNC_0(VAR_1->kdelayd_wq);

 if (VAR_1->read.dev)
  FUNC_1(VAR_0, VAR_1->read.dev);
 if (VAR_1->write.dev)
  FUNC_1(VAR_0, VAR_1->write.dev);
 if (VAR_1->flush.dev)
  FUNC_1(VAR_0, VAR_1->flush.dev);

 FUNC_3(&VAR_1->timer_lock);

 FUNC_2(VAR_1);
}
