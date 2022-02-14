
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct perf_event {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* limit_period ) (struct perf_event*,scalar_t__) ;scalar_t__ (* check_period ) (struct perf_event*,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct perf_event*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct perf_event*,scalar_t__) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_2(struct perf_event *VAR_2, u64 VAR_3)
{
 if (VAR_1.check_period && VAR_1.check_period(VAR_2, VAR_3))
  return -VAR_0;

 if (VAR_3 && VAR_1.limit_period) {
  if (VAR_1.limit_period(VAR_2, VAR_3) > VAR_3)
   return -VAR_0;
 }

 return 0;
}
