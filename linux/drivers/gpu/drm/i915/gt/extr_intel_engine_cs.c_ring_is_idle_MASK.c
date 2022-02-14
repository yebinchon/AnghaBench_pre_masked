
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int i915; int mmio_base; } ;


 int FUNC_0 (struct intel_engine_cs*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct intel_engine_cs*) ;
 int FUNC_4 (struct intel_engine_cs*) ;

__attribute__((used)) static bool FUNC_5(struct intel_engine_cs *VAR_6)
{
 bool VAR_7 = 1;

 if (FUNC_1(!VAR_6->mmio_base))
  return 1;

 if (!FUNC_3(VAR_6))
  return 1;


 if ((FUNC_0(VAR_6, VAR_2) & VAR_0) !=
     (FUNC_0(VAR_6, VAR_4) & VAR_5))
  VAR_7 = 0;


 if (FUNC_2(VAR_6->i915) > 2 &&
     !(FUNC_0(VAR_6, VAR_3) & VAR_1))
  VAR_7 = 0;

 FUNC_4(VAR_6);

 return VAR_7;
}
