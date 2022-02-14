
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct intel_engine_cs {int name; int mmio_base; struct intel_uncore* uncore; } ;
typedef int i915_reg_t ;


 int FUNC_0 (char*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct intel_uncore*,int const,int,int,int,int ,int *) ;
 int FUNC_4 (struct intel_uncore*,int const) ;
 int FUNC_5 (struct intel_uncore*,int const,int ) ;

__attribute__((used)) static int FUNC_6(struct intel_engine_cs *VAR_3)
{
 struct intel_uncore *VAR_4 = VAR_3->uncore;
 const i915_reg_t VAR_5 = FUNC_1(VAR_3->mmio_base);
 u32 VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(VAR_4, VAR_5);
 if (VAR_8 & VAR_0) {




  VAR_6 = VAR_0;
  VAR_7 = VAR_0;


  VAR_8 = 0;
 } else if (!(VAR_8 & VAR_1)) {
  VAR_6 = VAR_2;
  VAR_7 = VAR_1;
  VAR_8 = VAR_1;
 } else {
  return 0;
 }

 FUNC_5(VAR_4, VAR_5, FUNC_2(VAR_6));
 VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_7, VAR_8,
        700, 0, ((void*)0));
 if (VAR_9)
  FUNC_0("%s reset request timed out: {request: %08x, RESET_CTL: %08x}\n",
     VAR_3->name, VAR_6,
     FUNC_4(VAR_4, VAR_5));

 return VAR_9;
}
