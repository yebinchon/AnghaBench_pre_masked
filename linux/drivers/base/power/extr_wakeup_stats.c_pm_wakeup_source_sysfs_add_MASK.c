
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* wakeup; } ;
struct device {TYPE_1__ power; } ;
struct TYPE_4__ {scalar_t__ dev; } ;


 int FUNC_0 (struct device*,TYPE_2__*) ;

int FUNC_1(struct device *VAR_0)
{
 if (!VAR_0->power.wakeup || VAR_0->power.wakeup->dev)
  return 0;

 return FUNC_0(VAR_0, VAR_0->power.wakeup);
}
