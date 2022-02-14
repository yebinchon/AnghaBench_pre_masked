
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_of {int dummy; } ;
struct clock_event_device {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct timer_of*) ;
 struct timer_of* FUNC_3 (struct clock_event_device*) ;

__attribute__((used)) static int FUNC_4(struct clock_event_device *VAR_0)
{
 struct timer_of *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(FUNC_2(VAR_1), 0);
 FUNC_0(FUNC_2(VAR_1), 0, 0);

 return 0;
}
