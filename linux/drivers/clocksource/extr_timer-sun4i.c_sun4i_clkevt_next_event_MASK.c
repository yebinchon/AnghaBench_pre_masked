
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_of {int dummy; } ;
struct clock_event_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct timer_of*) ;
 struct timer_of* FUNC_4 (struct clock_event_device*) ;

__attribute__((used)) static int FUNC_5(unsigned long VAR_1,
       struct clock_event_device *VAR_2)
{
 struct timer_of *VAR_3 = FUNC_4(VAR_2);

 FUNC_2(FUNC_3(VAR_3), 0);
 FUNC_0(FUNC_3(VAR_3), 0, VAR_1 - VAR_0);
 FUNC_1(FUNC_3(VAR_3), 0, 0);

 return 0;
}
