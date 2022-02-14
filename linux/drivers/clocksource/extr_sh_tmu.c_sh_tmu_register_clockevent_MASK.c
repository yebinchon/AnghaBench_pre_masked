
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clock_event_device {char const* name; int rating; int resume; int suspend; int set_state_oneshot; int set_state_periodic; int set_state_shutdown; int set_next_event; int cpumask; int features; } ;
struct sh_tmu_channel {int irq; int index; TYPE_2__* tmu; struct clock_event_device ced; } ;
struct TYPE_4__ {TYPE_1__* pdev; int rate; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct clock_event_device*,int ,int,int) ;
 int VAR_5 ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int,int ,struct sh_tmu_channel*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_5(struct sh_tmu_channel *VAR_13,
           const char *VAR_14)
{
 struct clock_event_device *VAR_15 = &VAR_13->ced;
 int VAR_16;

 VAR_15->name = VAR_14;
 VAR_15->features = VAR_1;
 VAR_15->features |= VAR_0;
 VAR_15->rating = 200;
 VAR_15->cpumask = VAR_5;
 VAR_15->set_next_event = VAR_6;
 VAR_15->set_state_shutdown = VAR_10;
 VAR_15->set_state_periodic = VAR_9;
 VAR_15->set_state_oneshot = VAR_8;
 VAR_15->suspend = VAR_11;
 VAR_15->resume = VAR_7;

 FUNC_2(&VAR_13->tmu->pdev->dev, "ch%u: used for clock events\n",
   VAR_13->index);

 FUNC_0(VAR_15, VAR_13->tmu->rate, 0x300, 0xffffffff);

 VAR_16 = FUNC_4(VAR_13->irq, VAR_12,
     VAR_4 | VAR_2 | VAR_3,
     FUNC_3(&VAR_13->tmu->pdev->dev), VAR_13);
 if (VAR_16) {
  FUNC_1(&VAR_13->tmu->pdev->dev, "ch%u: failed to request irq %d\n",
   VAR_13->index, VAR_13->irq);
  return;
 }
}
