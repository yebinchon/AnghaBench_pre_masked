
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timer_of {int dummy; } ;
struct clock_event_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct timer_of*) ;
 int FUNC_2 (struct timer_of*) ;
 struct timer_of* FUNC_3 (struct clock_event_device*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct clock_event_device *VAR_4)
{
 struct timer_of *VAR_5 = FUNC_3(VAR_4);
 u32 VAR_6;

 FUNC_4(FUNC_2(VAR_5), FUNC_1(VAR_5) + VAR_1);

 VAR_6 = FUNC_0(FUNC_1(VAR_5) + VAR_0);
 VAR_6 &= ~VAR_3;
 VAR_6 |= VAR_2;
 FUNC_4(VAR_6, FUNC_1(VAR_5) + VAR_0);

 return 0;
}
