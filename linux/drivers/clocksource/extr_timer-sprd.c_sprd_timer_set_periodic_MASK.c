
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_of {int dummy; } ;
struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct timer_of*) ;
 int FUNC_4 (struct timer_of*) ;
 struct timer_of* FUNC_5 (struct clock_event_device*) ;

__attribute__((used)) static int FUNC_6(struct clock_event_device *VAR_1)
{
 struct timer_of *VAR_2 = FUNC_5(VAR_1);

 FUNC_0(FUNC_3(VAR_2));
 FUNC_2(FUNC_3(VAR_2), FUNC_4(VAR_2));
 FUNC_1(FUNC_3(VAR_2), VAR_0);

 return 0;
}
