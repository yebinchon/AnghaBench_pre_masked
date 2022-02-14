
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {char* name; int rating; int set_next_event; int set_state_oneshot; int set_state_shutdown; int cpumask; int features; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct clock_event_device*,int ,int ,int ) ;
 int FUNC_1 (unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 struct clock_event_device* FUNC_2 (int ,unsigned int) ;

void FUNC_3(unsigned int VAR_10)
{
 struct clock_event_device *VAR_11;






 if (!(VAR_9.features & VAR_4))
  return;

 VAR_11 = FUNC_2(VAR_8, VAR_10);
 VAR_11->name = "Hyper-V clockevent";
 VAR_11->features = VAR_0;
 VAR_11->cpumask = FUNC_1(VAR_10);
 VAR_11->rating = 1000;
 VAR_11->set_state_shutdown = VAR_7;
 VAR_11->set_state_oneshot = VAR_6;
 VAR_11->set_next_event = VAR_5;

 FUNC_0(VAR_11,
     VAR_1,
     VAR_3,
     VAR_2);
}
