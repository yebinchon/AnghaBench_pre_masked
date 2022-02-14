
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {unsigned int rating; int set_state_periodic; int features; int set_state_shutdown; int set_next_event; int set_state_oneshot; int cpumask; int name; int irq; } ;
struct hpet_channel {int boot_cfg; int cpu; int name; int irq; struct clock_event_device evt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(struct hpet_channel *VAR_7, unsigned int VAR_8)
{
 struct clock_event_device *VAR_9 = &VAR_7->evt;

 VAR_9->rating = VAR_8;
 VAR_9->irq = VAR_7->irq;
 VAR_9->name = VAR_7->name;
 VAR_9->cpumask = FUNC_0(VAR_7->cpu);
 VAR_9->set_state_oneshot = VAR_4;
 VAR_9->set_next_event = VAR_3;
 VAR_9->set_state_shutdown = VAR_6;

 VAR_9->features = VAR_0;
 if (VAR_7->boot_cfg & VAR_2) {
  VAR_9->features |= VAR_1;
  VAR_9->set_state_periodic = VAR_5;
 }
}
