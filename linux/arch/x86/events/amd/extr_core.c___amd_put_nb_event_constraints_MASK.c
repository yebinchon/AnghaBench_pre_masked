
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct cpu_hw_events {struct amd_nb* amd_nb; } ;
struct amd_nb {scalar_t__ owners; } ;
struct TYPE_2__ {int num_counters; } ;


 struct perf_event* FUNC_0 (scalar_t__,struct perf_event*,int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct cpu_hw_events *VAR_1,
        struct perf_event *VAR_2)
{
 struct amd_nb *VAR_3 = VAR_1->amd_nb;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_0.num_counters; VAR_4++) {
  if (FUNC_0(VAR_3->owners + VAR_4, VAR_2, ((void*)0)) == VAR_2)
   break;
 }
}
