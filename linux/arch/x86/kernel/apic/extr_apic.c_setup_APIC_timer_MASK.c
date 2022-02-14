
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct clock_event_device {char* name; int features; int set_next_event; int cpumask; } ;
struct TYPE_3__ {int rating; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct clock_event_device*,int,int,unsigned long) ;
 int FUNC_1 (struct clock_event_device*) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct clock_event_device*,TYPE_1__*,int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 struct clock_event_device* FUNC_6 (int *) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_7(void)
{
 struct clock_event_device *VAR_10 = FUNC_6(&VAR_7);

 if (FUNC_5(VAR_4)) {
  VAR_6.features &= ~VAR_0;

  VAR_6.rating = 150;
 }

 FUNC_3(VAR_10, &VAR_6, sizeof(*VAR_10));
 VAR_10->cpumask = FUNC_2(FUNC_4());

 if (FUNC_5(VAR_5)) {
  VAR_10->name = "lapic-deadline";
  VAR_10->features &= ~(VAR_2 |
        VAR_1);
  VAR_10->set_next_event = VAR_8;
  FUNC_0(VAR_10,
      VAR_9 * (1000 / VAR_3),
      0xF, ~0UL);
 } else
  FUNC_1(VAR_10);
}
