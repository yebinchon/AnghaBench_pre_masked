
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct host1x {int intr_syncpt_irq; int dev; TYPE_3__* syncpt; TYPE_1__* info; } ;
struct TYPE_5__ {int work; } ;
struct TYPE_6__ {TYPE_2__ intr; } ;
struct TYPE_4__ {unsigned int nb_pts; } ;


 int FUNC_0 (int *,void (*) (struct work_struct*)) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int ,char*,struct host1x*) ;
 int FUNC_3 (struct host1x*) ;
 int FUNC_4 (struct host1x*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(struct host1x *VAR_2, u32 VAR_3,
       void (*VAR_4)(struct work_struct *))
{
 unsigned int VAR_5;
 int VAR_6;

 FUNC_3(VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_2->info->nb_pts; VAR_5++)
  FUNC_0(&VAR_2->syncpt[VAR_5].intr.work, VAR_4);

 VAR_6 = FUNC_2(VAR_2->dev, VAR_2->intr_syncpt_irq,
          VAR_1, VAR_0,
          "host1x_syncpt", VAR_2);
 if (VAR_6 < 0) {
  FUNC_1(1);
  return VAR_6;
 }

 FUNC_4(VAR_2, VAR_3);

 return 0;
}
