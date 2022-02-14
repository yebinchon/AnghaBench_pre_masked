
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_guest_switch_msr {int host; int guest; int msr; } ;
struct cpu_hw_events {int intel_ctrl_guest_mask; int intel_ctrl_host_mask; int pebs_enabled; struct perf_guest_switch_msr* guest_switch_msrs; } ;
struct TYPE_2__ {int intel_ctrl; int flags; scalar_t__ pebs_no_isolation; scalar_t__ pebs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cpu_hw_events* FUNC_0 (int *) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static struct perf_guest_switch_msr *FUNC_1(int *VAR_6)
{
 struct cpu_hw_events *VAR_7 = FUNC_0(&VAR_4);
 struct perf_guest_switch_msr *VAR_8 = VAR_7->guest_switch_msrs;

 VAR_8[0].msr = VAR_0;
 VAR_8[0].host = VAR_5.intel_ctrl & ~VAR_7->intel_ctrl_guest_mask;
 VAR_8[0].guest = VAR_5.intel_ctrl & ~VAR_7->intel_ctrl_host_mask;
 if (VAR_5.flags & VAR_3)
  VAR_8[0].guest &= ~VAR_7->pebs_enabled;
 else
  VAR_8[0].guest &= ~(VAR_7->pebs_enabled & VAR_2);
 *VAR_6 = 1;

 if (VAR_5.pebs && VAR_5.pebs_no_isolation) {
  VAR_8[1].msr = VAR_1;
  VAR_8[1].host = VAR_7->pebs_enabled;
  VAR_8[1].guest = 0;
  *VAR_6 = 2;
 }

 return VAR_8;
}
