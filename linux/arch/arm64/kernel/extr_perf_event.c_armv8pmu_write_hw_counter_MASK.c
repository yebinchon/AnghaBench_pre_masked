
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int idx; } ;
struct perf_event {TYPE_1__ hw; } ;


 scalar_t__ FUNC_0 (struct perf_event*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct perf_event *VAR_0,
          u64 VAR_1)
{
 int VAR_2 = VAR_0->hw.idx;

 if (FUNC_0(VAR_0)) {
  FUNC_1(VAR_2, FUNC_3(VAR_1));
  FUNC_1(VAR_2 - 1, FUNC_2(VAR_1));
 } else {
  FUNC_1(VAR_2, VAR_1);
 }
}
