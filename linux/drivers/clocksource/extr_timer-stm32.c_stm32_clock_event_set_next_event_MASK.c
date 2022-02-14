
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_of {int dummy; } ;
struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct timer_of*) ;
 struct timer_of* FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_5,
         struct clock_event_device *VAR_6)
{
 struct timer_of *VAR_7 = FUNC_2(VAR_6);
 unsigned long VAR_8, VAR_9;

 VAR_9 = FUNC_0(FUNC_1(VAR_7) + VAR_2) + VAR_5;
 FUNC_3(VAR_9, FUNC_1(VAR_7) + VAR_1);
 VAR_8 = FUNC_0(FUNC_1(VAR_7) + VAR_2);

 if ((VAR_9 - VAR_8) > VAR_5)
  return -VAR_0;

 FUNC_3(VAR_4, FUNC_1(VAR_7) + VAR_3);

 return 0;
}
