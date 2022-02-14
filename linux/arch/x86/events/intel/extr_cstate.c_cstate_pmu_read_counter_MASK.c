
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int event_base; } ;
struct perf_event {TYPE_1__ hw; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline u64 FUNC_1(struct perf_event *VAR_0)
{
 u64 VAR_1;

 FUNC_0(VAR_0->hw.event_base, VAR_1);
 return VAR_1;
}
