
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_of {int dummy; } ;
struct clock_event_device {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct timer_of*) ;
 int FUNC_1 (struct timer_of*) ;
 struct timer_of* FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_2,
          struct clock_event_device *VAR_3)
{
 struct timer_of *VAR_4 = FUNC_2(VAR_3);


 FUNC_3(VAR_0, FUNC_0(VAR_4));





 FUNC_3(VAR_2, FUNC_1(VAR_4));


 FUNC_3(VAR_0 | VAR_1, FUNC_0(VAR_4));

 return 0;
}
