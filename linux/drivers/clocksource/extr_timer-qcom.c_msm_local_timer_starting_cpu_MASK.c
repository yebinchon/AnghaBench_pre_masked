
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {char* name; int rating; int irq; int cpumask; int set_next_event; void* tick_resume; void* set_state_oneshot; void* set_state_shutdown; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct clock_event_device*,int ,int,int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 struct clock_event_device* FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int,char*,struct clock_event_device*) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_12)
{
 struct clock_event_device *VAR_13 = FUNC_3(VAR_6, VAR_12);
 int VAR_14;

 VAR_13->irq = VAR_9;
 VAR_13->name = "msm_timer";
 VAR_13->features = VAR_0;
 VAR_13->rating = 200;
 VAR_13->set_state_shutdown = VAR_11;
 VAR_13->set_state_oneshot = VAR_11;
 VAR_13->tick_resume = VAR_11;
 VAR_13->set_next_event = VAR_10;
 VAR_13->cpumask = FUNC_1(VAR_12);

 FUNC_0(VAR_13, VAR_1, 4, 0xffffffff);

 if (VAR_7) {
  FUNC_2(VAR_13->irq, VAR_5);
 } else {
  VAR_14 = FUNC_5(VAR_13->irq, VAR_8,
    VAR_3 | VAR_2 |
    VAR_4, "gp_timer", VAR_13);
  if (VAR_14)
   FUNC_4("request_irq failed\n");
 }

 return 0;
}
