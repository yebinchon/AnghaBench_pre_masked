
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct davinci_clockevent {int cmp_off; } ;
struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct davinci_clockevent*,int ) ;
 int FUNC_1 (struct davinci_clockevent*,int ,unsigned int) ;
 struct davinci_clockevent* FUNC_2 (struct clock_event_device*) ;

__attribute__((used)) static int
FUNC_3(unsigned long VAR_1,
          struct clock_event_device *VAR_2)
{
 struct davinci_clockevent *VAR_3 = FUNC_2(VAR_2);
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_3,
         VAR_0);
 FUNC_1(VAR_3,
     VAR_3->cmp_off, VAR_4 + VAR_1);

 return 0;
}
