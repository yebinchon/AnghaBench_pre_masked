
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_timer {int dummy; } ;
struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rk_timer* FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (struct rk_timer*) ;
 int FUNC_2 (struct rk_timer*,int) ;
 int FUNC_3 (unsigned long,struct rk_timer*) ;

__attribute__((used)) static inline int FUNC_4(unsigned long VAR_2,
       struct clock_event_device *VAR_3)
{
 struct rk_timer *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_4);
 FUNC_3(VAR_2, VAR_4);
 FUNC_2(VAR_4, VAR_1 |
          VAR_0);
 return 0;
}
