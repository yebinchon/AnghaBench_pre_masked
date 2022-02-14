
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hw_perf_event_extra {int idx; int config; int alloc; } ;
struct TYPE_2__ {struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_1__ hw; } ;
struct intel_uncore_extra_reg {int config; int lock; int ref; } ;
struct intel_uncore_box {struct intel_uncore_extra_reg* shared_regs; } ;
struct event_constraint {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct perf_event*,int,int) ;
 int FUNC_6 (struct intel_uncore_box*) ;
 struct event_constraint VAR_1 ;

__attribute__((used)) static struct event_constraint *
FUNC_7(struct intel_uncore_box *VAR_2, struct perf_event *VAR_3)
{
 struct hw_perf_event_extra *VAR_4 = &VAR_3->hw.extra_reg;
 struct intel_uncore_extra_reg *VAR_5 = &VAR_2->shared_regs[0];
 unsigned long VAR_6;
 int VAR_7 = VAR_4->idx;
 u64 VAR_8, VAR_9 = VAR_4->config;
 bool VAR_10 = 0;

 if (VAR_4->idx == VAR_0 ||
     (!FUNC_6(VAR_2) && VAR_4->alloc))
  return ((void*)0);
again:
 VAR_8 = 0xffULL << (VAR_7 * 8);
 FUNC_3(&VAR_5->lock, VAR_6);
 if (!FUNC_0(FUNC_2(&VAR_5->ref), VAR_7, 8) ||
     !((VAR_9 ^ VAR_5->config) & VAR_8)) {
  FUNC_1(1 << (VAR_7 * 8), &VAR_5->ref);
  VAR_5->config &= ~VAR_8;
  VAR_5->config |= VAR_9 & VAR_8;
  VAR_10 = 1;
 }
 FUNC_4(&VAR_5->lock, VAR_6);

 if (!VAR_10) {
  VAR_7 = (VAR_7 + 1) % 4;
  if (VAR_7 != VAR_4->idx) {
   VAR_9 = FUNC_5(VAR_3, VAR_7, 0);
   goto again;
  }
  return &VAR_1;
 }

 if (!FUNC_6(VAR_2)) {
  if (VAR_7 != VAR_4->idx)
   FUNC_5(VAR_3, VAR_7, 1);
  VAR_4->alloc = 1;
 }
 return ((void*)0);
}
