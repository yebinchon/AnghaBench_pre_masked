
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i915_request {TYPE_1__* engine; } ;
struct TYPE_2__ {int gt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int*) ;
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
 int FUNC_2 (int*) ;
 int FUNC_3 (struct i915_request*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct i915_request*,int*) ;
 int* FUNC_6 (struct i915_request*,int) ;

__attribute__((used)) static int
FUNC_7(struct i915_request *VAR_18, u32 VAR_19)
{
 u32 VAR_20 =
  FUNC_4(VAR_18->engine->gt,
     VAR_2);
 u32 *VAR_21, VAR_22 = 0;
 VAR_22 |= VAR_4;





 if (VAR_19 & VAR_0) {
  VAR_22 |= VAR_12;
  VAR_22 |= VAR_6;
  VAR_22 |= VAR_5;
  VAR_22 |= VAR_7;
 }
 if (VAR_19 & VAR_1) {
  VAR_22 |= VAR_16;
  VAR_22 |= VAR_9;
  VAR_22 |= VAR_15;
  VAR_22 |= VAR_17;
  VAR_22 |= VAR_3;
  VAR_22 |= VAR_14;
  VAR_22 |= VAR_10;



  VAR_22 |= VAR_11;
  VAR_22 |= VAR_8;

  VAR_22 |= VAR_13;




  FUNC_3(VAR_18);
 }

 VAR_21 = FUNC_6(VAR_18, 4);
 if (FUNC_1(VAR_21))
  return FUNC_2(VAR_21);

 *VAR_21++ = FUNC_0(4);
 *VAR_21++ = VAR_22;
 *VAR_21++ = VAR_20;
 *VAR_21++ = 0;
 FUNC_5(VAR_18, VAR_21);

 return 0;
}
