
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_engine_cs {int i915; } ;


 int FUNC_0 (struct intel_engine_cs const*,int ) ;
 int FUNC_1 (struct intel_engine_cs const*,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

u64 FUNC_3(const struct intel_engine_cs *VAR_2)
{
 u64 VAR_3;

 if (FUNC_2(VAR_2->i915) >= 8)
  VAR_3 = FUNC_1(VAR_2, VAR_0, VAR_1);
 else
  VAR_3 = FUNC_0(VAR_2, VAR_0);

 return VAR_3;
}
