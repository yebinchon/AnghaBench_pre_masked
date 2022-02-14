
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_of {int dummy; } ;
struct clock_event_device {int dummy; } ;


 int FUNC_0 (int ,int,unsigned long) ;
 int FUNC_1 (struct timer_of*) ;
 struct timer_of* FUNC_2 (struct clock_event_device*) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_0,
          struct clock_event_device *VAR_1)
{
 struct timer_of *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(FUNC_1(VAR_2), 0, VAR_0);

 return 0;
}
