
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu {int dummy; } ;
typedef int i915_reg_t ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int) ;
 unsigned int VAR_8 ;
 int FUNC_1 (int) ;
 unsigned int VAR_9 ;
 int FUNC_2 (int) ;
 unsigned int VAR_10 ;
 int FUNC_3 (char*,unsigned int) ;
 unsigned int FUNC_4 (struct intel_vgpu*,int ) ;

__attribute__((used)) static int FUNC_5(struct intel_vgpu *VAR_11,
  enum pipe VAR_12, unsigned int VAR_13)
{
 i915_reg_t VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17, VAR_18;
 unsigned int VAR_19, VAR_20;
 unsigned int VAR_21;

 VAR_14 = FUNC_1(VAR_12);
 VAR_15 = FUNC_2(VAR_12);
 VAR_16 = FUNC_0(VAR_12);

 if (VAR_13 == VAR_1) {
  VAR_19 = VAR_4;
  VAR_20 = VAR_3;
  VAR_21 = VAR_7;
 } else if (VAR_13 == VAR_2) {
  VAR_19 = VAR_6;
  VAR_20 = VAR_5;
  VAR_21 = VAR_9;
 } else {
  FUNC_3("Invalid train pattern %d\n", VAR_13);
  return -VAR_0;
 }

 VAR_17 = VAR_8 | VAR_19;
 VAR_18 = VAR_10 | VAR_20;


 if (FUNC_4(VAR_11, VAR_14) & VAR_21)
  return 0;

 if (((FUNC_4(VAR_11, VAR_15) & VAR_18)
   == VAR_18)
  && ((FUNC_4(VAR_11, VAR_16) & VAR_17)
   == VAR_17))
  return 1;
 else
  return 0;
}
