
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 struct perf_event** FUNC_2 (int *) ;

void FUNC_3(struct perf_event *VAR_1)
{
 struct perf_event **VAR_2 = FUNC_2(&VAR_0);

 if (*VAR_2 != VAR_1) {
  FUNC_0(1, "Can't find the breakpoint");
  return;
 }

 *VAR_2 = ((void*)0);
 FUNC_1();
}
