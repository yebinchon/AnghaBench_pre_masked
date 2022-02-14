
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long config_base; } ;
struct perf_event {TYPE_1__ hw; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static int FUNC_0(struct perf_event *VAR_2)
{
 unsigned long VAR_3 = VAR_2->hw.config_base & VAR_1;
 return VAR_3 != VAR_0;
}
