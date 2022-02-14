
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clock_event_device {char* name; int features; int shift; int rating; int irq; int cpumask; void* tick_resume; void* set_state_oneshot; int set_state_periodic; void* set_state_shutdown; int set_next_event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct clock_event_device*,int ,int,int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 struct clock_event_device* FUNC_4 (int ,unsigned int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_10)
{
 struct clock_event_device *VAR_11 = FUNC_4(VAR_7, VAR_10);
 u32 VAR_12 = 0, VAR_13 = 0;

 if (VAR_8)
  VAR_13 = VAR_2;
 else
  VAR_12 = VAR_2;
 FUNC_3(VAR_12, VAR_13);

 VAR_11->name = "armada_370_xp_per_cpu_tick",
 VAR_11->features = VAR_0 |
      VAR_1;
 VAR_11->shift = 32,
 VAR_11->rating = 300,
 VAR_11->set_next_event = VAR_4,
 VAR_11->set_state_shutdown = VAR_6;
 VAR_11->set_state_periodic = VAR_5;
 VAR_11->set_state_oneshot = VAR_6;
 VAR_11->tick_resume = VAR_6;
 VAR_11->irq = VAR_3;
 VAR_11->cpumask = FUNC_1(VAR_10);

 FUNC_0(VAR_11, VAR_9, 1, 0xfffffffe);
 FUNC_2(VAR_11->irq, 0);

 return 0;
}
