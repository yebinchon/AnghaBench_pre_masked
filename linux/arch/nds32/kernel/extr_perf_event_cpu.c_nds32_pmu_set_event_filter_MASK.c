
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {scalar_t__ exclude_kernel; scalar_t__ exclude_user; } ;
struct hw_perf_event {int idx; unsigned long config_base; } ;


 unsigned long* VAR_0 ;
 unsigned long* VAR_1 ;

__attribute__((used)) static int FUNC_0(struct hw_perf_event *VAR_2,
          struct perf_event_attr *VAR_3)
{
 unsigned long VAR_4 = 0;
 int VAR_5 = VAR_2->idx;
 unsigned long VAR_6 = 0;
 unsigned long VAR_7 = 0;

 if (VAR_5 == -1)
  return 0;

 VAR_6 = VAR_0[VAR_5];
 VAR_7 = VAR_1[VAR_5];



 if (VAR_3->exclude_user)
  VAR_4 |= VAR_7;

 if (VAR_3->exclude_kernel)
  VAR_4 |= VAR_6;





 VAR_2->config_base |= VAR_4;
 return 0;
}
