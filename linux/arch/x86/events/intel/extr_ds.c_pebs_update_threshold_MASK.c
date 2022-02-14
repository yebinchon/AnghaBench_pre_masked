
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct debug_store {scalar_t__ pebs_interrupt_threshold; scalar_t__ pebs_buffer_base; scalar_t__ pebs_absolute_maximum; } ;
struct cpu_hw_events {scalar_t__ n_pebs; scalar_t__ n_large_pebs; int pebs_record_size; scalar_t__ n_pebs_via_pt; struct debug_store* ds; } ;
struct TYPE_2__ {int flags; int max_pebs_events; int num_counters_fixed; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct cpu_hw_events *VAR_2)
{
 struct debug_store *VAR_3 = VAR_2->ds;
 u64 VAR_4;
 int VAR_5;

 if (VAR_2->n_pebs_via_pt)
  return;

 if (VAR_1.flags & VAR_0)
  VAR_5 = VAR_1.max_pebs_events + VAR_1.num_counters_fixed;
 else
  VAR_5 = VAR_1.max_pebs_events;

 if (VAR_2->n_pebs == VAR_2->n_large_pebs) {
  VAR_4 = VAR_3->pebs_absolute_maximum -
   VAR_5 * VAR_2->pebs_record_size;
 } else {
  VAR_4 = VAR_3->pebs_buffer_base + VAR_2->pebs_record_size;
 }

 VAR_3->pebs_interrupt_threshold = VAR_4;
}
