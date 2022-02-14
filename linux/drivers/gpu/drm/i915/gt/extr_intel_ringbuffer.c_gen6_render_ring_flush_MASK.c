
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
 int FUNC_2 (int*) ;
 int FUNC_3 (struct i915_request*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct i915_request*,int*) ;
 int* FUNC_6 (struct i915_request*,int) ;

__attribute__((used)) static int
FUNC_7(struct i915_request *VAR_14, u32 VAR_15)
{
 u32 VAR_16 =
  FUNC_4(VAR_14->engine->gt,
     VAR_2);
 u32 *VAR_17, VAR_18 = 0;
 int VAR_19;


 VAR_19 = FUNC_3(VAR_14);
 if (VAR_19)
  return VAR_19;





 if (VAR_15 & VAR_0) {
  VAR_18 |= VAR_9;
  VAR_18 |= VAR_5;




  VAR_18 |= VAR_4;
 }
 if (VAR_15 & VAR_1) {
  VAR_18 |= VAR_12;
  VAR_18 |= VAR_7;
  VAR_18 |= VAR_11;
  VAR_18 |= VAR_13;
  VAR_18 |= VAR_3;
  VAR_18 |= VAR_10;



  VAR_18 |= VAR_8 | VAR_4;
 }

 VAR_17 = FUNC_6(VAR_14, 4);
 if (FUNC_1(VAR_17))
  return FUNC_2(VAR_17);

 *VAR_17++ = FUNC_0(4);
 *VAR_17++ = VAR_18;
 *VAR_17++ = VAR_16 | VAR_6;
 *VAR_17++ = 0;
 FUNC_5(VAR_14, VAR_17);

 return 0;
}
