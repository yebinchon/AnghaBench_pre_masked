
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int dummy; } ;
struct perf_event {struct perf_event_attr attr; } ;


 int FUNC_0 (struct perf_event*,struct perf_event_attr*) ;
 int FUNC_1 (struct perf_event_attr*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct perf_event *VAR_0, int VAR_1, int VAR_2,
     int VAR_3)
{
 struct perf_event_attr VAR_4 = VAR_0->attr;
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_4, VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_0, &VAR_4);
}
