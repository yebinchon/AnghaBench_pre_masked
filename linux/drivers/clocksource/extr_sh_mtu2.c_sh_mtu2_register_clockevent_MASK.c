
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clock_event_device {char const* name; int rating; int resume; int suspend; int set_state_periodic; int set_state_shutdown; int cpumask; int features; } ;
struct sh_mtu2_channel {int index; TYPE_2__* mtu; struct clock_event_device ced; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct clock_event_device*) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct sh_mtu2_channel *VAR_6,
     const char *VAR_7)
{
 struct clock_event_device *VAR_8 = &VAR_6->ced;

 VAR_8->name = VAR_7;
 VAR_8->features = VAR_0;
 VAR_8->rating = 200;
 VAR_8->cpumask = VAR_1;
 VAR_8->set_state_shutdown = VAR_4;
 VAR_8->set_state_periodic = VAR_3;
 VAR_8->suspend = VAR_5;
 VAR_8->resume = VAR_2;

 FUNC_1(&VAR_6->mtu->pdev->dev, "ch%u: used for clock events\n",
   VAR_6->index);
 FUNC_0(VAR_8);
}
