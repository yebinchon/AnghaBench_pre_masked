
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct intel_engine_cs {int name; int mask; int gt; int i915; } ;
typedef enum intel_engine_hangcheck_action { ____Placeholder_intel_engine_hangcheck_action } intel_engine_hangcheck_action ;


 int VAR_0 ;
 int FUNC_0 (struct intel_engine_cs*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct intel_engine_cs*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct intel_engine_cs*,int ) ;
 int FUNC_4 (int ,int ,int ,char*,int ) ;

__attribute__((used)) static enum intel_engine_hangcheck_action
FUNC_5(struct intel_engine_cs *VAR_4, u64 VAR_5)
{
 enum intel_engine_hangcheck_action VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (VAR_6 != VAR_0)
  return VAR_6;

 if (FUNC_2(VAR_4->i915, 2))
  return VAR_0;






 VAR_7 = FUNC_0(VAR_4, VAR_2);
 if (VAR_7 & VAR_3) {
  FUNC_4(VAR_4->gt, VAR_4->mask, 0,
          "stuck wait on %s", VAR_4->name);
  FUNC_1(VAR_4, VAR_2, VAR_7);
  return VAR_1;
 }

 return VAR_0;
}
