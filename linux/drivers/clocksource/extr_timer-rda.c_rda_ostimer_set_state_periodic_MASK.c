
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_of {int dummy; } ;
struct clock_event_device {unsigned long long mult; unsigned long long shift; } ;


 unsigned long long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct timer_of*) ;
 struct timer_of* FUNC_3 (struct clock_event_device*) ;

__attribute__((used)) static int FUNC_4(struct clock_event_device *VAR_2)
{
 struct timer_of *VAR_3 = FUNC_3(VAR_2);
 unsigned long VAR_4;

 FUNC_1(FUNC_2(VAR_3));

 VAR_4 = ((unsigned long long)VAR_1 / VAR_0 *
        VAR_2->mult) >> VAR_2->shift;
 FUNC_0(FUNC_2(VAR_3), 1, VAR_4);

 return 0;
}
