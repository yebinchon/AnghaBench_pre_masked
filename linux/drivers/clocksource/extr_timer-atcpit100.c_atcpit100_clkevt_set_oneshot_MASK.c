
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timer_of {int dummy; } ;
struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct timer_of*) ;
 struct timer_of* FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct clock_event_device *VAR_3)
{
 struct timer_of *VAR_4 = FUNC_2(VAR_3);
 u32 VAR_5;

 FUNC_3(~0x0, FUNC_1(VAR_4) + VAR_1);
 VAR_5 = FUNC_0(FUNC_1(VAR_4) + VAR_2);
 FUNC_3(VAR_5 | VAR_0, FUNC_1(VAR_4) + VAR_2);

 return 0;
}
