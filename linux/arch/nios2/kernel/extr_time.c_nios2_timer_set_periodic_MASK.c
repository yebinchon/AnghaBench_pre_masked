
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nios2_timer {int freq; } ;
struct nios2_clockevent_dev {struct nios2_timer timer; } ;
struct clock_event_device {int dummy; } ;


 unsigned long FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct nios2_timer*,unsigned long,int) ;
 struct nios2_clockevent_dev* FUNC_2 (struct clock_event_device*) ;

__attribute__((used)) static int FUNC_3(struct clock_event_device *VAR_1)
{
 unsigned long VAR_2;
 struct nios2_clockevent_dev *VAR_3 = FUNC_2(VAR_1);
 struct nios2_timer *VAR_4 = &VAR_3->timer;

 VAR_2 = FUNC_0(VAR_4->freq, VAR_0);
 FUNC_1(VAR_4, VAR_2, 1);
 return 0;
}
