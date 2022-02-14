
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt_timer {int timer_freq; int timer_div; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rt_timer*,int ) ;
 int FUNC_1 (struct rt_timer*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct rt_timer *VAR_3)
{
 u32 VAR_4;

 FUNC_1(VAR_3, VAR_1, VAR_3->timer_freq / VAR_3->timer_div);

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_4 |= VAR_2;
 FUNC_1(VAR_3, VAR_0, VAR_4);

 return 0;
}
