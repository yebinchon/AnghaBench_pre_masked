
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int dummy; } ;
struct i915_sched_node {int link; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct intel_engine_cs*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct intel_engine_cs *VAR_0,
     struct i915_sched_node *VAR_1,
     int VAR_2)
{
 FUNC_0(!FUNC_3(&VAR_1->link));
 FUNC_2(&VAR_1->link, FUNC_1(VAR_0, VAR_2));
}
