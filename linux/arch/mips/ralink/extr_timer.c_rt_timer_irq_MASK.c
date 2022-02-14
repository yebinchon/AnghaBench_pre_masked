
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_timer {int timer_freq; int timer_div; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rt_timer*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_4, void *VAR_5)
{
 struct rt_timer *VAR_6 = (struct rt_timer *) VAR_5;

 FUNC_0(VAR_6, VAR_1, VAR_6->timer_freq / VAR_6->timer_div);
 FUNC_0(VAR_6, VAR_2, VAR_3);

 return VAR_0;
}
