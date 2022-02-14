
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {int irq; struct clock_event_device* dev_id; } ;
struct clock_event_device {char* name; int rating; unsigned long max_delta_ticks; int min_delta_ticks; int irq; int cpumask; void* min_delta_ns; void* max_delta_ns; int set_next_event; void* tick_resume; void* set_state_oneshot; void* set_state_shutdown; int features; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int,struct clock_event_device*) ;
 int FUNC_2 (struct clock_event_device*,int ,int) ;
 int FUNC_3 (struct clock_event_device*) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int ,int ) ;
 struct clock_event_device* FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (int ,struct irqaction*) ;
 int VAR_2 ;
 struct irqaction VAR_3 ;
 struct irqaction VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;

__attribute__((used)) static int FUNC_8(unsigned int VAR_7)
{
 struct clock_event_device *VAR_8 = FUNC_6(VAR_2, VAR_7);
 struct irqaction *VAR_9;

 if (VAR_7 == 0)
  VAR_9 = &VAR_4;
 else
  VAR_9 = &VAR_3;

 VAR_8->irq = VAR_9->irq;
 VAR_8->name = "local_timer";
 VAR_8->features = VAR_0;
 VAR_8->rating = 200;
 VAR_8->set_state_shutdown = VAR_6;
 VAR_8->set_state_oneshot = VAR_6;
 VAR_8->tick_resume = VAR_6;
 VAR_8->set_next_event = VAR_5;
 FUNC_2(VAR_8, VAR_1, 60);
 VAR_8->max_delta_ns = FUNC_1(-2, VAR_8);
 VAR_8->max_delta_ticks = (unsigned long)-2;
 VAR_8->min_delta_ns = FUNC_1(2, VAR_8);
 VAR_8->min_delta_ticks = 2;
 VAR_8->cpumask = FUNC_4(VAR_7);

 VAR_9->dev_id = VAR_8;
 FUNC_0(FUNC_7(VAR_8->irq, VAR_9));
 FUNC_5(VAR_9->irq, FUNC_4(VAR_7));

 FUNC_3(VAR_8);
 return 0;
}
