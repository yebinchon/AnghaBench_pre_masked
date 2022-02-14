
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int idx; } ;
struct perf_event {TYPE_1__ hw; } ;


 scalar_t__ FUNC_0 (struct perf_event*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline u64 FUNC_2(struct perf_event *VAR_0)
{
 int VAR_1 = VAR_0->hw.idx;
 u64 VAR_2 = 0;

 VAR_2 = FUNC_1(VAR_1);
 if (FUNC_0(VAR_0))
  VAR_2 = (VAR_2 << 32) | FUNC_1(VAR_1 - 1);
 return VAR_2;
}
