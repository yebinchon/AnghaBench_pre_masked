
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clock_event_device {char const* name; int rating; int shift; int max_delta_ticks; int min_delta_ticks; void* min_delta_ns; void* max_delta_ns; int mult; int resume; int suspend; int set_state_oneshot; int set_state_periodic; int set_state_shutdown; int set_next_event; int cpumask; int features; } ;
struct sh_cmt_channel {int max_match_value; int index; TYPE_1__* cmt; struct clock_event_device ced; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {TYPE_2__* pdev; int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int,struct clock_event_device*) ;
 int FUNC_1 (struct clock_event_device*) ;
 int VAR_6 ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (int,int ,int,int ,struct sh_cmt_channel*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_8(struct sh_cmt_channel *VAR_14,
          const char *VAR_15)
{
 struct clock_event_device *VAR_16 = &VAR_14->ced;
 int VAR_17;
 int VAR_18;

 VAR_17 = FUNC_6(VAR_14->cmt->pdev, VAR_14->index);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_18 = FUNC_7(VAR_17, VAR_13,
     VAR_4 | VAR_2 | VAR_3,
     FUNC_4(&VAR_14->cmt->pdev->dev), VAR_14);
 if (VAR_18) {
  FUNC_2(&VAR_14->cmt->pdev->dev, "ch%u: failed to request irq %d\n",
   VAR_14->index, VAR_17);
  return VAR_18;
 }

 VAR_16->name = VAR_15;
 VAR_16->features = VAR_1;
 VAR_16->features |= VAR_0;
 VAR_16->rating = 125;
 VAR_16->cpumask = VAR_6;
 VAR_16->set_next_event = VAR_7;
 VAR_16->set_state_shutdown = VAR_11;
 VAR_16->set_state_periodic = VAR_10;
 VAR_16->set_state_oneshot = VAR_9;
 VAR_16->suspend = VAR_12;
 VAR_16->resume = VAR_8;


 VAR_16->shift = 32;
 VAR_16->mult = FUNC_5(VAR_14->cmt->rate, VAR_5, VAR_16->shift);
 VAR_16->max_delta_ns = FUNC_0(VAR_14->max_match_value, VAR_16);
 VAR_16->max_delta_ticks = VAR_14->max_match_value;
 VAR_16->min_delta_ns = FUNC_0(0x1f, VAR_16);
 VAR_16->min_delta_ticks = 0x1f;

 FUNC_3(&VAR_14->cmt->pdev->dev, "ch%u: used for clock events\n",
   VAR_14->index);
 FUNC_1(VAR_16);

 return 0;
}
