
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mips_perf_event {scalar_t__ cntr_mask; } ;
struct TYPE_2__ {struct mips_perf_event const** general_event_map; } ;


 int VAR_0 ;
 struct mips_perf_event const* FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static const struct mips_perf_event *FUNC_1(int VAR_2)
{

 if ((*VAR_1.general_event_map)[VAR_2].cntr_mask == 0)
  return FUNC_0(-VAR_0);
 return &(*VAR_1.general_event_map)[VAR_2];
}
