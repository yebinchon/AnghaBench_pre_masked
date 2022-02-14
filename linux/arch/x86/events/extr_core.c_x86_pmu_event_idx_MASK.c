
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int idx; int flags; } ;
struct perf_event {TYPE_1__ hw; } ;
struct TYPE_4__ {scalar_t__ num_counters_fixed; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct perf_event *VAR_3)
{
 int VAR_4 = VAR_3->hw.idx;

 if (!(VAR_3->hw.flags & VAR_1))
  return 0;

 if (VAR_2.num_counters_fixed && VAR_4 >= VAR_0) {
  VAR_4 -= VAR_0;
  VAR_4 |= 1 << 30;
 }

 return VAR_4 + 1;
}
