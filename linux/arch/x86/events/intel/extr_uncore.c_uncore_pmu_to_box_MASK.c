
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore_pmu {struct intel_uncore_box** boxes; } ;
struct intel_uncore_box {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;

struct intel_uncore_box *FUNC_1(struct intel_uncore_pmu *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_2);





 return VAR_3 < VAR_0 ? VAR_1->boxes[VAR_3] : ((void*)0);
}
