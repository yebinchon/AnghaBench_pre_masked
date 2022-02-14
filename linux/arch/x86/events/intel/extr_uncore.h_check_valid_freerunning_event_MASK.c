
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config; } ;
struct perf_event {TYPE_1__ hw; } ;
struct intel_uncore_box {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct intel_uncore_box*,struct perf_event*) ;
 unsigned int FUNC_3 (struct intel_uncore_box*,struct perf_event*) ;

__attribute__((used)) static inline bool FUNC_4(struct intel_uncore_box *VAR_0,
       struct perf_event *VAR_1)
{
 unsigned int VAR_2 = FUNC_1(VAR_1->hw.config);
 unsigned int VAR_3 = FUNC_0(VAR_1->hw.config);

 return (VAR_2 < FUNC_3(VAR_0, VAR_1)) &&
        (VAR_3 < FUNC_2(VAR_0, VAR_1));
}
