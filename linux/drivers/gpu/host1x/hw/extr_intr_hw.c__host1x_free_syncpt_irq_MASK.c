
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct host1x {TYPE_3__* syncpt; TYPE_1__* info; int intr_syncpt_irq; int dev; } ;
struct TYPE_5__ {int work; } ;
struct TYPE_6__ {TYPE_2__ intr; } ;
struct TYPE_4__ {unsigned int nb_pts; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,struct host1x*) ;

__attribute__((used)) static int FUNC_2(struct host1x *VAR_0)
{
 unsigned int VAR_1;

 FUNC_1(VAR_0->dev, VAR_0->intr_syncpt_irq, VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->info->nb_pts; VAR_1++)
  FUNC_0(&VAR_0->syncpt[VAR_1].intr.work);

 return 0;
}
