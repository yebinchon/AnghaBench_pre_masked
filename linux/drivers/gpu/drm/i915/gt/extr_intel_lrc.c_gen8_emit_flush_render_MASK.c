
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_engine_cs {int gt; } ;
struct i915_request {int i915; struct intel_engine_cs* engine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int*,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct i915_request*,int*) ;
 int* FUNC_7 (struct i915_request*,int) ;

__attribute__((used)) static int FUNC_8(struct i915_request *VAR_17,
      u32 VAR_18)
{
 struct intel_engine_cs *VAR_19 = VAR_17->engine;
 u32 VAR_20 =
  FUNC_5(VAR_19->gt,
     VAR_2);
 bool VAR_21 = 0, VAR_22 = 0;
 u32 *VAR_23, VAR_24 = 0;
 int VAR_25;

 VAR_24 |= VAR_5;

 if (VAR_18 & VAR_0) {
  VAR_24 |= VAR_12;
  VAR_24 |= VAR_7;
  VAR_24 |= VAR_6;
  VAR_24 |= VAR_8;
 }

 if (VAR_18 & VAR_1) {
  VAR_24 |= VAR_15;
  VAR_24 |= VAR_10;
  VAR_24 |= VAR_14;
  VAR_24 |= VAR_16;
  VAR_24 |= VAR_4;
  VAR_24 |= VAR_13;
  VAR_24 |= VAR_11;
  VAR_24 |= VAR_9;





  if (FUNC_1(VAR_17->i915, 9))
   VAR_21 = 1;


  if (FUNC_2(VAR_17->i915, 0, VAR_3))
   VAR_22 = 1;
 }

 VAR_25 = 6;

 if (VAR_21)
  VAR_25 += 6;

 if (VAR_22)
  VAR_25 += 12;

 VAR_23 = FUNC_7(VAR_17, VAR_25);
 if (FUNC_0(VAR_23))
  return FUNC_3(VAR_23);

 if (VAR_21)
  VAR_23 = FUNC_4(VAR_23, 0, 0);

 if (VAR_22)
  VAR_23 = FUNC_4(VAR_23, VAR_6,
         0);

 VAR_23 = FUNC_4(VAR_23, VAR_24, VAR_20);

 if (VAR_22)
  VAR_23 = FUNC_4(VAR_23, VAR_5, 0);

 FUNC_6(VAR_17, VAR_23);

 return 0;
}
