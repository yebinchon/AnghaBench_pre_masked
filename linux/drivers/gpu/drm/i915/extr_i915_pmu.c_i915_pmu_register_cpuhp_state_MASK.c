
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_pmu {int node; } ;
typedef enum cpuhp_state { ____Placeholder_cpuhp_state } cpuhp_state ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct i915_pmu *VAR_4)
{
 enum cpuhp_state VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0,
          "perf/x86/intel/i915:online",
          VAR_3,
          VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = VAR_6;
 VAR_6 = FUNC_2(VAR_5, &VAR_4->node);
 if (VAR_6) {
  FUNC_0(VAR_5);
  return VAR_6;
 }

 VAR_1 = VAR_5;
 return 0;
}
