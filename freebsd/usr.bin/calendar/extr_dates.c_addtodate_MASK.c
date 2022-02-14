
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {struct event* next; } ;
struct cal_day {struct event* events; } ;


 struct cal_day* FUNC_0 (int,int,int) ;

void
FUNC_1(struct event *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 struct cal_day *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 VAR_0->next = VAR_4->events;
 VAR_4->events = VAR_0;
}
