
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct TYPE_3__ {int pebs_output_pt_available; } ;
struct TYPE_4__ {TYPE_1__ intel_cap; } ;


 int FUNC_0 (struct perf_event*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct perf_event *VAR_1)
{
 if (!VAR_0.intel_cap.pebs_output_pt_available)
  return 0;

 return FUNC_0(VAR_1);
}
