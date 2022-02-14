
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct timer_of {int dummy; } ;
struct clock_event_device {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct timer_of*) ;
 struct timer_of* FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_3,
 struct clock_event_device *VAR_4)
{
 u32 VAR_5;
 struct timer_of *VAR_6 = FUNC_2(VAR_4);

 VAR_5 = FUNC_0(FUNC_1(VAR_6) + VAR_2);
 FUNC_3(VAR_5 & ~VAR_0, FUNC_1(VAR_6) + VAR_2);
 FUNC_3(VAR_3, FUNC_1(VAR_6) + VAR_1);
 FUNC_3(VAR_5 | VAR_0, FUNC_1(VAR_6) + VAR_2);

 return 0;
}
