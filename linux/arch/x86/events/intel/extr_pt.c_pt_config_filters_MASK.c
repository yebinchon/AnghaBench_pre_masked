
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct pt_filters {unsigned int nr_filters; struct pt_filter* filter; } ;
struct pt_filter {scalar_t__ msr_a; scalar_t__ msr_b; int config; } ;
struct TYPE_7__ {TYPE_2__* filter; } ;
struct pt {TYPE_3__ filters; } ;
struct TYPE_5__ {struct pt_filters* addr_filters; } ;
struct perf_event {TYPE_1__ hw; } ;
struct TYPE_8__ {int reg_off; int msr_b; int msr_a; } ;
struct TYPE_6__ {scalar_t__ msr_a; scalar_t__ msr_b; } ;


 int FUNC_0 (struct perf_event*) ;
 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 struct pt* FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static u64 FUNC_3(struct perf_event *VAR_2)
{
 struct pt_filters *VAR_3 = VAR_2->hw.addr_filters;
 struct pt *VAR_4 = FUNC_1(&VAR_1);
 unsigned int VAR_5 = 0;
 u64 VAR_6 = 0;

 if (!VAR_3)
  return 0;

 FUNC_0(VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_3->nr_filters; VAR_5++) {
  struct pt_filter *VAR_7 = &VAR_3->filter[VAR_5];
  if (VAR_4->filters.filter[VAR_5].msr_a != VAR_7->msr_a) {
   FUNC_2(VAR_0[VAR_5].msr_a, VAR_7->msr_a);
   VAR_4->filters.filter[VAR_5].msr_a = VAR_7->msr_a;
  }

  if (VAR_4->filters.filter[VAR_5].msr_b != VAR_7->msr_b) {
   FUNC_2(VAR_0[VAR_5].msr_b, VAR_7->msr_b);
   VAR_4->filters.filter[VAR_5].msr_b = VAR_7->msr_b;
  }

  VAR_6 |= VAR_7->config << VAR_0[VAR_5].reg_off;
 }

 return VAR_6;
}
