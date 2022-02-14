
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int rating; int set_state_oneshot; int set_state_shutdown; int set_next_event; int cpumask; int features; int name; } ;
struct em_sti_priv {int rate; TYPE_1__* pdev; struct clock_event_device ced; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct clock_event_device*,int ,int,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct em_sti_priv *VAR_5)
{
 struct clock_event_device *VAR_6 = &VAR_5->ced;

 VAR_6->name = FUNC_2(&VAR_5->pdev->dev);
 VAR_6->features = VAR_0;
 VAR_6->rating = 200;
 VAR_6->cpumask = VAR_1;
 VAR_6->set_next_event = VAR_2;
 VAR_6->set_state_shutdown = VAR_4;
 VAR_6->set_state_oneshot = VAR_3;

 FUNC_1(&VAR_5->pdev->dev, "used for clock events\n");

 FUNC_0(VAR_6, VAR_5->rate, 2, 0xffffffff);
}
