
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_c {unsigned int stripes; int trigger_event; TYPE_1__* stripe; } ;
struct dm_target {scalar_t__ private; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct dm_target*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct stripe_c*) ;

__attribute__((used)) static void FUNC_3(struct dm_target *VAR_0)
{
 unsigned int VAR_1;
 struct stripe_c *VAR_2 = (struct stripe_c *) VAR_0->private;

 for (VAR_1 = 0; VAR_1 < VAR_2->stripes; VAR_1++)
  FUNC_0(VAR_0, VAR_2->stripe[VAR_1].dev);

 FUNC_1(&VAR_2->trigger_event);
 FUNC_2(VAR_2);
}
