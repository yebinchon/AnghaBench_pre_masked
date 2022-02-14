
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int cpu; } ;
struct amd_uncore {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;
 struct amd_uncore** FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static struct amd_uncore *FUNC_3(struct perf_event *VAR_2)
{
 if (FUNC_1(VAR_2) && VAR_1)
  return *FUNC_2(VAR_1, VAR_2->cpu);
 else if (FUNC_0(VAR_2) && VAR_0)
  return *FUNC_2(VAR_0, VAR_2->cpu);

 return ((void*)0);
}
