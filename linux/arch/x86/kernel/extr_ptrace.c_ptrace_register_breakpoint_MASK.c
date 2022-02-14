
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct perf_event_attr {unsigned long bp_addr; } ;
struct perf_event {int dummy; } ;


 struct perf_event* FUNC_0 (int) ;
 int FUNC_1 (struct perf_event_attr*) ;
 int FUNC_2 (struct perf_event_attr*,int,int,int) ;
 int VAR_0 ;
 struct perf_event* FUNC_3 (struct perf_event_attr*,int ,int *,struct task_struct*) ;

__attribute__((used)) static struct perf_event *
FUNC_4(struct task_struct *VAR_1, int VAR_2, int VAR_3,
    unsigned long VAR_4, bool VAR_5)
{
 struct perf_event_attr VAR_6;
 int VAR_7;

 FUNC_1(&VAR_6);
 VAR_6.bp_addr = VAR_4;

 VAR_7 = FUNC_2(&VAR_6, VAR_2, VAR_3, VAR_5);
 if (VAR_7)
  return FUNC_0(VAR_7);

 return FUNC_3(&VAR_6, VAR_0,
       ((void*)0), VAR_1);
}
