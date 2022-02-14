
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct devfreq {int lock; TYPE_2__ dev; TYPE_1__* profile; int node; } ;
struct TYPE_3__ {int (* exit ) (int ) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct devfreq*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 struct devfreq* FUNC_9 (struct device*) ;

__attribute__((used)) static void FUNC_10(struct device *VAR_1)
{
 struct devfreq *VAR_2 = FUNC_9(VAR_1);

 FUNC_6(&VAR_0);
 if (FUNC_0(FUNC_2(VAR_2->dev.parent))) {
  FUNC_7(&VAR_0);
  FUNC_1(&VAR_2->dev, "releasing devfreq which doesn't exist\n");
  return;
 }
 FUNC_4(&VAR_2->node);
 FUNC_7(&VAR_0);

 if (VAR_2->profile->exit)
  VAR_2->profile->exit(VAR_2->dev.parent);

 FUNC_5(&VAR_2->lock);
 FUNC_3(VAR_2);
}
