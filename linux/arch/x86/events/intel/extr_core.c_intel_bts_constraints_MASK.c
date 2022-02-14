
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;
struct event_constraint {int dummy; } ;


 struct event_constraint VAR_0 ;
 int FUNC_0 (struct perf_event*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static struct event_constraint *
FUNC_2(struct perf_event *VAR_1)
{
 if (FUNC_1(FUNC_0(VAR_1)))
  return &VAR_0;

 return ((void*)0);
}
