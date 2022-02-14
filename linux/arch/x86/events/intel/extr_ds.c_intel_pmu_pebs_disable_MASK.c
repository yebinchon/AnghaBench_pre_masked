
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event {unsigned long long idx; int flags; int config; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {scalar_t__ n_pebs; scalar_t__ n_large_pebs; scalar_t__ n_pebs_via_pt; unsigned long long pebs_enabled; scalar_t__ enabled; } ;
struct TYPE_2__ {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct perf_event*) ;
 struct cpu_hw_events* FUNC_2 (int *) ;
 int FUNC_3 (int ,unsigned long long) ;
 TYPE_1__ VAR_5 ;

void FUNC_4(struct perf_event *VAR_6)
{
 struct cpu_hw_events *VAR_7 = FUNC_2(&VAR_4);
 struct hw_perf_event *VAR_8 = &VAR_6->hw;

 if (VAR_7->n_pebs == VAR_7->n_large_pebs &&
     VAR_7->n_pebs != VAR_7->n_pebs_via_pt)
  FUNC_0();

 VAR_7->pebs_enabled &= ~(1ULL << VAR_8->idx);

 if ((VAR_6->hw.flags & VAR_2) &&
     (VAR_5.version < 5))
  VAR_7->pebs_enabled &= ~(1ULL << (VAR_8->idx + 32));
 else if (VAR_6->hw.flags & VAR_3)
  VAR_7->pebs_enabled &= ~(1ULL << 63);

 FUNC_1(VAR_6);

 if (VAR_7->enabled)
  FUNC_3(VAR_1, VAR_7->pebs_enabled);

 VAR_8->config |= VAR_0;
}
