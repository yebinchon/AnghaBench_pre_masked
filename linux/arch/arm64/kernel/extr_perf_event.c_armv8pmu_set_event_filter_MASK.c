
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {scalar_t__ exclude_user; scalar_t__ exclude_kernel; scalar_t__ exclude_host; int exclude_hv; scalar_t__ exclude_guest; scalar_t__ exclude_idle; } ;
struct hw_perf_event {unsigned long config_base; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct hw_perf_event *VAR_4,
         struct perf_event_attr *VAR_5)
{
 unsigned long VAR_6 = 0;

 if (VAR_5->exclude_idle)
  return -VAR_3;







 if (FUNC_0()) {
  if (!VAR_5->exclude_kernel && !VAR_5->exclude_host)
   VAR_6 |= VAR_2;
  if (VAR_5->exclude_guest)
   VAR_6 |= VAR_1;
  if (VAR_5->exclude_host)
   VAR_6 |= VAR_0;
 } else {
  if (!VAR_5->exclude_hv && !VAR_5->exclude_host)
   VAR_6 |= VAR_2;
 }




 if (VAR_5->exclude_kernel)
  VAR_6 |= VAR_1;

 if (VAR_5->exclude_user)
  VAR_6 |= VAR_0;





 VAR_4->config_base = VAR_6;

 return 0;
}
