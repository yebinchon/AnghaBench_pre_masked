
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_engine_cs {int gt; } ;
struct i915_request {struct intel_engine_cs* engine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int*) ;
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
 int VAR_17 ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int*,int,int const) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct i915_request*,int*) ;
 int* FUNC_5 (struct i915_request*,int) ;

__attribute__((used)) static int FUNC_6(struct i915_request *VAR_18,
       u32 VAR_19)
{
 struct intel_engine_cs *VAR_20 = VAR_18->engine;
 const u32 VAR_21 =
  FUNC_3(VAR_20->gt,
     VAR_2);

 if (VAR_19 & VAR_0) {
  u32 *VAR_22;
  u32 VAR_23 = 0;

  VAR_23 |= VAR_5;

  VAR_23 |= VAR_15;
  VAR_23 |= VAR_12;
  VAR_23 |= VAR_7;
  VAR_23 |= VAR_6;
  VAR_23 |= VAR_8;
  VAR_23 |= VAR_11;
  VAR_23 |= VAR_9;

  VAR_22 = FUNC_5(VAR_18, 6);
  if (FUNC_0(VAR_22))
   return FUNC_1(VAR_22);

  VAR_22 = FUNC_2(VAR_22, VAR_23, VAR_21);
  FUNC_4(VAR_18, VAR_22);
 }

 if (VAR_19 & VAR_1) {
  u32 *VAR_24;
  u32 VAR_25 = 0;

  VAR_25 |= VAR_5;

  VAR_25 |= VAR_3;
  VAR_25 |= VAR_16;
  VAR_25 |= VAR_10;
  VAR_25 |= VAR_14;
  VAR_25 |= VAR_17;
  VAR_25 |= VAR_4;
  VAR_25 |= VAR_13;
  VAR_25 |= VAR_11;
  VAR_25 |= VAR_9;

  VAR_24 = FUNC_5(VAR_18, 6);
  if (FUNC_0(VAR_24))
   return FUNC_1(VAR_24);

  VAR_24 = FUNC_2(VAR_24, VAR_25, VAR_21);
  FUNC_4(VAR_18, VAR_24);
 }

 return 0;
}
