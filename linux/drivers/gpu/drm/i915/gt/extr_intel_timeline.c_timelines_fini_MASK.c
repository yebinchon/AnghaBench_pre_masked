
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gt_timelines {int hwsp_free_list; int active_list; } ;
struct intel_gt {struct intel_gt_timelines timelines; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct intel_gt *VAR_0)
{
 struct intel_gt_timelines *VAR_1 = &VAR_0->timelines;

 FUNC_0(!FUNC_1(&VAR_1->active_list));
 FUNC_0(!FUNC_1(&VAR_1->hwsp_free_list));
}
