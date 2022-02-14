
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sf_buffer {scalar_t__ num_sdb; int sdbt; } ;
struct hw_perf_event {int dummy; } ;


 unsigned long FUNC_0 (struct hw_perf_event*) ;

__attribute__((used)) static unsigned long FUNC_1(struct sf_buffer *VAR_0,
     struct hw_perf_event *VAR_1)
{
 if (!VAR_0->sdbt)
  return FUNC_0(VAR_1);
 if (FUNC_0(VAR_1) > VAR_0->num_sdb)
  return FUNC_0(VAR_1) - VAR_0->num_sdb;
 return 0;
}
