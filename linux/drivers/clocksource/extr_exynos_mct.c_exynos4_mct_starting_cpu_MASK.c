
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int features; int rating; int irq; void* tick_resume; void* set_state_oneshot_stopped; void* set_state_oneshot; void* set_state_shutdown; int set_state_periodic; int set_next_event; int cpumask; int name; } ;
struct mct_clock_event_device {scalar_t__ base; int name; struct clock_event_device evt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct clock_event_device*,int,int,int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,scalar_t__) ;
 int VAR_8 ;
 int FUNC_6 (int,int ) ;
 scalar_t__ VAR_9 ;
 int * VAR_10 ;
 struct mct_clock_event_device* FUNC_7 (int *,unsigned int) ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int FUNC_8 (int ,int,char*,unsigned int) ;

__attribute__((used)) static int FUNC_9(unsigned int VAR_14)
{
 struct mct_clock_event_device *VAR_15 =
  FUNC_7(&VAR_11, VAR_14);
 struct clock_event_device *VAR_16 = &VAR_15->evt;

 VAR_15->base = FUNC_0(VAR_14);
 FUNC_8(VAR_15->name, sizeof(VAR_15->name), "mct_tick%d", VAR_14);

 VAR_16->name = VAR_15->name;
 VAR_16->cpumask = FUNC_2(VAR_14);
 VAR_16->set_next_event = VAR_8;
 VAR_16->set_state_periodic = VAR_12;
 VAR_16->set_state_shutdown = VAR_13;
 VAR_16->set_state_oneshot = VAR_13;
 VAR_16->set_state_oneshot_stopped = VAR_13;
 VAR_16->tick_resume = VAR_13;
 VAR_16->features = VAR_1 | VAR_0;
 VAR_16->rating = 500;

 FUNC_5(VAR_6, VAR_15->base + VAR_5);

 if (VAR_9 == VAR_3) {

  if (VAR_16->irq == -1)
   return -VAR_2;

  FUNC_6(VAR_16->irq, FUNC_2(VAR_14));
  FUNC_3(VAR_16->irq);
 } else {
  FUNC_4(VAR_10[VAR_4], 0);
 }
 FUNC_1(VAR_16, VAR_7 / (VAR_6 + 1),
     0xf, 0x7fffffff);

 return 0;
}
