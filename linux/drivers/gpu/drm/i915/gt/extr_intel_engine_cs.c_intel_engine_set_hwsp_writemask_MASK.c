
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_engine_cs {scalar_t__ class; int i915; } ;


 int FUNC_0 (struct intel_engine_cs*,int ,int ) ;
 int FUNC_1 (struct intel_engine_cs*,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void FUNC_3(struct intel_engine_cs *VAR_2, u32 VAR_3)
{




 if (FUNC_2(VAR_2->i915) < 6 && VAR_2->class != VAR_0)
  return;

 if (FUNC_2(VAR_2->i915) >= 3)
  FUNC_0(VAR_2, VAR_1, VAR_3);
 else
  FUNC_1(VAR_2, VAR_1, VAR_3);
}
