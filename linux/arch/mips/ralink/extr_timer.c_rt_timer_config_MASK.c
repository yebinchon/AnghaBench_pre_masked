
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_timer {unsigned long timer_freq; unsigned long timer_div; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt_timer*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct rt_timer *VAR_1, unsigned long VAR_2)
{
 if (VAR_1->timer_freq < VAR_2)
  VAR_1->timer_div = VAR_1->timer_freq;
 else
  VAR_1->timer_div = VAR_2;

 FUNC_0(VAR_1, VAR_0, VAR_1->timer_freq / VAR_1->timer_div);

 return 0;
}
